#include <stdio.h>
struct Employee
{char name;
int employeeid;
int salary;
}
void main()
struct employee E[10];
int i,n;
printf("Enter the number of employees:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%s",&E[i].name);
scanf("%d",&E[i].employee):
scanf("%d",&E[i].salary);
}
{
for(i=1;i<=n;i++)
{
printf("%s",E[i].name);
printf("%d",E[i].employeeid);
printf("%d",E[i].salary);
}
}

