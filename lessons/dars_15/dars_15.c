#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    /// Lesson 15. Takrorlash


    readFile();

    return 0;
}

void fileManager() {

    /// File Manager

    FILE *fMngr;
    fMngr = fopen("file.txt", "w+");

    char name[20];
    int num;

    if (fMngr == NULL) {
        printf("Error");
        exit(0);
    }

    printf("Enter a text: ");
    scanf("%s", &name);

    printf("Enter a number: ");
    scanf("%d", &num);

    fprintf(fMngr, "%s", name);
    fprintf(fMngr, "%d", num);

    fclose(fMngr);

}

void readFile() {

    FILE *fMngr;
    fMngr = fopen("file.txt", "r");

    if (fMngr == NULL) {
        printf("Error");
    }


    int n = getw(fMngr);
    printf("number: %d", fMngr);

    fclose(fMngr);
}

void wordLen(char str[]) {

    int count = 0;
    size_t size = strlen(str);

    for (int i = 0; i < size; i++) {
        if (str[i] == 32 && str[i + 1] != 32) {
            count++;
            continue;
        }
    }
    printf("%d", count + 1);
}
