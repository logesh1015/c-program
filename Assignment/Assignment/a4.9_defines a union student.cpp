#include <stdio.h>
#include <string.h>

union student {
    char name[50];
    float gpa;
};

int main() {
    union student s;
    printf("Enter student's name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter student's GPA: ");
    scanf("%f", &s.gpa);
    printf("Student's name: %s\n", s.name);
    printf("Student's GPA: %.2f\n", s.gpa);
    return 0;
}
