#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grades = 0;
    printf("please enter your grade in numbers\n");
    scanf("%f",&grades);


    if((90 <= grades)&&(grades <= 100))
    {
        printf("Your grade is A");
    }
    else if((80 <= grades)&&(grades < 90))
    {
        printf("Your grade is B");
    }
    else if((70 <= grades)&&(grades <80))
    {
        printf("Your grade is C+");
    }
    else if((60 <= grades)&&(grades <700))
    {
        printf("Your grade is C");
    }else if((50 <= grades)&&(grades <60))
    {
        printf("Your grade is D");
    }
    else
    {
        printf("Your grade is F");
    }
}
