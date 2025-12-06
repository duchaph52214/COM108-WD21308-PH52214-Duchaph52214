// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>








void bai1() {
        char ten1[50], ten2[50];
        int tuoi1, tuoi2;

        printf("Nhap ten nguoi ban thu nhat: "); 
        fgets(ten1, sizeof(ten1), stdin);
        printf("Nhap tuoi nguoi ban thu nhat: ");
        scanf("%d", &tuoi1);
        getchar(); 

        printf("Nhap ten nguoi ban thu hai: "); printf("\n");
        fgets(ten2, sizeof(ten2), stdin);
        printf("Nhap tuoi nguoi ban thu hai: "); printf("\n");
        scanf("%d", &tuoi2);

        printf("\nThong tin vua nhap:"); printf("\n");
        printf("Ban 1: Ten - %sTuoi - %d", ten1, tuoi1); printf("\n");
        printf("Ban 2: Ten - %sTuoi - %d", ten2, tuoi2); printf("\n");
}



void bai2() {
    int n, i, tong = 0;

    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);

    printf("Cac so chia het cho 5 nho hon %d la:\n", n);
    for (i = 1; i < n; i++) {
        if (i % 5 == 0) {
            printf("%d ", i);
            tong += i;
        }
    }

    printf("\nTong cac so chia het cho 5 nho hon %d la: %d\n", n, tong);
}

void menu()
{

    int chon;
    do
    {
        system("cls");
        printf("* Menu Chuc Nang *"); printf("\n");
        printf("*________________________________________*"); printf("\n");
        printf("* Menu Chuc Nang *"); printf("\n");
        printf("1. Thong tin gia dinh "); printf("\n");
        printf("2. So chia het cho 5 "); printf("\n");
        printf("3. Thong tin thi sinh vien lap trinh "); printf("\n");
        printf("0. Thoat "); printf("\n");
        printf("|________________________________________|"); printf("\n");
        scanf_s("%d", &chon);

        switch (chon)
        {
        case 1:
            bai1();
            break;
        case 2:
            bai2();
            break;
        case 3:
            
            break;
        case 0:
            printf("THOAT");
            break;
        default:
            printf("Xin moi nhap dung chuc nang tren menu [1-3]");
            break;

        }



    } while (chon != 0);
}

int main()
{
    menu();
    return 0;
}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Mo "View" > "Solution Explorer"
//          de them/quan ly cac files
//   2. Mo "View" > "Output"
//          de kiem tra "build output" va "cac thong bao khac"
//   3. Mo "View" > "Error List"
//          de xem loi
//   4. Chon Project > "Add" > "New Item"
//          de tao moi file code,
//      hoac Project > "Add" > "Existing Item"
//          de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//          chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//          trong cua so "Solution Explorer"
//          bam chuot phai vao "Solution"
//          chon "Open Folder in File Explorer"

// GV: AnhTT184