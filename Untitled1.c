#include <stdio.h>

int main() {
    int mang[5];
    mang[0] = 10;
    mang[1] = 20;
    mang[2] = 30;
    mang[3] = 40;
    mang[4] = 50;

    printf("Cac phan tu trong mang tu cuoi ve dau:\n");
    int i; 
    for(i = 4; i >= 0; i--) {
        printf("mang[%d] = %d\n", i, mang[i]);
    }

    return 0;
}
