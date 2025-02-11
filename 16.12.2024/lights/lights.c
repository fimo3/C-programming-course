#include <stdio.h>
#include <stdint.h>

void switch_lights(uint8_t *state, int room) {
    *state ^= (1 << (room - 1));
}

void print_state(uint8_t state) {
    printf("The light is on in rooms: ");
    for (int i = 0; i < 8; i++) {
        if (state & (1 << i)) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
}
