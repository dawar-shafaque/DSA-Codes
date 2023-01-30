// #include<stdio.h>
// #include<string.h>
struct employee
{
    char name[30];
    char deg[30];
    char dep[30];
    char gen[10];
    int id;
    int salary;
};
int emp()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    struct employee  a[n],b[n];
    for(int i=0; i<n; i++)
    {
        printf("\nEmployee %d:- \n",i+1);
        printf("Name of the employee: ");
        scanf("%s",a[i].name);
        printf("Gender: ");
        scanf("%s",a[i].gen);
        printf("Designation: ");
        scanf("%s",a[i].deg);
        printf("Department: ");
        scanf("%s",a[i].dep);
        printf("Basic Salary: ");
        scanf("%d",&a[i].salary);
        b[i].salary = a[i].salary + (25*a[i].salary)/100 + (75*a[i].salary)/100;
    }
    int i;
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("Name \t\t: ");
        printf("%s \n",a[i].name);
        printf("Gender \t\t: ");
        printf("%s \n",a[i].gen);
        printf("Designation \t: ");
        printf("%s \n",a[i].deg); 
        printf("Department \t: ");
        printf("%s \n",a[i].dep);
        printf("Basic Salary\t: ");
        printf("%d \n",a[i].salary);
        printf("Gross Salary \t: ");
        printf("%d \n",b[i].salary);
 
        printf("\n");
    }
    
    return 0;
}