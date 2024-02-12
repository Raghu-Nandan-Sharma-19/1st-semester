#include<stdio.h>
int main()
{
    float r,s,l,w,area,perimeter;
    char a;
    printf("Please select one from the following:");
    printf("\nC - Circle");
    printf("\nS - Square");
    printf("\nR - Rectangle");
    printf("\nEnter your Choice: ");
    scanf("%c",&a);
    switch (a)
    {
        case 'C':
        printf("Area and perimeter of Circle");
        printf("\nEnter the radius of Circle:");
        scanf("%f",&r);
        area=3.14*r*r;
        perimeter=2*3.14*r;
        printf("Area of circle= %.2f",area);
        printf("Perimeter of circle= %.2f",perimeter);
        break;

        case 'S':
        printf("Area and perimeter of Square");
        printf("\nEnter the sides of Square:");
        scanf("%f",&s);
        area=s*s;
        perimeter=4*s;
        printf("Area of Square= %.2f",area);
        printf("Perimeter of Square= %.2f",perimeter);
        break;

        case 'R':
        printf("Area and perimeter of Rectangle");
        printf("\nEnter the length and width of Rectangle:");
        scanf("%f",&l);
        scanf("%f",&w);
        area=l*w;
        perimeter=2*l+w;
        printf("Area of Rectangle= %.2f",area);
        printf("Perimeter of Rectangle= %.2f",perimeter);
        break;

        default:
        printf("Invalid Choice");
        printf("\nPlease select from the given options");
        break;
    }
    return 0;
}