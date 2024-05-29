#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first,second,sum = 0;
    printf("This program takes two numbers from user and multiplies them without using the * operator\n");

    while (1)
    {
        printf("Please enter the first number : ");
        scanf("%d", &first);
        printf("Please enter the second number : ");
        scanf("%d", &second);

        for(int i = 0; i < second; i++)
        {
            sum = sum + first;

        }

        printf("you have entered %d and %d and their product is : %d\n",first,second,sum);

    }
    return 0;
}
