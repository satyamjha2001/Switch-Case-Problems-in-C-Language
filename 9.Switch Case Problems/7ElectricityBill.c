#include <stdio.h>
int main()
{
    int n;
    float p,add;
    printf("Enter the number of units of your electricity bill: ");
    scanf("%d",&n);
    switch (n <= 50)
    {
    case 1:
        p = n * .5;
        break;
    case 0:
        switch (n <= 150)
        {
        case 1:
            p = 25 + ((n - 50) * .75);
            break;
        case 0:
            switch (n <= 250)
            {
            case 1:
                p = 100 + ((n - 150) * 1.20);
                break;
            case 0:
                p = 220 + ((n - 250) * 1.50);
                break;
            }
        }
    }
    add=p*.20;
    p=p+add;
    printf("Your electricity bill is %.2f rupees.", p);
    return 0;
}