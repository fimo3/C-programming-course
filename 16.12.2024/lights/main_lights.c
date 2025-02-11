#include <stdio.h>
#include <stdint.h>
#include "lights.h"

int main() {
    uint8_t state = 0;
    int choice, room;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("3. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter room number (1-8): ");
                scanf("%d", &room);
                if (room < 1 || room > 8) {
                    printf("Invalid room number!\n");
                } else {
                    switch_lights(&state, room);
                }
                break;
            case 2:
                print_state(state);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
