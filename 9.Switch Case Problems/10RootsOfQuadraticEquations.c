#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x,y;
    printf("enter the elements of quadratic equation a,b,c to find its root\n");
    scanf("%d %d %d",&a,&b,&c);
    switch(b*b-4*a*c==0)
    {
    case 1:
        x=-b+sqrt(b*b-4*a*c)/2*a;
        y=-b-sqrt(b*b-4*a*c)/2*a;
        printf("%d %d roots are equal & real",x,y);
        break;
    case 0:
        switch(b*b-4*a*c>0)
        {
        case 1:
            x=-b+sqrt(b*b-4*a*c)/2*a;
            y=-b-sqrt(b*b-4*a*c)/2*a;
            printf("%d %d roots are real & distinct",x,y);
            break;
        case 0:
            printf("imaginary roots");
            break;


        }
    }
    printf("\n");
}