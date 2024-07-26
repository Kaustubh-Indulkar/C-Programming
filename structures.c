#include <stdio.h>

struct Employee
{
    int empID;
    char EmpName[20];
    char Dept[10];
    double Salary;
};

int main(int argc, char const *argv[])
{
    // struct Employee e1;
    struct Employee e2[5];
    int i, size;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    printf("Enter %d elements in array\n", size);

    for (i = 0; i < size; i++)
    {
        printf("Enter Employee's ID,Name,Department,Salary\n");
        scanf("%d%s%s%lf", &e2[i].empID, &e2[i].EmpName, &e2[i].Dept, &e2[i].Salary);
    }
    printf("Employee Record Contains\n");

    for (i = 0; i < size; i++)
    {
        printf("EmpID=%d,Name=%s,Department=%s,Salary=%lf\n", e2[i].empID, e2[i].EmpName, e2[i].Dept, e2[i].Salary);
    }

    return 0;
}
