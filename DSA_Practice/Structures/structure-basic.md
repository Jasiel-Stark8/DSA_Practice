# Title: Basic Structure Definition in C

In the video "C_109 Structures in C - part 1| Introduction to Structures", we learned about the basic definition of a structure in C. A structure is a user-defined data type in C that allows us to combine data items of different kinds. Structures are used when we need to group together different types of data under one name.

### Here's an example of a basic structure definition:
```c
struct student {

    int rollno;
    char name[20];
    float marks;
};

int main(void) {
    // struct variable declaration goes here
    return 0;
}
```

In this example, we've defined a structure named 'student'. This structure has three members:

'`rollno`' of type int: This is used to store the roll number of the student.
'`name`' of type char array: This is used to store the name of the student. The size of the array is 20, meaning it can hold a name up to 19 characters long (the last character is reserved for the null character that signifies the end of the string in C).
'`marks`' of type float: This is used to store the marks of the student.
This structure can now be used to create variables that can store roll numbers, names, and marks of students.

Remember, this is just a declaration of the structure. No memory is allocated when a structure is defined. Memory is allocated only when variables of this structure type are declared.