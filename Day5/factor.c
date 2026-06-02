#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter any Number");
    scanf("%d",&n);
    printf("The Factors Of %d are:\n",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }

}