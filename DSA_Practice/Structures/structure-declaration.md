# Structure Decalration and Variables

There are 2 ways to declare Structures
1. 
The first method involves declaring the structure and its variable (or object) at the same time. This is done outside any function, typically at the global scope(Above the main() function). Here's an example:
```c
struct student {
    int rollno;
    char name[20];
    float marks;
}s1;
```
In this case, `s1` is a global variable of type `struct student`. It can be accessed from any function in the program.

`
2. 
The second method involves declaring the structure first, and then declaring its variable (or object) inside a function. Here's an example:
```c
struct student {
    int rollno;
    char name[20];
    float marks;
};

void main() {
    struct student s1;
}
```
In this case, `s1` is a local variable of type `struct student`. It can only be accessed from within the `main` function, where it is declared.

`struct student` is the datatype and the content within the {} are the variables
Now memory has been allocated, becuase it has been declared:
- int = 4 bytes
- char[20] = 20 bytes
- float = 4 bytes
Total Memory Allocated  = 28 bytes/structure

NOTE: just defining the structure like: 
```c
struct student {
    int rollno;
    char name[20];
    float marks;
};
```
is the same as this:
```c
int a;
// As you can see here we are just declaring the variable, not initializing it
```

On the other hand, Declaring the structure as shown above is like inirtializing the variable:
```c
int a = 10;
// Here 'a' has been initialized and has a value of 10
```

# Declaring multiple structures
We can declare multiple variables of a structure at the same time, like this: struct student `s1`, `s2`, `s3`;. Each variable will have its own separate memory.

We can also declare an array of structure variables. This is useful when we want to store information for multiple students. For example, if we want to store information for 60 students, we can declare an array of 60 `student` objects like this: `struct student s[60];`.

### Here are the codes for declaring multiple structures and an array of structure variables/objects:

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

In this example, we first declare multiple structure variables `s1`, `s2`, and `s3`. We then assign values to each individual structure variable and display their details using `printf`.

Next, we declare an array of structure variables `students` with a size of 60. We assign values to each element of the array using the index notation (`students[0]`, `students[1]`, etc.) and display their details using a `for` loop.

Feel free to modify the example to accommodate your specific requirements or expand the array of structure variables as needed when practicing.