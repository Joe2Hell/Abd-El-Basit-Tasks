#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("this program prints the sum of numbers between two user input numbers\n");
    int first,second,number,sum;
    int temp = 0;
    for (;;)
    {
        printf("please enter the first number : "); //smaller number
        scanf("%d", &first);
        printf("please enter the second number : ");    //larger number
        scanf("%d", &second);
        if(first > second)
            {
                temp = first;
                first = second;
                second = temp;
            }
        number = first;
        for(int i = 0; i < (second-first-1); i++)
        {
            number = number + 1;
            sum = sum + number;
        }
        printf("the sum of the numbers between %d and %d  is : %d \n",first,second,sum);
    }

}
