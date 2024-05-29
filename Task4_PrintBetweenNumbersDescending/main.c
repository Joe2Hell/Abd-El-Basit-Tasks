#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lower;
    int upper;
    int temp;

    printf("Enter the first limit : ");
    scanf("%d" ,&lower);
    printf("Enter the second limit : ");
    scanf("%d" ,&upper);


    if (lower > upper)
    {
       temp = lower;
       lower = upper;
       upper = temp;

    }

    for (int i = 1; i < (upper - lower) ; i++ )
    {
        printf("%d  ",upper-i);
    }
    return 0;
}
