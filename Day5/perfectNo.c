#include<stdio.h>
int main()
{
    int sum=0,i,num,n;
    printf("Enter Any Number");
    scanf("%d",&n);
    num=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(num==sum)
    {
        printf("The Number Is A Perfect Number");
    }
    else
    {
        printf("The Number Is Not A Perfect Number");
    }
    return 0;

}