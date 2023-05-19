#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    while (1)
    {
    printf(" \nChoose the following options:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
    scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            int a, b;
            printf("Enter two numbers for addition: ");
            scanf("%d%d", &a, &b);
            printf("Addition of two numbers are: %d", a + b);
            break;
        }
        case 2:
        {
            int a, b;
            printf("Enter two numbers for subtraction: ");
            scanf("%d%d", &a, &b);
            printf("Subtraction of two numbers are: %d", a - b);
            break;
        }
        case 3:
        {
            int a, b;
            printf("Enter two numbers for multiplication: ");
            scanf("%d%d", &a, &b);
            printf("Multiplication of two numbers are: %d", a * b);
            break;
        }
        case 4:
        {
            float a, b;
            printf("Enter two numbers for division: ");
            scanf("%f%f", &a, &b);
            printf("Division of two numbers are: %.2f", a / b);
            break;
        }
        case 5:
        {
            exit(0);
        }
        default:
            printf("Invalid choice");
        }
    }
    return 0;
}