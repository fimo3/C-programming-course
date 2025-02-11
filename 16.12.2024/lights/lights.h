#ifndef LIGHTS_H
#define LIGHTS_H

#include <stdint.h>

void switch_lights(uint8_t *state, int room);
void print_state(uint8_t state);

#endif
