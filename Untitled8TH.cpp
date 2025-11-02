#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int arr[MAX_SIZE];
int current_size = 0;

void print_menu() {
    printf("\n--- Quan ly danh sach so nguyen ---\n");
    printf("1. Them phan tu vao vi tri bat ky\n");
    printf("2. Xoa phan tu o vi tri bat ky\n");
    printf("3. Cap nhat gia tri tai vi tri bat ky\n");
    printf("4. Tim kiem phan tu trong mang\n");
    printf("5. Hien thi mang\n");
    printf("6. Thoat chuong trinh\n");
    printf("------------------------------------\n");
}

void add_element() {
    if (current_size >= MAX_SIZE) {
        printf("Mang da day. Khong the them phan tu.\n");
        return;
    }
    int value, position;
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    printf("Nhap vi tri can them (0 den %d): ", current_size);
    scanf("%d", &position);

    if (position < 0 || position > current_size) {
        printf("Vi tri khong hop le.\n");
        return;
    }

    for (int i = current_size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    current_size++;
    printf("Da them phan tu thanh cong.\n");
}

void delete_element() {
    if (current_size == 0) {
        printf("Mang rong. Khong co phan tu de xoa.\n");
        return;
    }
    int position;
    printf("Nhap vi tri can xoa (0 den %d): ", current_size - 1);
    scanf("%d", &position);

    if (position < 0 || position >= current_size) {
        printf("Vi tri khong hop le.\n");
        return;
    }

    for (int i = position; i < current_size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    current_size--;
    printf("Da xoa phan tu thanh cong.\n");
}

void update_element() {
    if (current_size == 0) {
        printf("Mang rong. Khong co phan tu de cap nhat.\n");
        return;
    }
    int value, position;
    printf("Nhap vi tri can cap nhat (0 den %d): ", current_size - 1);
    scanf("%d", &position);

    if (position < 0 || position >= current_size) {
        printf("Vi tri khong hop le.\n");
        return;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    arr[position] = value;
    printf("Da cap nhat phan tu thanh cong.\n");
}

void search_element() {
    if (current_size == 0) {
        printf("Mang rong. Khong co phan tu de tim kiem.\n");
        return;
    }
    int value;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);

    int found = 0;
    for (int i = 0; i < current_size; i++) {
        if (arr[i] == value) {
            printf("Tim thay %d tai vi tri %d.\n", value, i);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong tim thay %d trong mang.\n", value);
    }
}

void display_array() {
    if (current_size == 0) {
        printf("Mang rong.\n");
        return;
    }
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    do {
        print_menu();
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_element();
                break;
            case 2:
                delete_element();
                break;
            case 3:
                update_element();
                break;
            case 4:
                search_element();
                break;
            case 5:
                display_array();
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 6);

    return 0;
}
