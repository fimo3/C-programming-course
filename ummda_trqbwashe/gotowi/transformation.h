#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

typedef struct {
    long result;
    char error[100];
} transformation;

transformation str_to_long(const char* str);

#endif
