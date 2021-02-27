#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

//    duplicateItem();
    bubbleSort();

    return 0;
}

int dublicateItem() {

    // 1. Array ichida bir xil ellement bir yoki yo'q ekanligini aniqlash.


    int nums[] = {1, 54, 55, 54, 5, 48};

    int isDuplicate = 0;

    size_t size = sizeof(nums) / sizeof(int);

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {

            if (nums[j] == nums[i]) {
                isDuplicate = 1;
                break;

            }
        }
    }

    if (isDuplicate == 1) {
        printf("Bor\n");

    } else {

        printf("Yo'q\n");
    }

    return 0;
}

int bubbleSort() {

    // Bubble sort.

    int nums[] = {95, 34, 4, 54, 4, 7, 65, 12, 7};

    size_t size = sizeof(nums) / sizeof(int);

    int nums2[size];
    bool isSwap = false;

    for (int i = 0; i < size - i - 1; i++) {
        for (int j = 0; j < size - 1; j++) {

            if (nums[j] > nums[j + 1]) {
                int c = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = c;
                isSwap = true;
            }
        }
        if (!isSwap) {
            break;
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d, ", nums[i]);
    }

    return 0;
}

int quickSort() {

    // Quick Sort

    return 0;
}

int selectionSort() {



    return 0;
}

