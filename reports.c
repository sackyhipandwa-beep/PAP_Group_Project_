#include <stdio.h>
#include "Reports.h"

/* Employee Report */

void employeeReport(struct Employee employees[], int count)
{
    int i;
    float total = 0;
    float salary;
    float highest;
    float lowest;

    if (count == 0)
    {
        printf("No employees available.\n");
        return;
    }

    salary = employees[0].basicSalary
           + employees[0].housingAllowance
           + employees[0].transportAllowance;

    highest = salary;
    lowest = salary;

    for (i = 0; i < count; i++)
    {
        salary = employees[i].basicSalary
               + employees[i].housingAllowance
               + employees[i].transportAllowance;

        total = total + salary;

        if (salary > highest)
        {
            highest = salary;
        }

        if (salary < lowest)
        {
            lowest = salary;
        }
    }

    printf("\nEMPLOYEE REPORT\n");
    printf("-------------------------\n");
    printf("Total Employees: %d\n", count);
    printf("Average Salary: N$%.2f\n", total / count);
    printf("Highest Salary: N$%.2f\n", highest);
    printf("Lowest Salary: N$%.2f\n", lowest);
}


/* Budget Report */

void budgetReport(struct Budget budgets[], int count)
{
    int i;
    int overBudget = 0;

    float totalBudget = 0;
    float totalSpent = 0;

    if (count == 0)
    {
        printf("No budgets available.\n");
        return;
    }

    for (i = 0; i < count; i++)
    {
        totalBudget = totalBudget + budgets[i].allocated;
        totalSpent = totalSpent + budgets[i].expenditure;

        if (budgets[i].expenditure > budgets[i].allocated)
        {
            overBudget++;
        }
    }

    printf("\nBUDGET REPORT\n");
    printf("-------------------------\n");
    printf("Total Allocated: N$%.2f\n", totalBudget);
    printf("Total Expenditure: N$%.2f\n", totalSpent);
    printf("Remaining Budget: N$%.2f\n",
           totalBudget - totalSpent);

    printf("Departments Over Budget: %d\n", overBudget);

    if (overBudget > 0)
    {
        printf("\nDepartments Over Budget:\n");

        for (i = 0; i < count; i++)
        {
            if (budgets[i].expenditure > budgets[i].allocated)
            {
                printf("%s\n", budgets[i].department);
            }
        }
    }
}


/* Supplier Report */

void supplierReport(struct Supplier suppliers[], int count)
{
    int i;

    if (count == 0)
    {
        printf("No suppliers available.\n");
        return;
    }

    printf("\nSUPPLIER REPORT\n");
    printf("-------------------------\n");
    printf("Total Suppliers: %d\n", count);

    for (i = 0; i < count; i++)
    {
        printf("\nSupplier %d\n", i + 1);
        printf("ID: %d\n", suppliers[i].id);
        printf("Name: %s\n", suppliers[i].name);
        printf("Email: %s\n", suppliers[i].email);
        printf("Telephone: %s\n", suppliers[i].telephone);
        printf("Town: %s\n", suppliers[i].town);
    }
}


/* Asset Report */

void assetReport(struct Asset assets[], int count)
{
    int i;

    if (count == 0)
    {
        printf("No assets available.\n");
        return;
    }

    printf("\nASSET REPORT\n");
    printf("-------------------------\n");
    printf("Total Assets: %d\n", count);

    for (i = 0; i < count; i++)
    {
        printf("\nAsset %d\n", i + 1);
        printf("ID: %d\n", assets[i].id);
        printf("Name: %s\n", assets[i].name);
        printf("Type: %s\n", assets[i].type);
        printf("Value: N$%.2f\n", assets[i].value);
        printf("Department: %s\n", assets[i].department);
        printf("Condition: %s\n", assets[i].condition);
    }
}