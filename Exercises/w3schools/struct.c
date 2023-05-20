#include <stdio.h>

struct Car {
    char brand[50];
    char model[50];
    int year;
};

void main() {
    struct Car car1 = {"McLaren", "Acura-8", 2023};
    printf("My Car is: %s %s %d \n", car1.brand, car1.model, car1.year);
}