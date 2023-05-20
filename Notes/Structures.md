# From **The C Programming Language** ANSI C - Second Edition

## Chapter 6.  Structures
- 6.1  Basics of Structures
- 6.2  Structures and Functions
- 6.3  Arrays of Structures
- 6.4  Pointers to Structures
- 6.5  Self-referential Structures
- 6.6  Table Lookup
- 6.7  Typedef
- 6.8  Unions
- 6.9  Bit-fields

### 6.1  Basics of Structures
This section covers the fundamentals of structures. You can define a structure type using the keyword `struct` followed by the structure tag and a list of member declarations. Here's an example using the provided code:
```c
#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    float marks;
};

int main() {
    struct student s1; // Declaring a structure variable
    s1.rollno = 1; // Assigning values to structure members
    strcpy(s1.name, "John");
    s1.marks = 85.5;

    printf("Roll No: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
```

In this example, we define a structure named `student` with members `rollno`, `name`, and `marks`. We declare a structure variable `s1` and assign values to its members. We then use `printf` to display the values of the structure members.

-------------------------------------------------------------------------------------------------------------------------------

### 6.2 Structures and Functions:
This section explores how structures can be used as function parameters and return types. Here's an example:
```c
#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    float marks;
};

void displayStudent(struct student s) {
    printf("Roll No: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct student s1;
    s1.rollno = 1;
    strcpy(s1.name, "John");
    s1.marks = 85.5;

    displayStudent(s1); // Passing structure as a parameter

    return 0;
}
```

In this example, we define a function `displayStudent` that takes a structure `s` of type `student` as a parameter. We pass the `s1` structure to the function, and it displays the values of the structure members.

-------------------------------------------------------------------------------------------------------------------------------

### 6.3 Arrays of Structures:
This section demonstrates the concept of arrays of structures. You can create an array where each element is a structure. Here's an example:
```c
#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    float marks;
};

int main() {
    struct student students[3]; // Array of structures

    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    for (int i = 0; i < 3; i++) {
        printf("Details of student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
```

In this example, we create an array `students` of type `student` to store multiple student records. We use a loop to input the details for each student and then another loop to display the details of all the students.

-------------------------------------------------------------------------------------------------------------------------------

### 6.4 Pointers to Structures:
This section explains the usage of pointers to structures, allowing you to manipulate and access structure members indirectly. Here's an example:
```c
#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    float marks;
};

int main() {
    struct student s1;
    struct student *ptr; // Pointer to a structure

    ptr = &s1; // Assigning the address of s1 to the pointer

    // Accessing structure members using pointer
    ptr->rollno = 1;
    strcpy(ptr->name, "John");
    ptr->marks = 85.5;

    printf("Roll No: %d\n", ptr->rollno);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
```

In this example, we declare a pointer `ptr` to a structure of type `student`. We assign the address of `s1` to the pointer using the address-of operator `&`. We then use the pointer to access the structure members using the arrow operator `->` and display their values.

-------------------------------------------------------------------------------------------------------------------------------

### 6.5 Self-referential Structures:
This section discusses self-referential structures, also known as linked lists. Here's a simplified example:
```c
#include <stdio.h>

struct node {
    int data;
    struct node *next; // Pointer to the same structure type
};

int main() {
    struct node n1, n2, n3;

    n1.data = 10;
    n2.data = 20;
    n3.data = 30;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    struct node *ptr = &n1;

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}
```

In this example, we define a structure `node` that contains an integer `data` and a pointer `next` to the same structure type. We create three nodes `n1`, `n2`, and `n3` and establish a linked list by assigning the `next` pointers accordingly. We then use a pointer `ptr` to traverse the linked list and print the data values.

-------------------------------------------------------------------------------------------------------------------------------

### 6.6 Table Lookup:
This section explores how structures can be used for efficient table lookup. Here's a simplified example:
```c
#include <stdio.h>
#include <string.h>

struct person {
    char name[20];
    int age;
    char occupation[20];
};

int main() {
    struct person people[] = {
        {"John", 25, "Engineer"},
        {"Sarah", 30, "Doctor"},
        {"David", 28, "Teacher"}
    };

    int size = sizeof(people) / sizeof(struct person);
    char searchName[20];
    printf("Enter a name to search: ");
    scanf("%s", searchName);

    for (int i = 0; i < size; i++) {
        if (strcmp(people[i].name, searchName) == 0) {
            printf("Name: %s\n", people[i].name);
            printf("Age: %d\n", people[i].age);
            printf("Occupation: %s\n", people[i].occupation);
            break;
        }
    }

    return 0;
}
```

In this example, we define a structure `person` to store information about individuals. We create an array of `person` structures named `people` and initialize it with some data. We then prompt the user to enter a name to search for in the table. Using a `loop` and `strcmp`, we compare the entered name with the names in the table. If a match is found, we display the corresponding details.

-------------------------------------------------------------------------------------------------------------------------------

### 6.7 Typedef:
This section introduces the `typedef` keyword, which allows you to create aliases for structure types. Here's an example:
```c
#include <stdio.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student; // Creating a typedef for the structure

int main() {
    Student s1; // Using the typedef alias to declare a structure variable
    s1.rollno = 1;
    strcpy(s1.name, "John");
    s1.marks = 85.5;

    printf("Roll No: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
```

In this example, we use `typedef` to create an alias `Student` for the structure definition. We can then declare 'structure variables' using the `Student` alias, simplifying the syntax.

-------------------------------------------------------------------------------------------------------------------------------

### 6.8 Unions:
This section introduces unions, which allow different members to share the same memory space. Here's an example:
```c
#include <stdio.h>

union data {
    int i;
    float f;
    char c;
};

int main() {
    union data d;

    d.i = 10;
    printf("Value of i: %d\n", d.i);

    d.f = 3.14;
    printf("Value of f: %.2f\n", d.f);

    d.c = 'A';
    printf("Value of c: %c\n", d.c);

    return 0;
}
```

In this example, we define a union `data` that can hold an integer `i`, a float `f`, or a character `c`. Since unions share the same memory space, changing the value of one member can affect the value of other members.

-------------------------------------------------------------------------------------------------------------------------------

### 6.9 Bit-fields:
This section discusses bit-fields, which allow you to specify the size and alignment of individual members in a structure. Here's an example:
```c
#include <stdio.h>

struct flags {
    unsigned int isRed : 1;
    unsigned int isGreen : 1;
    unsigned int isBlue : 1;
};

int main() {
    struct flags f;

    f.isRed = 1;
    f.isGreen = 0;
    f.isBlue = 1;

    printf("Red: %d\n", f.isRed);
    printf("Green: %d\n", f.isGreen);
    printf("Blue: %d\n", f.isBlue);

    return 0;
}
```

In this example, we define a structure `flags` that contains three bit-fields `isRed`, `isGreen`, and `isBlue`. Each bit-field is represented by 1 bit of memory, allowing us to store boolean values efficiently.