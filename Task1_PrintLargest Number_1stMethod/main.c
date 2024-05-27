#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,temp;
    printf("Enter the first number\n");
    scanf("%d", &n1);
    printf("Enter the Second number\n");
    scanf("%d", &n2);
    printf("Enter the Third number\n");
    scanf("%d", &n3);


    if(n1<n2)
    {
        temp = n2;
    }
    else
    {
        temp = n1;
    }

    if(temp > n3)
        {
            printf("The largest number is %d", temp);
        }
    else
    {
            printf("The largest number is %d", n3);

    }




    return 0;
}
