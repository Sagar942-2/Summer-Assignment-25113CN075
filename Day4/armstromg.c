#include <stdio.h>
int main()
{
    int n, d, temp, s = 0;
    printf("Enter the no.");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        d = n % 10;
        s = s + d * d * d;
        n = n / 10;
    }
    if (s == temp)
    {
        printf("The given no. is armstrong");
    }
    else
    {
        printf("no.is not armstrong");
    }
    return 0;
}
