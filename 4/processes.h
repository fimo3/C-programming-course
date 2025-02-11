#ifndef PROCESSES_H_
#define PROCESSES_H_

struct Process {
    char name[30];
    int id;
};

extern struct Process processes[5];
extern int processcount;
#endif