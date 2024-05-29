#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers,number;
    int sum = 0;
    printf("This program sums all the numbers entered by the user\n");
    for(;;)
    {
        printf("please enter how many numbers you want to add : ");
        scanf("%d", &numbers);
        for(int i = 1; i <= numbers; i++)
        {
            printf("please enter the %dth number :", i);
            scanf("%d",&number);
            sum += number;
        }
        printf("the sum of the %d numbers you entered is : %d\n", numbers, sum);

    }
    return 0;
}
