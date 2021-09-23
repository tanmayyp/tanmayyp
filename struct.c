#include <stdio.h>
struct employee
{
    char name[30];
    char department[50];
    int empno;
    float salary;
};
 
int main()
{
    struct employee emp;
     
    printf("\nEnter details :\n");
    printf("Name :");          scanf("%s",emp.name);
    printf("no :");            scanf("%d",&emp.empno);
    printf("department :");    scanf("%s",emp.department);
    printf("Salary :");        scanf("%f",&emp.salary);
     
    
    printf("\nEntered detail is:");
    printf("Name: %s",emp.name);
    printf("no: %d",emp.empno);
    printf("department: %s",emp.department);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
