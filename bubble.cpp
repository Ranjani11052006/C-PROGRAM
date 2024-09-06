#include <stdio.h>
int main() {
    int array[] = {10, 25, 5, -3, 0, 12, 7};
    int size = sizeof(array) / sizeof(array[0]);
    int min = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("The minimum element in the array is: %d\n", min);

     return 0;
}
