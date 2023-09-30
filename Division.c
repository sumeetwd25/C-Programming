#include<stdio.h>
int main(){
    float n1,n2,div;
    printf("Enter two integers: ");
    scanf("%f%f",&n1,&n2);
    div=n1/n2;
    printf("%.2f * %.2f = %.2f",n1,n2,div);
    return 0;

}