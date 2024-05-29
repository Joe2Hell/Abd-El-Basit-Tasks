#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers,number,min,max;
    printf("This program asks the user to input a set of numbers, then computes the minimum and the maximum number\n");
    for (;;)
    {
    printf("Please enter how many numbers : ");
    scanf("%d",&numbers);
    printf("you have entered %d numbers\n", numbers);

    for(int i = 1; i<numbers+1; i++)
        {
            printf("please enter the %dth number : ", i);
            scanf("%d", &number);

            if(min > number)
            {
                min = number;
            }
            if(max < number)
            {
                max = number;
            }


        }
        printf("minimun is %d\n", min);
        printf("maximum is %d\n", max);


    }
    return 0;
}
