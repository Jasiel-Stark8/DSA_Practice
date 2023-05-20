struct(keyword) tag {

    datatype member_name;
    datatype member_name;
    datatype member_name;
};




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

--------------------------------------------------------------------------------------------------------------------------------------------


Here's a summary of the key points from the video "C_109 Structures in C - part 1| Introduction to Structures":

### 1. What is a Structure in C?
A structure in C is a user-defined data type that allows you to combine data items of different kinds. Structures are used when you need more than one variable of the same or different data types grouped under a single name. For example, you can store information about a student (like roll number, name, and marks) under a single structure.

### 2. Why do we need Structures?
Structures are needed to process data of different data types. For example, if you want to store information about a student, you have different types of data like roll number (integer), name (string), and marks (float). Instead of declaring separate variables for each student's information, you can use a structure to store all the information under a single name.

### 3. How to declare a Structure?
A structure is declared using the struct keyword followed by an identifier (name of the structure) and then the variables (members of the structure) enclosed in curly braces {}. For example:
```c
struct tag/struct_name {

    datatype member_name;
    datatype member_name;
    datatype member_name;
};
```
============================================================================================================================================
```c
struct student {
    int rollno;
    char name[20];
    float marks;
};
```

In this example, `student` is the name of the structure, and `rollno`, `name`, and `marks` are the members of the structure.
NOTE: No memory is allocated when we do this, becuase it is not declared (See next topic on how to do this)

### 4. Important points about Structures:
- Two members of a structure cannot have the same name.
- You cannot initialize individual structure members at the time of declaration.
- The struct keyword is used to define a structure.
- The name of the structure (also known as the structure tag) is optional, but if omitted, you cannot declare variables of that structure type later in the program.

I'll create a file named `structure-basic.md` in the `Structures` folder with these notes.