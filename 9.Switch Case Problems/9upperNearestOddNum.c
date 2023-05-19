#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter a even no. to convert its upper nearest odd no.\n");
    scanf("%d",&n);
    switch(n%2==0)
    {
    case 1:
        printf("%d",n+1);
        break;
    case 0:
        printf("you already entered a odd no.\n");
        break;

    }
    printf("\n");
}