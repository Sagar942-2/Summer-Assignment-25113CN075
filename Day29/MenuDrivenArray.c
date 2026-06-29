#include <stdio.h>

int main()
{
    int a[100], n=0;
    int i, choice, pos, value, sum;

    while(1)
    {
        printf("\n===== ARRAY OPERATIONS =====\n");
        printf("1. Enter Array\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Sum of Array\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number of Elements: ");
                scanf("%d",&n);

                printf("Enter %d Elements:\n",n);

                for(i=0;i<n;i++)
                    scanf("%d",&a[i]);

                break;

            case 2:
                printf("Array Elements:\n");

                for(i=0;i<n;i++)
                    printf("%d ",a[i]);

                printf("\n");
                break;

            case 3:
                printf("Enter Element to Search: ");
                scanf("%d",&value);

                for(i=0;i<n;i++)
                {
                    if(a[i]==value)
                    {
                        printf("Element Found at Position %d\n",i+1);
                        break;
                    }
                }

                if(i==n)
                    printf("Element Not Found.\n");

                break;

            case 4:
                sum=0;

                for(i=0;i<n;i++)
                    sum+=a[i];

                printf("Sum = %d\n",sum);

                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}