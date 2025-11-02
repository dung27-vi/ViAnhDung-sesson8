#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr[5] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 != 0) {
            arr[i] += 2;
        } else {
            arr[i] += 3;
        }
    }

    std::cout << "Mang sau khi thay doi la : [";
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i];
        if (i < arr.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
