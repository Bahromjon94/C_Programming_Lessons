#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student {

    char name[30];
    int age;
    double gpa;



};


int main() {

    // Structures.
    // Structure nima?
    //
    setStruct();


    return 0;
}

void setStruct() {

    struct Student stud;

    stud.name;
    stud.age;
    stud.gpa;

    printf("Enter a name: \n");
    scanf("%s", &stud.name);

    printf("Enter your age: \n", stud.age);
    scanf("%d", &stud.age);

    printf("Enter your GPA: \n");
    scanf("%lf", &stud.gpa);

    getStruct(stud.name, stud.age, stud.gpa);
}


void getStruct(char name[], int age, double gpa) {
    printf("Name is: %s\n", name);
    printf("Age is: %d\n", age);
    printf("GPA is: %.02lf", gpa);

}


int strLen(char *text) {

    int len = 0;
    while (*text != '\0') {
        text++;
        len++;
    }
    return len;
}




