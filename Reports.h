#ifndef REPORTS_H
#define REPORTS_H

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float basicSalary;
    float housingAllowance;
    float transportAllowance;
};

struct Budget
{
    char department[50];
    float allocated;
    float expenditure;
};

struct Supplier
{
    int id;
    char name[50];
    char email[50];
    char telephone[20];
    char town[50];
};

struct Asset
{
    int id;
    char name[50];
    char type[50];
    float value;
    char department[50];
    char condition[50];
};

void employeeReport(struct Employee employees[], int count);
void budgetReport(struct Budget budgets[], int count);
void supplierReport(struct Supplier suppliers[], int count);
void assetReport(struct Asset assets[], int count);

#endif