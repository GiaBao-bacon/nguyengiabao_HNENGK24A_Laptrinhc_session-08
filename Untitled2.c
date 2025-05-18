#include <stdio.h>

int main() {
    int mang[5];
    mang[0] = 10;
    mang[1] = 20;
    mang[2] = 30;
    mang[3] = 40;
    mang[4] = 50;

    int phan_tu;
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &phan_tu);

    int vi_tri = -1;
    int i; 
    for(i = 0; i < 5; i++) {
        if(mang[i] == phan_tu) {
            vi_tri = i;
            break;
        }
    }

    if(vi_tri != -1) {
        printf("Vi tri phan tu trong mang la %d\n", vi_tri);
    } else {
        printf("Phan tu khong ton tai trong mang\n");
    }

    return 0;
}
