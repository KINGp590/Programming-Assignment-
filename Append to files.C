#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    int mark, n;
    FILE *fptr;

    fptr = fopen("C:\\Users\\user\\OneDrive\\Desktop\\assignments.C\\loop codes.c\\data.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!");
        exit(1);
    }

    do {
        printf("Enter the number of students (1 to 5):\n");
        scanf("%d", &n);
    } while (n < 1 || n > 5);

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