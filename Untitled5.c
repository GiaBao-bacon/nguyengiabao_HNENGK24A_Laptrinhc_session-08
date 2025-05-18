#include <stdio.h>

int main() {
    int mang[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    int hang = 4;
    int cot = 5;
    int tong = 0;
int i; 
    for(i = 0; i < hang; i++) {
    	int j; 
        for(j = 0; j < cot; j++) {
            if(i == 0 || i == hang - 1 || j == 0 || j == cot - 1) {
                tong += mang[i][j];
            }
        }
    }

    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", tong);

    return 0;
}
