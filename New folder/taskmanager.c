#include <stdio.h>
#include "processes.c"

void displaymenu()
{
    printf("\nМеню:\n");
    printf("1. Създаване на процес\n");
    printf("2. Извеждане на списък с процеси\n");
    printf("3. Спиране на процес\n");
    printf("4. Изход\n");
    printf("Изберете опция: ");
}

int main()
{
    int choice;
    char name[40];
    int id;

    while (1)
    {
        displaymenu();
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            printf("Въведете име на процеса (до 30 символа): ");
            scanf("%30s", name);
            if (createnewprocess(name))
            {
                printf("Процесът е създаден успешно.\n");
            }
            else
            {
                printf("Грешка: Достигнат е максималният брой процеси.\n");
            }
            break;
        case 2:
            listprocesses();
            break;
        case 3:
            printf("Въведете ID на процеса за спиране: ");
            scanf("%d", &id);
            stopprocess(id);
            printf("Процесът е спрян (ако е съществувал).\n");
            break;
        case 4:
            printf("Изход...\n");
            return 0;
        default:
            printf("Невалиден избор. Опитайте отново.\n");
        }
    }
}
