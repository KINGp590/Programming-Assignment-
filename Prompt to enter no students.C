#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    int mark, n;
    FILE *fptr;

    fptr = fopen("C:\Users\user\OneDrive\Desktop\assignments.C\loop codes.c\data.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!");
        exit(1);
    }

    printf("Enter the number of students\n");
    scanf("%d", &n);
    
    if (n < 1 || n > 5) {
        printf("Invalid number of students. Please enter a value between 1 and 5.\n");
        fclose(fptr);
        return 1;
    }
    
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d:\n", i + 1);
        fgets(name, sizeof(name), stdin);
        printf("Enter marks of student %d:\n", i + 1);
        scanf("%d", &mark);
        getchar();
        fprintf(fptr, "%s%d\n", name, mark);
    }

    fclose(fptr);
    return 0;
}