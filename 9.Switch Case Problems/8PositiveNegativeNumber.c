#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a,b;
    while(1)
    {
    printf("1.To change positive number into negative");
    printf("\n2.To change negative number into posotive");
    printf("\n3.Exit\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("enter a positive no.\n");
        scanf("%d",&b);
        printf("%d",b*-1);
        break;
    case 2:
        printf("enter a negative no.\n");
        scanf("%d",&b);
        printf("%d",b*-1);
        break;
    case 3:
        exit(0);
    default:
        printf("invalid choice");
        }
        printf("\n");
    }
    return 0;
}