#include <stdio.h>

struct employee {
    int id;
    float salary;
    float bonus;
};

struct employee scan_employee()
{
    struct employee e;

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee salary: ");
    scanf("%f", &e.salary);

    printf("Enter employee bonus: ");
    scanf("%f", &e.bonus);

    return e;
}

void print_employee(struct employee e)
{
    printf("Employee ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("Bonus: %.2f\n", e.bonus);
}
int main()
{
    struct employee emp;

    emp = scan_employee();  // no pointers used
    print_employee(emp);

    return 0;
}
