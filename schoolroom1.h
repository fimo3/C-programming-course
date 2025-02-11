#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person1.h"

#define MAX_PEOPLE_IN_ROOM 50

typedef struct {
    int room_number;
    Person people_in_room[MAX_PEOPLE_IN_ROOM];
} SchoolRoom;

#endif // SCHOOLROOM_H
