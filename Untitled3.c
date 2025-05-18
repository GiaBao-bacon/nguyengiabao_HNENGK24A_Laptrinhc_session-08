#include <stdio.h>

int main() {
    int n;
    printf("Nhap kich thuoc n cua ma tran vuong (n > 0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Kich thuoc phai lon hon 0\n");
        return 1;
    }

    int mang[n][n];
    int i, j;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            mang[i][j] = i + j;
        }
    }

    printf("Ma tran vuong %dx%d:\n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", mang[i][j]);
        }
        printf("\n");
    }

    return 0;
}
