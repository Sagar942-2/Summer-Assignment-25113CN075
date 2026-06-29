#include <stdio.h>

int main()
{
    int ans;
    int score = 0;

    printf("******** Quiz Application ********\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);

    if(ans==2)
        score++;

    printf("\nQ2. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);

    if(ans==1)
        score++;

    printf("\nQ3. 10 + 20 = ?\n");
    printf("1. 10\n2. 20\n3. 30\n4. 40\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);

    if(ans==3)
        score++;

    printf("\nYour Final Score = %d/3\n", score);

    return 0;
}