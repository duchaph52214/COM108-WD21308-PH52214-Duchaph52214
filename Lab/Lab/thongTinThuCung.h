#pragma once
#include "thongTinThuCung.h"

void bai1() {

    int i = 1;
    while (i == 1)
    {
        char ma1[10], ten1[20];
        int nam1;

        char ma2[10], ten2[20];
        int nam2;

        char ma3[10], ten3[20];
        int nam3;


        printf("Nhap ma thu cung 1: ");
        scanf("%s", ma1);
        printf("Nhap ten thu cung 1: ");
        scanf("%s", ten1);
        printf("Nhap nam sinh thu cung 1: ");
        scanf("%d", &nam1);

        printf("\nNhap ma thu cung 2: ");
        scanf("%s", ma2);
        printf("Nhap ten thu cung 2: ");
        scanf("%s", ten2);
        printf("Nhap nam sinh thu cung 2: ");
        scanf("%d", &nam2);

        printf("\nNhap ma thu cung 3: ");
        scanf("%s", ma3);
        printf("Nhap ten thu cung 3: ");
        scanf("%s", ten3);
        printf("Nhap nam sinh thu cung 3: ");
        scanf("%d", &nam3);


        printf("\n--- Thong tin thu cung ---\n");
        printf("1: %s - %s - %d - Tuoi: %d\n", ma1, ten1, nam1, 2025 - nam1);
        printf("2: %s - %s - %d - Tuoi: %d\n", ma2, ten2, nam2, 2025 - nam2);
        printf("3: %s - %s - %d - Tuoi: %d\n", ma3, ten3, nam3, 2025 - nam3);



        printf("ban muon tiep tuc chuc nang nua ko: [1 = Tiep tuc], [So bat ki khac 1 = thoat ra menu] ");
        scanf_s("%d", &i);

    }

}
