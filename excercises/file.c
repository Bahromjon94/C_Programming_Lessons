#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

FILE *file;

int main() {


    file = fopen("test.txt", "r");

    if (file == NULL) {
        printf("Error");
        exit(0);
    }
    char text[20];

    fscanf(file, "%s", &text);
    printf("%s", text);


    return 0;
}

void makeFile() {

    /// here, we make new file

    char text[50];

    file = fopen("test.txt", "w");

    if (file == NULL) {
        printf("Error");
        exit(0);
    }

    printf("Enter a text: ");
    fgets(text, 50, stdin);
    fscanf(file, text);
    fclose(file);

}

void readFile() {

    char text[50];

    file = fopen("test.txt", "r");

    if (file == NULL) {
        printf("Error!");
    }

    fgets(text, 50, file);

    while (!feof(file)){
        printf("%s", text);
        fgets(text, 49, file);
    }

    fclose(file);
    getch();
}

void appendFile() {

    char text[50];

    if ((file = fopen("test.txt", "a")) == NULL) {
        printf("Error");
    }

    printf("Enter a text: ");
    fgets(text, 50, stdin);
    fprintf(file, "%s", text);
    fclose(file);

    return 0;
}
