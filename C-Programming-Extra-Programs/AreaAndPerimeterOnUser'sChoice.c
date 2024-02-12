/*Program to calculate Area and Perimeter of Circle Square And Rectangle based on Users Choice*/
#include<stdio.h>
int main()
{
    int choice;
    float radius,side,length,width;
    float area,perimeter;
    printf("Select your choice from the following");
    printf("\n1.Circle");
    printf("\n2.Square");
    printf("\n3.Rectangle");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter the radius of Circle:");
        scanf("%f",&radius);
        area=3.14*radius*radius;
        perimeter=2*3.14*radius;
    }
    else if(choice==2)
    {
        printf("Enter the sides of Square:");
        scanf("%f",&side);
        area=side*side;
        perimeter=4*side;
    }
    else if(choice==3)
    {
        printf("Enter the Length and Width of Rectangle:");
        scanf("%f",&length);
        scanf("%f",&width);
        area=length*width;
        perimeter=2*length+width;
    }
    else
    {
        printf("Invalid Choice");
    }
    printf("Area:%.2f",area);
    printf("\nPerimeter:%.2f",perimeter);
    return 0;
}
