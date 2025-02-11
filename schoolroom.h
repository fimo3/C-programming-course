#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

typedef struct {
    int roomNumber;
    Person people[50];
} SchoolRoom;

#endif // SCHOOLROOM_H
