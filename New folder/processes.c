#include "processes.h"
#include <stdio.h>
#include <string.h>

Process processes[5];
static int processescount = 0;
static int next_id = 1;

static int nextprocessid()
{
    if (next_id > 0)
    {
        return next_id++;
    }
    return 0;
}

static int createnewprocess(const char *name)
{
    if (processescount >= 5)
    {
        return 0;
    }
    int id = nextprocessid();
    if (id == 0)
    {
        return 0;
    }
    processes[processescount].id = id;
    strncpy(processes[processescount].name, name, 30);
    processescount++;
    return id;
}

static void stopprocess(int id)
{
    int found = 0;
    for (int i = 0; i < processescount; i++)
    {
        if (processes[i].id == id)
        {
            found = 1;
        }
        if (found && i < processescount - 1)
        {
            processes[i] = processes[i + 1];
        }
    }
    if (found)
    {
        processescount--;
    }
}

static void listprocesses()
{
    if (processescount == 0)
    {
        printf("Няма активни процеси.\n");
        return;
    }
    for (int i = 0; i < processescount; i++)
    {
        printf("ID: %d, Име: %s\n", processes[i].id, processes[i].name);
    }
}
