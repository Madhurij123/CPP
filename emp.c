#include <stdio.h>

struct emp {
    int empid, salary;
    char empname[50];
};

void acceptdata(struct emp *e1)
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &e1->empid);

    printf("Enter Employee Name: ");
    scanf("%s", e1->empname);

    printf("Enter Employee Salary: ");
    scanf("%d", &e1->salary);
}

void printdata(struct emp *e1)
{
    printf("\nEmployee ID: %d", e1->empid);
    printf("\nEmployee Name: %s", e1->empname);
    printf("\nEmployee Salary: %d", e1->salary);
}

int main(void)
{
    struct emp e1;   

    acceptdata(&e1);
    printf("\n---------------- Employee Details ----------------");
    printdata(&e1);

    return 0;
}

