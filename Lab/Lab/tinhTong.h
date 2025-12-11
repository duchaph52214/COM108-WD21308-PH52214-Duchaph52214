#pragma once
#include "tinhTong.h"

void bai2() {

    int i = 1;
    while (i == 1)
    {

        int n;
        printf("Nhap mot so nguyen duong > 3: ");
        scanf("%d", &n);

        if (n <= 3) {
            printf("Vui long nhap so lon hon 3.\n");
            return;
        }

        int tong = 0;
        for (int i = 1; i <= n; i += 2) {
            tong += i;
        }
        printf("Tong cac so le tu 1 den %d la: %d\n", n, tong);

        if (n % 5 == 0) {
            printf("%d chia het cho 5.\n", n);
        }
        else {
            printf("%d khong chia het cho 5.\n", n);
        }

        printf("ban muon tiep tuc chuc nang nua ko: [1 = Tiep tuc], [So bat ki khac 1 = thoat ra menu] ");
        scanf_s("%d", &i);

    }
}