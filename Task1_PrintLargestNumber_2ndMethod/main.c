#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,max;
    printf("Enter the first number\n");
    scanf("%d", &n1);
    printf("Enter the Second number\n");
    scanf("%d", &n2);
    printf("Enter the Third number\n");
    scanf("%d", &n3);

    max = n1;
    if(n2>max)
    {
      max = n2;
    }

    if(n3>max)
    {
        max = n3;
    }

    printf("The largest number is %d", max);



    return 0;
}
