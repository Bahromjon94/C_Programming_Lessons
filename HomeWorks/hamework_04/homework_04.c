#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    // Arrayalar


//    copyArr();
    duplicateTwoArray();

    return 0;
}

int copyArr() {

    int nums1[] = {45, 65, 78};

    size_t size = sizeof(nums1) / sizeof(int);

    int nums2[size];

    for (int i = 0; i < size; i++) {
        nums2[i] = nums1[i];
    }

    for (int i = 0; i < size; i++) {
        printf("%d, ", nums2[i]);
    }
}

int duplicateTwoArray() {

    int nums1[] = {45, 79, 5, 52, 6, 52, 79};
    int nums2[] = {54, 45, 79, 18, 48, 4};

    size_t size = sizeof(nums1) / sizeof(int);

    bool isDuplicate = false;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {

            if (nums1[i] == nums1[j]) {
                isDuplicate = true;
                break;
            }

        }
    }

    if (isDuplicate == true) {
        printf("Duplicate\n");

    } else {
        printf("not duplicate");
    }


    return 0;
}
