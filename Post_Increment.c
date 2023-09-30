#include<stdio.h>

int main(void)
{
    int num=20;
    int a;
    printf("Num=%d",num);
    a=num++; //20++ 
    //Post operation
    //first value is assigned and then operation is performed
   printf("\n Num=%d a=%d \n",num,a);
    //++  increment the value by 1
    //-- decrement the value by 1

    //num++ //post increment
    //++num // pre increment
    //num-- //post decrement
    //--num // pre decrement
    
    return 0;
}