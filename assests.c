#include <stdio.h>
#include <string.h>

#define MAX_ASSETS 40

int ast_count = 0;
int ast_id[MAX_ASSETS];
char ast_name[MAX_ASSETS][50];
char ast_type[MAX_ASSETS][30];
float ast_value[MAX_ASSETS];
char ast_dept[MAX_ASSETS][50];
char ast_condition[MAX_ASSETS][30];

void addAsset()
{
    if (ast_count >= MAX_ASSETS)
    {
        printf("\nAsset register full!\n");
        return;
    }

    printf("\n--- ADD ASSET ---\n");
    printf("Enter Asset ID: ");
    scanf("%d", &ast_id[ast_count]);

    printf("Enter Asset Name: ");
    scanf("%49s", ast_name[ast_count]);

    printf("Enter Type (e.g. Vehicle, Computer): ");
    scanf("%29s", ast_type[ast_count]);

    printf("Enter Purchase Value: ");
    scanf("%f", &ast_value[ast_count]);

    printf("Enter Department: ");
    scanf("%49s", ast_dept[ast_count]);

    printf("Enter Condition (e.g. Good, Repair): ");
    scanf("%29s", ast_condition[ast_count]);

    ast_count++;
    printf("Asset added successfully!\n");
}

void displayAssets()
{
    int i;
    if (ast_count == 0)
    {
        printf("\nNo assets registered.\n");
        return;
    }

    printf("\n---------------- ASSET REGISTER ----------------\n");
    for (i = 0; i < ast_count; i++)
    {
        printf("ID: %d | Name: %s | Type: %s | Value: N$%.2f | Dept: %s | Condition: %s\n",
               ast_id[i], ast_name[i], ast_type[i], ast_value[i], ast_dept[i], ast_condition[i]);
    }
}

void searchAsset()
{
    int i, search_id, found = 0;
    printf("\nEnter Asset ID to search: ");
    scanf("%d", &search_id);

    for (i = 0; i < ast_count; i++)
    {
        if (ast_id[i] == search_id)
        {
            printf("\n--- ASSET DETAILS ---\n");
            printf("ID: %d\nName: %s\nType: %s\nValue: N$%.2f\nDept: %s\nCondition: %s\n",
                   ast_id[i], ast_name[i], ast_type[i], ast_value[i], ast_dept[i], ast_condition[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nAsset ID %d not found.\n", search_id);
    }
}

void assetMenu()
{
    int choice;
    do
    {
        printf("\n=== ASSET MANAGEMENT ===\n");
        printf("1. Add Asset\n");
        printf("2. Display All Assets\n");
        printf("3. Search Asset\n");
        printf("4. Back to Main Menu\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addAsset();
            break;
        case 2:
            displayAssets();
            break;
        case 3:
            searchAsset();
            break;
        case 4:
            printf("Returning to main menu...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 4);
}