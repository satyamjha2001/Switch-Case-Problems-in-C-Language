#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    while(1)
{
    printf("Enter the day number of a week");
    printf("\npress 0 to exit\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Have a Lovely Sunday");
        break;
    case 2:
        printf("Have a fruitful Monday");
        break;
    case 3:
        printf("Have a beautiful Tuesday");
        break;
    case 4:
        printf("Have a wonderful Wednesday");
        break;
    case 5:
        printf("Have a Holy Thursday");
        break;
    case 6:
        printf("Have a Fabulous Friday");
        break;
    case 7:
        printf("Have a Shiny Saturday");
        break;
    case 0:
        exit(0);
    default:
        printf("invalid day");
        }
    printf("\n");
 }
}