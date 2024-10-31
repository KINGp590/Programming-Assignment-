#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    FILE *file = fopen("students.bin", "wb");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", students[i].name, &students[i].marks);
    }

    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);
    printf("Data written to students.bin successfully.\n");

    file = fopen("students.bin", "rb");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Student read_students[n];
    fread(read_students, sizeof(struct Student), n, file);
    fclose(file);

    printf("Data read from students.bin:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Marks: %d\n", read_students[i].name, read_students[i].marks);
    }

return 0;
}