#include <iostream>

int main() {
    int rows, cols;
    std::cout << "Nhap so hang: ";
    std::cin >> rows;
    std::cout << "Nhap so cot: ";
    std::cin >> cols;

    int arr[rows][cols];
    std::cout << "Nhap cac phan tu cua mang:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "arr[" << i << "][" << j << "]: ";
            std::cin >> arr[i][j];
        }
    }

    std::cout << "Mang da nhap la:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
