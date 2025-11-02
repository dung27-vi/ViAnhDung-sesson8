#include <stdio.h>

int main() {
    int m, n;

    // Nhap so hang va so cot cua mang
    printf("Nhap so hang (m): ");
    scanf("%d", &m);
    printf("Nhap so cot (n): ");
    scanf("%d");

    int a[m];

    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i]);
        }
    }

    // In mang da nhap
    printf("\nMang sau khi nhap la:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    // In cac phan tu tren duong bien
    printf("\nCac phan tu cua mang nam tren duong bien la:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                printf("%d ", a[i]);
            } else {
                printf("  "); // In khoang trang de giu dung cau truc
            }
        }
        printf("\n");
    }

    return 0;
}
