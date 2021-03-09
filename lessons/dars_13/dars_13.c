#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student {

    char name[30];
    char unv[50];
    int age;
    double gpa;

};

struct Human {

    char name[30];
    int age;

};


int main() {

    // Structures.
    // Structure nima?

    setStruct();

    return 0;
}


void setStruct() {

    struct Student stud;

    stud.name;
    stud.age;
    stud.gpa;

    println("Enter your name:");
    scanf("%s", &stud.name);

    println("Enter your age:");
    scanf("%d", &stud.age);

    println("Enter your University:");
    scanf("%s", &stud.unv);

    println("Enter your GPA:");
    scanf("%lf", &stud.gpa);

    getStruct(stud.name, stud.age, stud.unv, stud.gpa);
}

void getStruct(char name[], int age, char unv[], double gpa) {
    printf("Name is: %s \n", name);
    printf("Age is: %d \n", age);
    printf("University is: %s \n", unv);
    printf("GPA is: %.02lf \n", gpa);

}

int strLen(char *text) {

    int len = 0;
    while (*text != '\0') {
        text++;
        len++;
    }
    return len;
}

void println(char str[]) {
    printf("%s\n", str);
}




