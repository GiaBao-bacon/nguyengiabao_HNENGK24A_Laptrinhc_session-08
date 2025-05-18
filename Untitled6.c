#include <stdio.h>

int main() {
    int mang[3][3] = {
        {4, 2, 3},
        {5, 7, 8},
        {9, 1, 6}
    };

    int n = 3;
    int tong = 0;

    printf("Cac phan tu tren duong cheo chinh: ");
    int i; 
    for(i = 0; i < n; i++) {
        printf("%d ", mang[i][i]);
        tong += mang[i][i];
    }
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", tong);

    return 0;
}
