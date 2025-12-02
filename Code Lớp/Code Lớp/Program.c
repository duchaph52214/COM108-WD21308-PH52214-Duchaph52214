// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
#include <string.h>

void chuViVaDienTichHinhTron()
{
    const float pi = 3.1415;

    double banKinh;
    double chuVi, dienTich;
    printf("moi nhap Ban Kinh: ");
    scanf_s("%lf", &banKinh);
    chuVi = 2 * pi * banKinh;
    dienTich = pi * pow(banKinh, 2);
    printf("ChuVi: 3.1415 * 2 * %lf = %.2lf\n", banKinh, chuVi);
    printf("DienTich: 3.1415 + %lf^2 = %.2lf\n", banKinh, dienTich);

}
void congTruNhanChia()
{
    double sothuc1;
    double sothuc2;
    double ketqua;

    int i = 1;
    while (i == 1)
    {
        system("cls");
        printf("moi nhap so thu nhat: ");
        scanf_s("%lf", &sothuc1);
        printf("moi nhap so thu 2: ");
        scanf_s("%lf", &sothuc2);
        ketqua = sothuc1 + sothuc2;
        printf("ketqua: %lf + %lf = %.2lf\n", sothuc1, sothuc2, ketqua); printf("\n");

        ketqua = sothuc1 - sothuc2;
        printf("ketqua: %lf - %lf = %.2lf\n", sothuc1, sothuc2, ketqua); printf("\n");

        ketqua = sothuc1 * sothuc2;
        printf("ketqua: %lf * %lf = %.2lf\n", sothuc1, sothuc2, ketqua); printf("\n");

        ketqua = sothuc1 / sothuc2;
        printf("ketqua: %lf / %lf = %.2lf\n", sothuc1, sothuc2, ketqua); printf("\n");

        printf("ban muon tiep tuc chuc nang nua ko: [1 = Tiep tuc], [So bat ki khac 1 = thoat ra menu] ");
        scanf_s("%d", &i);

    }
}



void MenuASM1()
{
    int chon;
    do
    {
        system("cls");
        printf("* Menu Chuc Nang *"); printf("\n");
        printf("1. Kiem tra so nguyen"); printf("\n");
        printf("2. Uoc chung & Boi chung cua 2 so"); printf("\n");
        printf("3. Tinh tien quan Karaoke"); printf("\n");
        printf("4. Tinh tien dien"); printf("\n");
        printf("5. Doi tien"); printf("\n");
        printf("6. Tinh lai xuat vay ngan hang tra gop"); printf("\n");
        printf("7. Vay tien mua xe"); printf("\n");
        printf("8. Sap xep thong tin sinh vien"); printf("\n");
        printf("9. Xay u game FPOLY-LOTT"); printf("\n");
        printf("10. Tinh toan phan so"); printf("\n");
        printf("0. thoat"); printf("\n");
        printf("xin moi chon chuc nang tren menu: ");
        scanf_s("%d", &chon);

        switch (chon)
        {
        case 1:
            congTruNhanChia();
            break;
        case 2:
            congTruNhanChia();
            break;
        case 3:
            congTruNhanChia();
            break;
        case 4:
            congTruNhanChia();
            break;
        case 5:
            congTruNhanChia();
            break;
        case 6:
            congTruNhanChia();
            break;
        case 7:
            congTruNhanChia();
            break;
        case 8:
            congTruNhanChia();
            break;
        case 9:
            congTruNhanChia();
            break;
        case 10:
            congTruNhanChia();
            break;
        case 0:
            printf("THOAT");
            break;
        default:
            printf("Xin moi nhap dung chuc nang tren menu [1-10]");
            break;

        }



    } while (chon != 0);
}

void vonglap() {}

void sapXepPhanTuMang1Chieu()
{
    int intergerArray[100];
    int tmp;
    int length;
    int i;
    printf("Nhap so lg phan tu mang: ");
    scanf_s("%d", &length);
    printf("Nhap so tu mang %d lg phan: \n");
    for (i = 0; i < length; i++)
    {
        printf("Mang [%d] = ", i);
        scanf_s("%d", &intergerArray[i]);
    }
    printf("Sap xep tang dan tu mang %d lg phan: \n", length);
    for (i = 0; i < length - 1; i++)
    {
        if (intergerArray[i] > intergerArray[i + 1])
        {
            tmp = intergerArray[i];
            intergerArray[i + 1] = intergerArray[i];
            intergerArray[i + 1] = tmp;
            i = -1;
        }
    }
    printf("Xuat so tu mang %d lg phan: \n", length);
    for (i = 0; i < length; i++)
    {
        printf("Mang [%d] = \n", i, intergerArray[i]);
    }
}

void mangHaiChieu()
{
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Mang[%d][%d] = ", i, j);
            scanf_s("%d", &array[i][j]);
        }

    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d,  ", array[i][j]);

        }
        printf("\n");
    }
}

void mangKiTu() {
    char mangKiTu[10] = "Duc";
    for (int i = 0; i < 3; i++)
    {
        scanf_s("% c", &mangKiTu[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%c", mangKiTu[i]);
    }
}

int main()
{
    void mangKiTu(); 
    {
        char mangKiTu[10] = "Duc";
        for (int i = 0; i < 3; i++)
        {
            scanf_s(" %c", &mangKiTu[i]);
        }
        for (int i = 0; i < 3; i++)
        {
            printf(" %c", mangKiTu[i]);
        }
    }
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