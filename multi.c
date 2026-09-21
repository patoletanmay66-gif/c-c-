#include<stdio.h>
void main()
{
   int value1, value2, mul;
    printf("Enter first number: ");
    scanf("%d", &value1);
    printf("Enter second number: ");
    scanf("%d", &value2);
    mul=value1*value2;
    printf("The product of values =%d", mul);
    return 0;
}