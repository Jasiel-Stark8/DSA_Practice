#include <stdio.h>

struct student {

    int rollno;
    char name[20];
    float marks;
} s1 = {1, "Alina", 90}; //First way to fully initialize the structure(single struct only)

/**
 * Second way to Fully Initialize the structure(multiple times only)
*/
void main() {
    struct student s1 = {1, "Alina", 90};
    struct student s2 = {2, "Simo", 80};
}

/**
 * Partial Initialization of structure (Must be sequecial, mean ing the first member must be assigned first before the other members)
 * Here, only member 1(rollno) is initialized and has a value of '1'
 * In partial initialization: Uninitialized members will have the following
 * numbers(ie. int, float, double etc.) will have an automatic valaue == 0
 * characters and strings will automatically be set to == NULL
 * 
 * Note that these values are just temporary placeholders, and can be changed as you please
*/
void main() {
    struct student s1 = {1};
}

// -----------------------------------------------------------------------------------------------------------------------------------
