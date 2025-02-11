#include <stdio.h>
#include "schoolclass1.h"
#include "schoolroom1.h"

#define MAX_SCHOOL_CLASSES 20
#define MAX_SCHOOL_ROOMS 10

typedef struct {
    SchoolClass classes[MAX_SCHOOL_CLASSES];
    SchoolRoom rooms[MAX_SCHOOL_ROOMS];
} School;

int main() {
    School my_school;

    Person teacher = {"John", "D.", "Doe", 1980};
    SchoolClass class1 = {{}, 'A', 1, teacher};
    my_school.classes[0] = class1;

    Person person1 = {"Jane", "D.", "Smith", 2005};
    SchoolRoom room1 = {101, {person1}};
    my_school.rooms[0] = room1;

    printf("Class Number: %d\n", my_school.classes[0].class_number);
    printf("Class Section: %c\n", my_school.classes[0].class_section);
    printf("Class Teacher: %s %s\n", my_school.classes[0].class_teacher.first_name, my_school.classes[0].class_teacher.last_name);

    printf("Room Number: %d\n", my_school.rooms[0].room_number);
    printf("People in Room: %s %s\n", my_school.rooms[0].people_in_room[0].first_name, my_school.rooms[0].people_in_room[0].last_name);

    return 0;
}
