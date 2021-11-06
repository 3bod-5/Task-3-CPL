#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    printf("Enter a number : ");
    scanf("%f",&num);
    if(num>=0 && num<=25){
        printf("%f Interval of [0,25]",num);
    }
    if(num>25 && num<=50){
        printf("%f Interval of (25,50]",num);
    }
    if(num>50 && num<=75){
        printf("%f Interval of (50,75]",num);
    }
    if(num>75 && num<=100){
        printf("%f Interval of (75,100]",num);
    }
    if(num>100 || num<0){
        printf("Out of Intervals");
    }
    return 0;
}
