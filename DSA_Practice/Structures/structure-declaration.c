#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    float marks;
}s1, s2; // First way to declare a structure

void main() {
    struct student s3; // Second way to declare structure
}

/*
 * Below we will declare multiple structures of the type students using an array.
 * This helps because we don't have to declare each structure individually multiple times which is time consuming.
 * Hence this way of using arrays is more efficient
*/

void array_structure(){
    struct student students[60]; // Declaring an array of structure variables
}

// Refer to Notes for detailed explanation structure-declaration.md