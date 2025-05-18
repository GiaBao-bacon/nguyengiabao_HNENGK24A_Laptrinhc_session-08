#include <stdio.h>

int main() {
    int mang[3][4] = {
        {12, 45, 23, 9},
        {67, 31, 8, 14},
        {25, 19, 53, 36}
    };

    int hang = 3;
    int cot = 4;
    int lon_nhat = mang[0][0];
int i; 
    for(i = 0; i < hang; i++) {
    	int j; 
        for(j = 0; j < cot; j++) {
            if(mang[i][j] > lon_nhat) {
                lon_nhat = mang[i][j];
            }
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", lon_nhat);

    return 0;
}
