// Write a program to print area and perimeter of Circle, Square and Rectangle.

#include<stdio.h>
int main() {
    float radius; // radius of circle
    float side; //side of square
    float length, width; //length and width of rectangle

    //circle
    printf("Enter the radius of Circle : ");
    scanf("%f", &radius);
    printf("Area of circle is %.2f\n", 3.14 * radius * radius);
    printf("Perimeter of circle is %.2f\n", 2 * 3.14 * radius);

    //Square
    printf("Enter the sides of Square : ");
    scanf("%f", &side);
    printf("Area of square is %.2f\n", side * side);
    printf("Perimeter of square is %.2f\n", 4 * side);

    //Rectangle
    printf("Enter the length of Rectangle : ");
    scanf("%f", &length);
    printf("Enter the width of Rectangle : ");
    scanf("%f", &width);
    printf("Area of rectangle is %.2f\n", length * width);
    printf("Perimeter of rectangle is %.2f\n", 2* length + width);

    return 0;
}