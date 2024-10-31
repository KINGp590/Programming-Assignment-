#include <stdio.h>
#include <stdlib.h>

void writeToFile() {
    char sentence[101];
    FILE *fptr;
    
    fptr = fopen("data.txt", "w");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
}

void readFromFile() {
    char sentence[101];
    FILE *fptr;
    
    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    
    fgets(sentence, sizeof(sentence), fptr);
    printf("Content of the file:\n%s", sentence);
    fclose(fptr);
}

void appendToFile() {
    char sentence[101];
    FILE *fptr;
    
    fptr = fopen("data.txt", "a");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    
    printf("Enter a sentence to append:\n");
    fgets(sentence, sizeof(sentence), stdin);
    
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        
        if (choice == 1) writeToFile();
        else if (choice == 2) readFromFile();
        else if (choice == 3) appendToFile();
        else if (choice == 4) exit(0);
        else printf("Invalid choice.\n");
    }

    return 0;
}