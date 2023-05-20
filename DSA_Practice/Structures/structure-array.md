# Array of Structures

**Title: Array of Structures in C**

In C, we can create an array of structures to store information for multiple entities of the same type. For instance, if we want to store information for multiple students, we can create an array of `student` structures.

Here's how you can declare an array of structures:

1. Declare the structure and create an array at the same time:

```c
struct student {
    int rollno;
    char name[20];
    float marks;
} s[10]; // Array of 10 student structures
```

2. Declare the structure first, then create an array:

```c
struct student {
    int rollno;
    char name[20];
    float marks;
};

struct student s[10]; // Array of 10 student structures
```

3. Declare the array inside the main function:

```c
void main() {
    struct student s[10]; // Array of 10 student structures
}
```

In memory, `s` contains the base address for the roll number of the 10 students. Each index of `s` points to the base address of the corresponding student. For example, `s[0]` points to the base address of the first student, `s[1]` points to the base address of the second student, and so on.
# MEMORY VISUALIZATION
Here's a visualization of the memory allocation for the array of structures `s`:

```c
s -> &s[0]; 1024 -> 1044 -> 1048
s[0] -> &s1; 1024 (base address of s1)
s[1] -> &s2; 1048 (base address of s2)
s[2] -> &s3; 1072 (base address of s3)
s[3] -> &s4; 1096 (base address of s4)
s[4] -> &s5; 1120 (base address of s5)
s[5] -> &s6; 1144 (base address of s6)
s[6] -> &s7; 1168 (base address of s7)
s[7] -> &s8; 1192 (base address of s8)
s[8] -> &s9; 1216 (base address of s9)
s[9] -> &s10; 1240 (base address of s10)
```

In this visualization, `s` is the array of structures, and each `s[i]` represents a structure in the array. The arrow `->` indicates that it points to the base address of the corresponding structure. The numbers (1024, 1048, etc.) are hypothetical memory addresses, assuming that the base address of `s[0]` is 1024 and each structure occupies 24 bytes (20 bytes for the `name` array, 4 bytes for the `rollno` integer, and 4 bytes for the `marks` float). Please note that the actual memory addresses and the size of the structure can vary depending on the system and compiler.

--------------------------------------------------------



To access the members of each structure in the array, we use the array index along with the dot operator. For example:

```c
s[0].rollno // gives roll number of student 1
s[0].name // gives name of student 1
s[0].marks // gives marks of student 1
```

We can use a for loop to take in information for each student dynamically:

```c
for (int i = 0; i < 3; i++) {
    scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
}
```

In the above loop, `i` is used as a counter that iterates through each student's details. At runtime, `i` is replaced with the index of the student starting from 0 to 9 and collects their information.

Similarly, we can use a for loop to print the information of each student:

```c
for (int i = 0; i < 3; i++) {
    printf("%d, %s, %f", s[i].rollno, s[i].name, s[i].marks);
}
```

In this loop, `i` is used as a counter that iterates through each student's details. At runtime, `i` is replaced with the index of the student starting from 0 to 9 and prints the information of each student.

Here's a complete program that takes in and prints the information for three students:

I apologize for the confusion earlier. Here is the corrected code:

```c
#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    float marks;
};

int main() {
    struct student s[3]; // Array of 3 student structures

    // Taking in information for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter roll number, name, and marks for student %d: ", i+1);
        scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
    }

    // Printing the information of each student
    for (int i = 0; i < 3; i++) {
        printf("Information for student %d: Roll Number: %d, Name: %s, Marks: %.2f\n", i+1, s[i].rollno, s[i].name, s[i].marks);
    }

    return 0;
}
```

In this code, we first declare a structure `student` with three members: `rollno`, `name`, and `marks`. We then declare an array `s` of `struct student` with 3 elements in the `main` function.

We use a `for` loop to take input for each student's details. The `scanf` function reads the input for roll number, name, and marks for each student.

Finally, we use another `for` loop to print the details of each student. The `printf` function prints the roll number, name, and marks for each student.


This is a basic overview of how arrays of structures work in C. For more detailed information, you might want to refer to the video or other learning resources.

--------------------------------------------------------
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