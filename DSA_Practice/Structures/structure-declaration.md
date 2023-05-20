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
}
```

In this example, we first declare multiple structure variables `s1`, `s2`, and `s3`. We then assign values to each individual structure variable and display their details using `printf`.

Next, we declare an array of structure variables `students` with a size of 60. We assign values to each element of the array using the index notation (`students[0]`, `students[1]`, etc.) and display their details using a `for` loop.

Feel free to modify the example to accommodate your specific requirements or expand the array of structure variables as needed when practicing.