#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

void writeSentenceToFile() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char sentence[MAX_LENGTH + 1];
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
    printf("Sentence written to data.txt\n");
}

void readFileContent() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char content[MAX_LENGTH + 1];
    printf("Content of data.txt:\n");
    while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }
    fclose(file);
}

void appendSentenceToFile() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char sentence[MAX_LENGTH + 1];
    printf("Enter a sentence to append (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
    printf("Sentence appended to data.txt\n");
}

int main() {
    writeSentenceToFile();
    readFileContent();
    appendSentenceToFile();
    readFileContent();

    return 0;
}