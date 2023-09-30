#include<stdio.h>
#define STRDISP(x) {printf("\n %s",#x+3);}
//# indicates string
int main(void)
{
    STRDISP(sunbeam);    
    return 0;
}