// Question 1:
// Create a struct that has variables that represent the following attributes of a car:
// The make of a car. 
// The model of a car. 
// The color of the car. 
// The year of the car. 
// I should be able to create an instance in the following way:
// struct car;
// car_t:

#include <stdio.h>
#include <string.h>

typedef struct car {
    char make[50];
    char model[50];
    char color[20];
    int year;
}car_t;


// MAIN IS FOR TESTING, not actually part of question:
int main() {
    struct car car1; // Standard definition
    car_t car2; // typedef definition

    strcpy(car1.make, "Toyota");
    strcpy(car1.model, "Yaris");
    strcpy(car1.color, "White");
    car1.year = 2019;

    strcpy(car2.make, "Honda");
    strcpy(car2.model, "Odyssey");
    strcpy(car2.color, "Black");
    car2.year = 2024;

    printf("Car1 Make: %s\n", car1.make);
    printf("Car1 Model: %s\n", car1.model);
    printf("Car1 Color: %s\n", car1.color);
    printf("Car1 Year: %d\n", car1.year);

    printf("Car2 Make: %s\n", car2.make);
    printf("Car2 Model: %s\n", car2.model);
    printf("Car2 Color: %s\n", car2.color);
    printf("Car2 Year: %d\n", car2.year);

    return 0;
}