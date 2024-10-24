#include <string.h>
#include <stdio.h>

struct student {
    char name[50];
    char email[50];
    char reg_no[50];
    int phone_no;
    int ID_no;
    int marks;
    float height;
};

int main() {//let the number of students be i
    int num_students, i;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    struct student students[num_students];
    //students' data
    for (i = 0; i < num_students; i++) {
        printf("\nEntering data for student %d\n", i + 1);
        
        printf("Enter name: ");
        scanf(" %[^\n]s", students[i].name);
        
        printf("Enter email: ");
        scanf(" %[^\n]s", students[i].email);
        
        printf("Enter registration number: ");
        scanf(" %[^\n]s", students[i].reg_no);
        
        printf("Enter phone number: ");
        scanf("%d", &students[i].phone_no);
        
        printf("Enter ID number: ");
        scanf("%d", &students[i].ID_no);
        
        printf("Enter marks: ");
        scanf("%d", &students[i].marks);
        
        printf("Enter height: ");
        scanf("%f", &students[i].height);
    }
    for (i = 0; i < num_students; i++) {
        printf("\nDisplaying data for student %d\n", i + 1);
        printf("Name: %s \n", students[i].name);
        printf("Email: %s \n", students[i].email);
        printf("REG no: %s \n", students[i].reg_no);
        printf("Phone No: %d \n", students[i].phone_no);
        printf("ID No: %d \n", students[i].ID_no);
        printf("Marks: %d \n", students[i].marks);
        printf("Height: %.1f \n", students[i].height);
    }
    
    return 0;
}