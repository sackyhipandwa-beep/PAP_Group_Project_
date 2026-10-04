#include <stdio.h>
#include <string.h>

#define MAX_SUPPLIERS 30

int sup_count = 0;
int sup_id[MAX_SUPPLIERS];
char sup_name[MAX_SUPPLIERS][50];
char sup_email[MAX_SUPPLIERS][50];
char sup_phone[MAX_SUPPLIERS][20];
char sup_town[MAX_SUPPLIERS][30];

void addSupplier()
{
    if (sup_count >= MAX_SUPPLIERS)
    {
        printf("\nSupplier record full!\n");
        return;
    }

    printf("\n--- ADD SUPPLIER ---\n");
    printf("Enter Supplier ID: ");
    scanf("%d", &sup_id[sup_count]);

    printf("Enter Supplier Name: ");
    scanf("%49s", sup_name[sup_count]);

    printf("Enter Email: ");
    scanf("%49s", sup_email[sup_count]);

    printf("Enter Telephone: ");
    scanf("%19s", sup_phone[sup_count]);

    printf("Enter Town/Location: ");
    scanf("%29s", sup_town[sup_count]);

    sup_count++;
    printf("Supplier added successfully!\n");
}

void displaySuppliers()
{
    int i;
    if (sup_count == 0)
    {
        printf("\nNo suppliers registered yet.\n");
        return;
    }

    printf("\n---------------- SUPPLIER LIST ----------------\n");
    for (i = 0; i < sup_count; i++)
    {
        printf("ID: %d | Name: %s | Email: %s | Phone: %s | Town: %s\n",
               sup_id[i], sup_name[i], sup_email[i], sup_phone[i], sup_town[i]);
    }
}

void searchSupplier()
{
    int i, search_id, found = 0;
    printf("\nEnter Supplier ID to search: ");
    scanf("%d", &search_id);

    for (i = 0; i < sup_count; i++)
    {
        if (sup_id[i] == search_id)
        {
            printf("\n--- SUPPLIER DETAILS ---\n");
            printf("ID: %d\nName: %s\nEmail: %s\nPhone: %s\nTown: %s\n",
                   sup_id[i], sup_name[i], sup_email[i], sup_phone[i], sup_town[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nSupplier ID %d not found.\n", search_id);
    }
}

void supplierMenu()
{
    int choice;
    do
    {
        printf("\n=== SUPPLIER MANAGEMENT ===\n");
        printf("1. Add Supplier\n");
        printf("2. Display Suppliers\n");
        printf("3. Search Supplier\n");
        printf("4. Back to Main Menu\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addSupplier();
            break;
        case 2:
            displaySuppliers();
            break;
        case 3:
            searchSupplier();
            break;
        case 4:
            printf("Returning to main menu...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 4);
}