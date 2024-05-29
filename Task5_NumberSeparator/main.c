#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rem,frac,sum;
    int number=0;
    int i = 0;
    for(;;)
    {
        printf("please enter your number : ");
        scanf("%d",&number);
        sum = 0;
        i = 0;
        for(; 0<number;i++)
        {
            rem = number%10;
            sum = sum + rem;
            number = number/10;
        }
    printf("the number of digits is %d \n",i);
    printf("the sum is : %d \n",sum);
    }




    return 0;
}
