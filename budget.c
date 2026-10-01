#include <stdio.h>
#include <string.h>

#define MAX_BUDGETS 20

int budget_count = 0;
char b_dept[MAX_BUDGETS][50];
float b_allocated[MAX_BUDGETS];
float b_spent[MAX_BUDGETS];

void addBudget()
{
    if (budget_count >= MAX_BUDGETS)
    {
        printf("\nBudget list is full!\n");
        return;
    }

    printf("\n--- ADD DEPARTMENT BUDGET ---\n");
    printf("Enter Department Name: ");
    scanf("%49s", b_dept[budget_count]);

    printf("Enter Allocated Budget: ");
    scanf("%f", &b_allocated[budget_count]);
    if (b_allocated[budget_count] < 0)
    {
        printf("Invalid budget! Setting to 0.\n");
        b_allocated[budget_count] = 0;
    }

    printf("Enter Expenditure: ");
    scanf("%f", &b_spent[budget_count]);

    budget_count++;
    printf("Budget record added successfully!\n");
}

void displayBudgets()
{
    int i;
    if (budget_count == 0)
    {
        printf("\nNo budget records found.\n");
        return;
    }

    printf("\n---------------- BUDGET INFORMATION ----------------\n");
    for (i = 0; i < budget_count; i++)
    {
        float remaining = b_allocated[i] - b_spent[i];
        printf("\nDepartment: %s\n", b_dept[i]);
        printf("Allocated Budget: N$%.2f\n", b_allocated[i]);
        printf("Expenditure: N$%.2f\n", b_spent[i]);
        printf("Remaining Budget: N$%.2f\n", remaining);

        if (remaining < 0)
        {
            printf("Status: EXCEEDED BUDGET\n");
        }
        else
        {
            printf("Status: WITHIN BUDGET\n");
        }
    }
}

void budgetMenu()
{
    int choice;
    do
    {
        printf("\n=== BUDGET MANAGEMENT ===\n");
        printf("1. Add Department Budget\n");
        printf("2. Display Budget Status\n");
        printf("3. Back to Main Menu\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBudget();
            break;
        case 2:
            displayBudgets();
            break;
        case 3:
            printf("Returning to main menu...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 3);
}