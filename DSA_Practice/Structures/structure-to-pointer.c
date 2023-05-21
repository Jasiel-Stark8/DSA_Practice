#include <stdio.h>

struct student {

    int rollno;
    char name[20];
    float marks;
} s[10];

int main(void)
{
    struct student s1 = {1, "Janib", 90.6};
}