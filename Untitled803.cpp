#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int has_even = 0;

    printf("Cac phan tu chan trong mang la: ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            has_even = 1;
        }
    }

    if (has_even == 0) {
        printf("Mang khong chua so chan.");
    }

    return 0;
}
