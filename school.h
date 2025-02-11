#include <stdio.h>
#include <stdlib.h>

#include "schoolclass.h"
#include "schoolroom.h"

typedef struct {
    SchoolClass classes[20];
    SchoolRoom rooms[10];
} School;

int main() {
    School school;
    printf("School structure created.\n");
    return 0;
}
