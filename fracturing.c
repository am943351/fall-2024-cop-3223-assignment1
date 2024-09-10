//********************************************************
// fracturing.c
// Author: Amy Le
// UCFID: 5122676
// Date: 9/9/24
// Class: COP 3223, Professor Parra
// Purpose: Write a program that will house many internal
// functions to demonstrate fracturing principles
// Input: User input
//
// Output: Information based on the function 
// //********************************************************

// Included libraries
#include <stdio.h>
#include <math.h> 

// Defined PI
#define PI 3.14159

// Function Protoypes
int askForUserInput();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main function to call other functions
int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0; 
}

// Calculates the distance between two points
double calculateDistance()
{
    double distance; 
    double x1;
    double x2; 
    double y1;
    double y2; 

    // Asks user for inputs for each value 
    x1 = askForUserInput();
    x2 = askForUserInput();
    y1 = askForUserInput();
    y2 = askForUserInput();

    // Print the output 
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    // Calculate and print distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
    printf("The distance between the two points is %.2f\n", distance); 

    // Returned distance 
    return distance; 
}

// Calculates perimeter of circle
double calculatePerimeter()
{
    double difficulty = 5; 
    double perimeter; 

    // Calculate circumference (perimeter) and print
    perimeter = 2 * PI * (calculateDistance()/2); 
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter); 

    // Return difficulty 
    return difficulty;
}

// Calculates the area of a circle
double calculateArea()
{
    double area; 
    double difficulty = 5; 

    // Calculates area
    area = PI * pow((calculateDistance() / 2), 2); 

    // Prints area
    printf("The area of the city encompassed by your request is %.2f\n", area);

    // Return difficulty 
    return difficulty; 
}

// Calculates width of circle
double calculateWidth() 
{
    double difficulty = 2; 
    double width; 

    // Calculates width and prints
    width = calculateDistance();

    // Print the width
    printf("The width of the city encompassed by your request is %.2f\n", width);

    // Return difficulty 
    return difficulty; 
}

// Calculates height of circle
double calculateHeight() 
{
    double difficulty = 2; 
    double height;

    // Calculate height
    height = calculateDistance(); 

    // Prints height
    printf("The height of the city encompassed by your request is %.2f\n", height); 

    // Return Difficulty 
    return difficulty; 
}


// Helper function to prompt user
int askForUserInput()
{
    double userInput; 
    printf("Enter a value:");
    scanf("%lf", &userInput);
    return userInput;
}
