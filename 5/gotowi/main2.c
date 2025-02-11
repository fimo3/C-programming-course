#include <stdio.h>
#include "transformation.h"

int main() {
    const char* inputs[] = {"123", "-456", "12ab34"};
    for (int i = 0; i < 3; i++) {
        transformation t = str_to_long(inputs[i]);
        if (t.error[0] == '\0') {
            printf("Input: %s, Result: %ld, Error: None\n", inputs[i], t.result);
        } else {
            printf("Input: %s, Result: %ld, Error: %s\n", inputs[i], t.result, t.error);
        }
    }
    return 0;
}
