// Program to calculate area and perimeter of circle, square and rectangle based on user's choice

#include<stdio.h>
int main() {
    int choice;
    float radius, side, length, width, area, perimeter;
    printf("Select your choice from the following : ");
    printf("\n1. Circle.\n2. Square.\n3. Rectangle.");
    printf("\nEnter your choice(for e.g : 1 for Circle) : ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("You have selected Circle.\n");
        printf("Enter the radius of circle : ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        perimeter = 2 * 3.14 * radius;
    } else if(choice == 2) {
        printf("You have selected Square.\n");
        printf("Enter the side of square : ");
        scanf("%f", &side);
        area = side * side;
        perimeter = 4 * side;
    } else if(choice == 3) {
        printf("You have selected Rectangle.\n");
        printf("Enter length of rectangle : ");
        scanf("%f", &length);
        printf("Enter width of rectangle : ");
        scanf("%f", &width);
        area = length * width;
        perimeter = 2 * length + width;
    } else {
        printf("Invalid choice.\n");
    }
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}