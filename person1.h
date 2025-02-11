#ifndef PERSON_H
#define PERSON_H

#define NAME_LENGTH 20

typedef struct {
    char first_name[NAME_LENGTH];
    char middle_name[NAME_LENGTH];
    char last_name[NAME_LENGTH];
    int birth_year;
} Person;

#endif // PERSON_H
