#include <stdio.h>

struct student {
    char name[21];
    int classNumber;
    float averageGrade;
};

int main() {
    struct student st = {"Ivan", 5, 5.75};
    printf("Name: %s\nClass number: %d\nAverage grade: %.2f\n", st.name, st.classNumber, st.averageGrade);
    return 0;
}
