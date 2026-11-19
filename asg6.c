#include <stdio.h>

int factorial(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int n, f;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("No Factorial for Negative numbers\n");
    }
    else
    {
        f = factorial(n);
        printf("Factorial = %d\n", f);
    }
    return 0;
}
