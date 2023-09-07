#include <stdio.h>
#include <string.h>

struct em
{
    int age;
    float salary, da, hra, basicpay;
    char name[10];
};

int main()
{
    struct em emp;
    int n, i;

    printf("Enter the number of employees\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Details of employee %d:\n", i);
        printf("Enter the name: ");
        scanf("%9s", emp.name); // Limit input to 9 characters to avoid buffer overflow
        printf("Enter age: ");
        scanf("%d", &emp.age);
        printf("Enter basic pay: ");
        scanf("%f", &emp.basicpay); // Use %f for a floating-point input
        emp.da = 0.35 * emp.basicpay;
        emp.hra = 0.3 * emp.basicpay;
        emp.salary = emp.da + emp.basicpay + emp.hra;
        printf("---------------------------------------------------------------\n");
        printf("| Name: %s\n", emp.name);
        printf("| Age: %d\n", emp.age);
        printf("| Basic Pay: %.2f\n", emp.basicpay); // Use %.2f to format floating-point numbers with two decimal places
        printf("| DA: %.2f\n", emp.da); // Use %.2f for floating-point variables
        printf("| HRA: %.2f\n", emp.hra); // Remove the semicolon
        printf("| Total Salary: %.2f\n", emp.salary); // Use %.2f for floating-point variables
        printf("----------------------------------------------------------------\n");
    }

    return 0;
}
