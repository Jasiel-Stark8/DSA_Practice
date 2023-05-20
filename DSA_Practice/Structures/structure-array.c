#include <stdio.h>

struct student {

    int rollno;
    char name[20];
    float marks;
} s[10]; // FIrst way

struct student s[10]; //Second way

// it can be put in the main function of the program
void main() {
    struct student s[10];
}
