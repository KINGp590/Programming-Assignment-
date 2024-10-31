#include <stdio.h>
#include <stdlib.h>

void writeToFile() {
    char sentence[101];
    FILE *fptr;

    fptr = fopen("C:\\Users\\user\\OneDrive\\Desktop\\assignments\\data.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter a sentence (up to 100 characters):\n");
    fgets(sentence, sizeof(sentence), stdin);
    
    if (sentence[0] == '\n') {
        printf("No input provided. Exiting.\n");
        fclose(fptr);
        exit(1);
    }

    fprintf(fptr, "%s", sentence);
    fclose(fptr);
}

void readFromFile() {
    char ch;
    FILE *fptr;

    fptr = fopen("C:\\Users\\user\\OneDrive\\Desktop\\assignments\\data.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("File content:\n");
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }
    fclose(fptr);
}

void appendToFile() {
    char sentence[101];
    FILE *fptr;

    fptr = fopen("C:\\Users\\user\\OneDrive\\Desktop\\assignments\\data.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file for appending!\n");
        exit(1);
    }

    printf("Enter another sentence (up to 100 characters):\n");
    fgets(sentence, sizeof(sentence), stdin);
    
    if (sentence[0] == '\n') {
        printf("No input provided. Exiting.\n");
        fclose(fptr);
        exit(1);
    }

    fprintf(fptr, "%s", sentence);
    fclose(fptr);
}

int main() {
    writeToFile();
    readFromFile();
    appendToFile();
    readFromFile();
    return 0;
}