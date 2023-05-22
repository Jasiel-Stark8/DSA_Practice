#include <stdio.h>

struct student {

    int rollno;
    char name[20];
    float marks;
};

void main()
{
    struct student s = {1, "Jenib", 90}; // Initialize

    struct student *ptr = &s; //Know that `struct student` together is a datatype just like `int` `float` and `char` are datatypes
    printf("Roll no is: %d\n", (*ptr).rollno); // One way to print with pointer
    printf("Name is: %s\n", ptr->name); // Second way to print with pointer
    printf("Mark is: %.2f\n", s.marks); // Printing with pointer is the same as printing with struct variable
    // printf("Pointer Value is: %d\n", &ptr);

    printf("Student 1 Info: %d, %s, %.2f \n", (*ptr).rollno, ptr->name, ptr->marks);
}