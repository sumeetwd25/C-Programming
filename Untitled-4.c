#include<stdio.h>

int main(void)
{
    float f_val1=70.65;
    float f_val2=80.686;
    printf("%f %f",f_val1,f_val2);
    printf("\n %8.1f %7.2f",f_val1,f_val2);
    //8.1 specifies... 8 spaces width and .1 indicates after decimal one digit to be displayed
    printf("\n %-8.1f %-7.2f",f_val1,f_val2);

    return 0;
}