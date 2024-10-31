#include <stdio.h>
#include <stdlib.h>

void writeToFile() {
    char sentence[101];
    FILE *fptr;
    
    fptr = fopen("data.txt", "w");
    if (fptr == NULL) {
        printf("Oops! Couldn't open the file.\n");
        exit(1);
    }
    
    printf("Please enter a sentence you'd like to save:\n");
    fgets(sentence, sizeof(sentence), stdin);
    
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    printf("Great! Your sentence has been saved.\n");
}

void readFromFile() {
    char sentence[101];
    FILE *fptr;
    
    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Hmm... Looks like there's nothing to read yet!\n");
        exit(1);
    }
    
    fgets(sentence, sizeof(sentence), fptr);
    printf("Here's what's in the file:\n%s", sentence);
    fclose(fptr);
}

void appendToFile() {
    char sentence[101];
    FILE *fptr;
    
    fptr = fopen("data.txt", "a");
    if (fptr == NULL) {
        printf("Couldn't open the file for adding more text!\n");
        exit(1);
    }
    
    printf("Add another sentence to the file:\n");
    fgets(sentence, sizeof(sentence), stdin);
    
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    printf("Done! Your sentence has been added.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nWhat would you like to do?\n");
        printf("1. Write a new sentence to the file\n");
        printf("2. Read what's in the file\n");
        printf("3. Add more to the file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        
        if (choice == 1) {
            writeToFile();
        } else if (choice == 2) {
            readFromFile();
        } else if (choice == 3) {
            appendToFile();
        } else if (choice == 4) {
            printf("Goodbye!\n");
            exit(0);
        } else {
            printf("That's not a valid option. Try again.\n");
        }
    }

    return 0;
}