#include<stdio.h>
#define Pi 3.1415
#define circleArea(r)(Pi*r*r)

int main(){
    double radius,area;
    printf("Enter the radius: ");
    scanf("%lf",&radius);
    area=circleArea(radius);
    printf("Area of circle = %.2lf",area);
    return 0;
}