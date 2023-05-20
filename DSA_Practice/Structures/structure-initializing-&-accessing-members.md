# Initializing & Accessing of Structure Members

Index: s = student
Hence- s1 = student 1
       s2 = student 2...
student of the structure we named `student` >>> `struct student`


1. **Initializing a Structure**: In C programming, we can initialize a structure at the time of its declaration. This is what we call compile-time initialization. Here's an example of how to do it:

```c
struct student {
    int rollno;
    char name[20];
    float marks;
} s1 = {1, "Jenny", 90.91};
```
In this example, I've created a variable `s1` of type `struct student` and initialized it with the values `{1, "Jenny", 90.91}`. It's important to note that the order of initialization should match the order of declaration in the structure.


We can also initialize a structure at runtime using the `scanf` function. This is known as runtime initialization. Here's how you can do it:

```c
struct student s2;
printf("Enter info for s2: ");
scanf("%d %s %f", &s2.rollno, s2.name, &s2.marks);
```
In this case, I'm asking the user to enter the values for `rollno`, `name`, and `marks`, which are then stored in the `s2` structure.


2. **Accessing Structure Members**: We can access the members of a structure using the dot operator (`.`). For instance, `s1.rollno` will access the `rollno` member of the `s1` structure. Here's an example:

```c
printf("Information for s1: %d %s %f\n", s1.rollno, s1.name, s1.marks);
```
This line of code will print the `rollno`, `name`, and `marks` of `s1`.


3. **Copying Structures**: We can copy the values of one structure to another if they are of the same type. Here's how you can do it:

```c
s1 = s2;
```
This line of code will copy all the values from `s2` to `s1`.


4. **Comparing Structures**: We cannot directly compare two structures using relational operators like `==` or `!=`. However, we can compare individual members of the structures. Here's an example:

```c
if (s1.rollno < s2.rollno) {
    printf("s1 has a lower roll number than s2.\n");
}
```
This code will compare the `rollno` of `s1` and `s2`.


5. **Partial Initialization**: If we initialize only some members of a structure, the uninitialized members will be set to default values. For integers and floats, the default value is `0`. For strings and characters, the default value is `NULL`. Here's an example:

```c
struct student s3 = {3};
```
In this case, `s3.rollno` is `3`, `s3.name` is `NULL`, and `s3.marks` is `0`.


6. **Global and Local Structures**: We can declare structures globally (outside any function) or locally (inside a function). A globally declared structure can be accessed from any function in the program, while a locally declared structure can only be accessed within the function where it's declared. Here's an example of a global structure:

```c
struct student s4 = {4, "Global", 95.0};

int main() {
    printf("Information for s4: %d %s %f\n", s4.rollno, s4.name, s4.marks);
    return 0;
}
```
    In this case, `s4` is a global structure that can be accessed from any function in the program.

7. **Array of Structures**: If we want to store information for multiple students, we can create an array of structures. This will be discussed in the next video, but here's a quick example:

```c
struct student s[2] = {{1, "Alice", 90.0}, {2, "Bob", 95.0}};
```
In this example, `s` is an array of `struct student` with two elements. Each element is a structure that represents a student.


Remember, these are just the basics of working with structures in C. There's a lot more you can do with them, and we'll continue exploring these possibilities in the next videos.

---------------------------------------------------------------------------------------------------------------------------------------------
### Simple accessing
```c
struct student {
    int rollno;
    char name[20];
    float marks;
} s3 = {2};

/**
 * Main Program
 */
void main() {
    struct student s1 = {1, "jenny", 90};
    struct student s2;
    s2 = s1; // Copy data/values from s1 to s2 (THis is only possibble because they are in the same structure)

    // Now lets go to the printing press :)
    printf("info for Student 1(s1)");|
    printf("\n %d %s %f", s1.rollno, s1.name, s1.marks);
    printf("\n info for Student 2(s2)");
    printf("\n %d %s %f", s2.rollno, s2.name, s2.marks);
    printf("\n info for Student 3(s3)");
    printf("\n %d %s %f", s3.rollno, s3.name, s3.marks);
}
```
---------------------------------------------------------------------------------------------------------------------------------------------

# Other Ways To Initialize and Access variables at compile-time

```c
#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    float marks;
};

int main() {
    // Declaring multiple structure variables
    struct student s1, s2, s3;

    // Declaring an array of structure variables
    struct student students[60];

    // Assigning values to individual structure variables
    s1.rollno = 1;
    strcpy(s1.name, "John");
    s1.marks = 85.5;

    s2.rollno = 2;
    strcpy(s2.name, "Sarah");
    s2.marks = 90.0;

    s3.rollno = 3;
    strcpy(s3.name, "David");
    s3.marks = 78.5;

    // Accessing and displaying values of individual structure variables
    printf("Details of s1:\n");
    printf("Roll No: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    printf("Details of s2:\n");
    printf("Roll No: %d\n", s2.rollno);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n", s2.marks);

    printf("Details of s3:\n");
    printf("Roll No: %d\n", s3.rollno);
    printf("Name: %s\n", s3.name);
    printf("Marks: %.2f\n", s3.marks);

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