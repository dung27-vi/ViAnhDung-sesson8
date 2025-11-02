#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Nhap so phan tu cua mang: ";
    std::cin >> n;

    std::vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        int num;
        while (true) {
            std::cout << "Nhap phan tu thu " << i + 1 << ": ";
            std::cin >> num;
            if (num % 2 != 0) {
                arr[i] = num;
                break;
            } else {
                std::cout << "Vui long nhap so le. Nhap lai." << std::endl;
            }
        }
    }

    std::cout << "Mang da nhap la: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
