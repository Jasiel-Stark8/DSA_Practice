# Array of Structures

```c
#include <stdio.h>


struct student {

    int rollno;
    char name[20];
    float marks;
};


void main() {

    // Assigning values to array of structure variables
    students[0].rollno = 1;
    strcpy(students[0].name, "John");
    students[0].marks = 85.5;

    students[1].rollno = 2;
    strcpy(students[1].name, "Sarah");
    students[1].marks = 90.0;

    students[2].rollno = 3;
    strcpy(students[2].name, "David");
    students[2].marks = 78.5;

    // Accessing and displaying values of array of structure variables
    for (int i = 0; i < 3; i++) {
        printf("Details of students[%d]:\n", i);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
```