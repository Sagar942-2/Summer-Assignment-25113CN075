#include<stdio.h>
int main()
{
  int i,n,a=0,b=1,c;  
  c=a+b;
  printf("Enter thr no. of terms:");
  scanf("%d,&n");
  
  printf("fibonacci series:%d,%d", a,b);
  for(i=3;i<=n;i++)
  {
    printf("%d" ,&c);
    a=b;
    b=c;
    c=a+b;
  }
  return 0;
}