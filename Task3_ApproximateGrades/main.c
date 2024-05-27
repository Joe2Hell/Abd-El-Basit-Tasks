#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    int remainder = 0;
    int result = 0;
    printf("Please enter the grade to be converted :");
    scanf("%d", &number);
    remainder = number%5;
    if (remainder ==0)
    {
        printf("result after conversion  is %d :", number);

    }
    else
    {

    if (0 < remainder && remainder < 3 )
    {
        result =  number - remainder;
    }
    else if (2 < remainder && remainder < 5)
    {
        result = number - remainder + 5;
    }

    printf("result after conversion  is %d :", result);
    }


    return 0;
}
