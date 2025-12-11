// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include "thongTinThuCung.h"
#include "tinhTong.h"



void chonChucNang() {

    int chon;
    do
    {
        system("cls");
        printf("* Chon chuc nang *"); printf("\n");
        printf("1. Thong tin thu cung "); printf("\n");
        printf("2. Tinhs tong "); printf("\n");
        printf("3. Thong tin cua hang "); printf("\n");
        printf("0. Thoat "); printf("\n");
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
    chonChucNang();
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