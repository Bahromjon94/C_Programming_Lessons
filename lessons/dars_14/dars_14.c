#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {

    /// Lesson 13. Dynamic memory allocation.


//    exDMA();
//    reallocF();

    return 0;
}


void searchAlgorithms() {

    ///




}

void reallocF() {

    /// realloc(); funksiyasi


    int numberOfItems;
    int *pArr;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &numberOfItems);

    pArr = (int *) malloc(numberOfItems * sizeof(int));


    if (pArr == NULL) {
        printf("Memory not allocated");
        exit(0);
    }

    for (int i = 0; i < numberOfItems; i++) {
        printf("Address of %p element \n", pArr + i);
    }

    printf("Enter new element size: ");
    scanf("%d", &numberOfItems);

    pArr = realloc(pArr, numberOfItems * sizeof(int));

    for (int i = 0; i < numberOfItems; i++) {
        printf("Address of %d element \n", pArr + i);
    }

    free(pArr);

}


void exDMA() {

    /// example: Dynamic memory allocation.

    int numberOfItems;
    int *pArr;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &numberOfItems);

    pArr = (int *) malloc(numberOfItems * sizeof(int));


    if (pArr == NULL) {
        printf("Memory not allocated");
        exit(0);
    }

    for (int i = 0; i < numberOfItems; i++) {
        printf("Enter %d element: ", i);
        scanf("%d", pArr + i);
        sum += *(pArr + i);
    }

    printf("%d", sum);

    free(pArr);

}
