#include<stdio.h>
int main() {
int n;
printf("Enter a year: ");
scanf("%d",&n);
switch((n%4==0 && n%100!=0) || (n%400==0))
{
    case 0: printf("%d is not a leap year.",n);
            break;
    case 1: printf("%d is a leap year.",n);     
}
return 0;
}