#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char text[200];

    // 1. CREATE & WRITE TO FILE
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("File not created!\n");
        return 1;
    }

    printf("Enter text to write into file:\n");
    fgets(text, sizeof(text), stdin);
    fputs(text, fp);
    fclose(fp);

    // 2. READ FROM FILE
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("\nData read from file:\n");
    while (fgets(text, sizeof(text), fp)) {
        printf("%s", text);
    }
    fclose(fp);

    // 3. APPEND TO FILE
    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Unable to open file!\n");
        return 1;
    }

    printf("\nEnter text to append into file:\n");
    fgets(text, sizeof(text), stdin);
    fputs(text, fp);
    fclose(fp);

    printf("\nProgram completed successfully.\n");

    return 0;
}
