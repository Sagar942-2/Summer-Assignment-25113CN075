#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    while(1)
    {
        printf("\n===== MENU DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter First Number: ");
                scanf("%f",&a);
                printf("Enter Second Number: ");
                scanf("%f",&b);
                printf("Addition = %.2f\n",a+b);
                break;

            case 2:
                printf("Enter First Number: ");
                scanf("%f",&a);
                printf("Enter Second Number: ");
                scanf("%f",&b);
                printf("Subtraction = %.2f\n",a-b);
                break;

            case 3:
                printf("Enter First Number: ");
                scanf("%f",&a);
                printf("Enter Second Number: ");
                scanf("%f",&b);
                printf("Multiplication = %.2f\n",a*b);
                break;

            case 4:
                printf("Enter First Number: ");
                scanf("%f",&a);
                printf("Enter Second Number: ");
                scanf("%f",&b);

                if(b!=0)
                    printf("Division = %.2f\n",a/b);
                else
                    printf("Division by Zero is not Possible.\n");
                break;

            case 5:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}