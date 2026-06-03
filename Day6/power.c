 #include<stdio.h>
int main()
{
    int power,num,i;
    int answer=1;
    printf("Enter Any Number");
    scanf("%d",&num);
    printf("Enter The Value Of Power");
    scanf("%d",&power);

    for(i=1;i<=power;i++)
    {
        answer=answer*num;
        
    }
    printf("The Answer is: %d",answer);
    return 0;
}   

        