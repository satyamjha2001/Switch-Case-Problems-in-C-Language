#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b,c;
    while(1)
    {
    printf("1.Check whether a given set of three numbers are lengths of an isosceles triangle or not");
    printf("\n2.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
    printf("\n3.Check whether a given set of three numbers are equilateral triangle or not");
    printf("\n4.Exit");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("enter three numbers: ");
        scanf("%d %d %d",&a,&b,&c);
        switch((a==b||b==c||c==a) && (a+b>c && b+c>a && a+c>b))
        {
        case 1:
        printf("isosceles trianle");
        break;
        case 0:
        printf("not an isosceles trianle");
        break;
        }
        break;

    case 2:
        printf("enter three no.s");
        scanf("%d %d %d",&a,&b,&c);
        a=a*a;
        b=b*b;
        c=c*c;
        switch(a+b==c||b+c==a||c+a==b)
        {
        case 1:
        printf("right angle trianle");
        break;
        case 0:
        printf("not a right angle trianle");
        break;
        }
        break;

    case 3:
        printf("enter three no.s");
        scanf("%d %d %d",&a,&b,&c);
        switch(a==b&&b==c&&c==a)
        {
        case 1:
        printf("equilateral trianle");
        break;
        case 0:
        printf("not an equilateral trianle");
        break;
        }
        break;

    case 4:
        exit(0);

    default:
        printf("invalid choice");

        }
        printf("\n");
    }
    return 0;
}