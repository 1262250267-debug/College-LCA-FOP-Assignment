#include <stdio.h>
#include <string.h>


struct Employee {
    char name[50];
    char designation[50];
    char gender;   // M or F
    char doj[15];  // Date of Joining
    float salary;
};

void totalEmployees(int n) {
    printf("\nTotal Employees = %d\n", n);
}


void countGender(struct Employee e[], int n) {
    int male = 0, female = 0;

    for(int i = 0; i < n; i++) {
        if(e[i].gender == 'M' || e[i].gender == 'm')
            male++;
        else if(e[i].gender == 'F' || e[i].gender == 'f')
            female++;
    }

    printf("Male Employees = %d\n", male);
    printf("Female Employees = %d\n", female);
}


void highSalary(struct Employee e[], int n) {
    printf("\nEmployees with salary > 10000:\n");
    for(int i = 0; i < n; i++) {
        if(e[i].salary > 10000) {
            printf("%s\n", e[i].name);
        }
    }
}


void asstManager(struct Employee e[], int n) {
    printf("\nEmployees with designation 'Asst Manager':\n");
    for(int i = 0; i < n; i++) {
        if(strcmp(e[i].designation, "Asst Manager") == 0) {
            printf("%s\n", e[i].name);
        }
    }
}

int main() {
    struct Employee e[100];
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Designation: ");
        scanf("%s", e[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Date of Joining: ");
        scanf("%s", e[i].doj);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    
    totalEmployees(n);
    countGender(e, n);
    highSalary(e, n);
    asstManager(e, n);

    return 0;
}
