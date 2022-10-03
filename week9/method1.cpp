#include<stdio.h>

int main()
{
    int number;
    float temp, sqrt;
    scanf("%d", &number);
    sqrt = number / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
    }

    printf("The square root of '%d' is '%f'", number, sqrt);
    return 0;
}