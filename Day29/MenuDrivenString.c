#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice,i;

    while(1)
    {
        printf("\n===== STRING OPERATIONS =====\n");
        printf("1. Enter String\n");
        printf("2. Find Length\n");
        printf("3. Reverse String\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter String: ");
                scanf("%s",str);
                break;

            case 2:
                printf("Length = %lu\n",strlen(str));
                break;

            case 3:
                printf("Reverse = ");

                for(i=strlen(str)-1;i>=0;i--)
                    printf("%c",str[i]);

                printf("\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}