#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers;
    int number;
    long int sum=0;
    while(1){
    printf("Please enter how many numbers want to add : ");
    scanf("%d", &numbers);

    for (int i = 0; i<numbers; i++)
    {
        sum = 0;
        printf("Please enter number %d : ", i);
        scanf("%d", &number);
        sum = sum + number;
    }

    printf("the sum of the numbers is %d : \n", sum);

    }
    return 0;
}
