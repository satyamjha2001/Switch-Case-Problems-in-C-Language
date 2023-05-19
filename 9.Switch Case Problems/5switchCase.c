#include <stdio.h>
int main()
{
    int var;
    printf("enter a no. between (1 to 3) to find which is Good, Better & Best: ");
    scanf("%d", &var);
    switch (var)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("invalid");
        break;
    }
    return 0;
}