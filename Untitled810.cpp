#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter length of arr: ";
    std::cin >> n;
    int arr;
    for (int i = 0; i < n; i++) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr;
    }
    std::cout << "Mang sau khi nhap la: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr<< " ";
    }
    std::cout << std::endl;
    std::cout << "Cac so nguyen to trong mang la: ";
    for (int i = 0; i < n; i++) {
        if (isPrime(arr)) {
            std::cout << arr << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
