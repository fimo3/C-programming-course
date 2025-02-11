#include "transformation.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <errno.h>

transformation str_to_long(const char* str) {
    transformation t;
    char* end;
    errno = 0;

    t.result = strtol(str, &end, 10);

    if (errno != 0 || *end != '\0') {
        t.result = 0;
        strcpy(t.error, "Invalid input string");
    } else {
        t.error[0] = '\0';
    }

    return t;
}
