#include <stdio.h>

// Extern declaration of global variables from other modules
extern int emp_count;
extern float emp_basic[];
extern float emp_housing[];
extern float emp_transport[];

extern int budget_count;
extern char b_dept[][50];
extern float b_allocated[];
extern float b_spent[];

extern int sup_count;
extern int ast_count;

void generateEmployeeReport()
{
    int i;
    float sum = 0, highest = 0, lowest = 0;

    printf("\n=== EMPLOYEE REPORT ===\n");
    printf("Total Employees: %d\n", emp_count);

    if (emp_count > 0)
    {
        lowest = emp_basic[0] + emp_housing[0] + emp_transport[0];
        for (i = 0; i < emp_count; i++)
        {
            float total = emp_basic[i] + emp_housing[i] + emp_transport[i];
            sum += total;
            if (total > highest) highest = total;
            if (total < lowest) lowest = total;
        }
        printf("Average Salary: N$%.2f\n", sum / emp_count);
        printf("Highest Salary: N$%.2f\n", highest);
        printf("Lowest Salary : N$%.2f\n", lowest);
    }
}

void generateBudgetReport()
{
    int i;
    float total_alloc = 0, total_spent = 0;

    printf("\n=== BUDGET REPORT ===\n");
    for (i = 0; i < budget_count; i++)
    {
        total_alloc += b_allocated[i];
        total_spent += b_spent[i];
    }

    printf("Total Allocated Budget: N$%.2f\n", total_alloc);
    printf("Total Expenditure     : N$%.2f\n", total_spent);
    printf("Remaining Budget      : N$%.2f\n", total_alloc - total_spent);

    printf("\nDepartments Exceeding Budget:\n");
    for (i = 0; i < budget_count; i++)
    {
        if (b_spent[i] > b_allocated[i])
        {
            printf("- %s (Exceeded by N$%.2f)\n", b_dept[i], b_spent[i] - b_allocated[i]);
        }
    }
}

void reportsMenu()
{
    int choice;
    do
    {
        printf("\n=== REPORTS ===\n");
        printf("1. Employee Salary Report\n");
        printf("2. Budget Summary Report\n");
        printf("3. General System Summary\n");
        printf("4. Back to Main Menu\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            generateEmployeeReport();
            break;
        case 2:
            generateBudgetReport();
            break;
        case 3:
            printf("\n=== SYSTEM OVERVIEW ===\n");
            printf("Registered Employees: %d\n", emp_count);
            printf("Registered Suppliers: %d\n", sup_count);
            printf("Registered Assets   : %d\n", ast_count);
            break;
        case 4:
            printf("Returning to main menu...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 4);
}