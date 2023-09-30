#include<stdio.h>

int main(void)
{
    int num=20;
    int a;
    printf("\n Num=%d ",num);
    a=++num; //PreOperation
    //first operation is performed then value is assigned
    printf("\n Num=%d a=%d",num,a);
    return 0;
}