
#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char empname[20];
    int empno;
    int salary;
    Char dept[20];
 
} Employee;
 
int main()
{
    int i, n=2;
 
    printf("Enter %d Employee Details\n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);

        printf("Name: ");
        scanf("%s",employees[i].name);
       
        printf("Id: ");
        scanf("%d",&employees[i].id);
       
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
  
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}