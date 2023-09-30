#include<stdio.h>

int main(void)
{
    int i=30;
    float f=20.67;
    double d=70.43;
    char ch='A';
    //printf("%d",sizeof(ch+i));
            //sizeof('A' + 30)
            //sizeof(ch + 30)
            //sizeof(1byte+4byte)
            //sizeof(integernumber)
            //4
    //printf("%d",sizeof(i+f)); 
    //printf("%d",sizeof(i+f+ch)); 
                     
   // printf("%d",sizeof(f+d));
    //printf("%d",sizeof(8.56+f)); // doublevalue + float //decimal //double
    //printf("%d",sizeof(8.56f+f+i));
   //printf("%d",(sizeof(d)+sizeof(f)));
                // (8      +  4   )
                //12
    printf("%f",f+i);
    return 0;
}