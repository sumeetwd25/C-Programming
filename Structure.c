#include<stdio.h>

typedef struct salary
{
    int id;
    int salary;
}sal;

sal data();
void disp(sal p);

int main(){

    sal x; 
    x=data();
    disp(x); 
    return 0;
}

sal data(){
    sal p;
    printf("Enter ID: ");
    scanf("%d",&p.id);
    printf("Enter salary: ");
    scanf("%d",&p.salary);
    return p;
    
}

void disp(sal p){
    printf("\nID: %d\nSalary: %d/-",p.id,p.salary);
}