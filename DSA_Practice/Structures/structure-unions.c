#include <stdio.h>

// Define a union named 'abc' with three members: 'int a', 'char b', and 'float c'
union abc {
    int a;
    char b;
    float c;
};

int main() {

    union abc u; // Declare a union variable 'u' of type 'abc'
    union abc *ptr = &u; // Declare a pointer 'ptr' of type 'abc*' that points to 'u'

    u.a = 1; // Assign value 1 to member 'a' of 'u'
    printf("Value of a is: %d\n", ptr->a); // Print the value of 'a' using the 'ptr' pointer


    u.b = 'a'; // Assign value 'a' to member 'b' of 'u'
    printf("Value of b is: %c\n", ptr->b); // Print the value of 'b' using the 'ptr' pointer


    u.c = 4.0; // Assign value 4.0 to member 'c' of 'u'
    printf("Value of c is: %.2f\n", ptr->c); // Print the value of 'c' using the 'ptr' pointer

    // Print the universal values of 'u.a', 'u.b', and 'u.c'
    printf("Universal Values are: %d %c %.2f\n", u.a, u.b, u.c);

    return 0;
}
