#include<stdio.h>

//ternary operator / conditional operator ( ? : )
// (Expression) ? truepart : falsepart;

int main(void)
{
    int num1,num2;
    int max;
    printf("\n enter first number : ");
    scanf("%d",&num1);

    printf("\n enter second number : ");
    scanf("%d",&num2);

    max = (num1>num2)?num1:num2;

    printf("Max = %d \n ",max);
    return 0;
}