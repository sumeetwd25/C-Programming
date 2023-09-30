#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char *str="OM5"; //valid declaration
    //string declaration using pointer
    
    printf("%s",str);
    printf("\n size = %d",sizeof(str));
    printf("\n size = %d",sizeof("OM5"));
    return 0;
}