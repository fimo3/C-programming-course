#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include "person1.h"

#define MAX_STUDENTS 26

typedef struct {
    Person students[MAX_STUDENTS];
    char class_section;
    int class_number;
    Person class_teacher;
} SchoolClass;

#endif // SCHOOLCLASS_H
