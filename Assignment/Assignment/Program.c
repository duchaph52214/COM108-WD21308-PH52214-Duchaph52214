// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
//code kiểm tra số nguyên
bool kiemtrasonguyento(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
bool kiemTraSoChinhPhuong(int n) {
    int canBacHai = sqrt(n);
    return (canBacHai * canBacHai == n);
}
void kiemTraSoNguyen()
{
    int i = 1;
    while (i == 1)
    {
        system("cls");
        int x;
        printf("nhap x: "); scanf_s("%d", &x);

        printf("so %d la so nguyen.\n", x);

        if (kiemtrasonguyento(x)) {
            printf("so %d la so nguyen to.\n", x);
        }
        else {
            printf("so %d khong la so nguyen to.\n", x);
        }
        if (kiemTraSoChinhPhuong(x)) {
            printf("so %d la so chinh phuong.\n", x);
        }
        else {
            printf("so %d khong la so chinh phuong.\n", x);
        }
        printf("ban muon tiep tuc chuc nang nua ko: [1 = Tiep tuc], [So bat ki khac 1 = thoat ra menu] ");
        scanf_s("%d", &i);

    }
}
//code tìm ước bội chung
int timUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int timBCNN(int a, int b) {
    return (a * b) / timUCLN(a, b);
}
void timUocBoiChung() {
    
    int i = 1;
    while (i == 1)
    {
        system("cls");
        int x, y;
        printf("nhap vao 2 so nguyen x = , y = "); scanf_s("%d %d", &x, &y);

        int uscln = timUCLN(x, y);
        int bscnn = timBCNN(x, y);

        printf("Uoc so chung lon nhat %d va %d la %d \n", x, y, uscln);
        printf("Boi chung nho nhat %d va %d la %d \n", x, y, bscnn);
      
        printf("ban muon tiep tuc chuc nang nua ko: [1 = Tiep tuc], [So bat ki khac 1 = thoat ra menu] ");
        scanf_s("%d", &i);

    }
}
// code tính tiền karaoke
float tinhTienKaraoke(int gioBatDau, int gioKetThuc) {
    int soGio = gioKetThuc - gioBatDau;
    float tongTien = 0;

  
    if (gioBatDau < 12 || gioKetThuc > 23 || gioBatDau >= gioKetThuc) {
        printf("Gio bat dau & ket thuc khong hop le ...\n");
        return -1;
    }

 
    if (soGio <= 3) {
        tongTien = soGio * 150000;
    }
    else {
        tongTien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
    }
    if (gioBatDau >= 14 && gioBatDau <= 17) {
        tongTien *= 0.9;
    }

    return tongTien;
}
void tinhTienChoKaraoke() {
    int i = 1;
    while (i == 1)
    {
        system("cls");
        int gioBatDau, gioKetThuc;
        printf("nhap gio bat dau (12h-23h): "); scanf_s("%d", &gioBatDau);
        printf("nhap gio ket thuc(12h-23h): "); scanf_s("%d", &gioKetThuc);

        float tien = tinhTienKaraoke(gioBatDau, gioKetThuc);
        if (tien != -1) {
        printf("Tong tien can thanh toan: %.2f VND\n", tien);
        }
        
        printf("ban muon tiep tuc chuc nang nua ko: [1 = Tiep tuc], [So bat ki khac 1 = thoat ra menu] ");
        scanf_s("%d", &i);

    }
}
// code tính tiền điện
float tinhTienDien(int soKwh) {
    float tongTien = 0;

    if (soKwh <= 50) {
        tongTien = soKwh * 1678;
    }
        else if (soKwh <= 100) {
            tongTien = 50 * 1678 + (soKwh - 50) * 1734;
        }
        else if (soKwh <= 200) {
            tongTien = 50 * 1678 + 50 * 1734 + (soKwh - 100) * 2014;
        }
        else if (soKwh <= 300) {
            tongTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (soKwh - 200) * 2536;
        }
        else if (soKwh <= 400) {
            tongTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (soKwh - 300) * 2834;
        }
    else {
        tongTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (soKwh - 400) * 2927;
    }
    return tongTien;
}
void tinhTienDienBacThang() {
    
    system("cls");
    int i = 1;
    while (i == 1)
    {
        int soKwh;
        printf("Nhap so soKwh tieu thu: "); 
        scanf_s("%d", &soKwh);

        if (soKwh < 0) {
        printf("So soKwh tieu thu khong hop le! \n");
        return;
        }

        float tien = tinhTienDien(soKwh);
        printf("So tien dien can thanh toan: %.2f VND \n", tien);

        printf("ban muon tiep tuc chuc nang nua ko: [1 = Tiep tuc], [So bat ki khac 1 = thoat ra menu] ");
        scanf_s("%d", &i);

    }
}
// code đổi tiền
void doiTien() {
   
    int i = 1;
    while (i == 1)
    {
        system("cls");
        int menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
        int soTo[9] = { 0 };
        int soTien;

        printf("Nhap so tien can doi: ");
        scanf_s("%d", &soTien);

        if (soTien <= 0) {
        printf("So tien can doi khong hop le!\n");
        }
        else {
            printf("So tien can doi: %d nghin dong\n", soTien);

            for (int i = 0; i < 9; i++) {
                if (soTien >= menhGia[i]) {
                soTo[i] = soTien / menhGia[i];
                soTien -= soTo[i] * menhGia[i];
                }
            }
            printf("Ket qua doi tien:\n");
            for (int i = 0; i < 9; i++) {
                if (soTo[i] > 0)
                    printf("%d to %d nghin\n", soTo[i], menhGia[i]);
            }
        }
        printf("ban muon tiep tuc chuc nang nua ko: [1 = Tiep tuc], [So bat ki khac 1 = thoat ra menu] ");
        scanf_s("%d", &i);

    }
}
// code Tính toán vay ngân hàng
void tinhToanVayNganHang() {
    
    int i = 1;
    while (i == 1)
    {
        system("cls");
        float soTienVay;
        printf("So tien muon vay: ");
        scanf("%f", &soTienVay);

        if (soTienVay <= 0) {
            printf("So tien vay phai > 0\n");
        }
        else {
            float laiSuatThang = 0.05;
            float tienGocHangThang = soTienVay / 12;
            float tongTienTra = 0;

            printf("So tien vay: %.2f VND\n", soTienVay);
            printf("Chi tiet cac khoan phai tra hang thang:\n");

            for (int thang = 1; thang <= 12; thang++) {
                float tienLaiThang = soTienVay * laiSuatThang;
                float tienTraHangThang = tienGocHangThang + tienLaiThang;
                printf("Thang %d: Tien goc = %.2f, Tien lai = %.2f, Tong = %.2f\n",thang, tienGocHangThang, tienLaiThang, tienTraHangThang);
                tongTienTra += tienTraHangThang;
                soTienVay -= tienGocHangThang;
            }

            printf("Tong so tien phai tra sau 12 thang: %.2f VND\n", tongTienTra);
        }
        printf("ban muon tiep tuc chuc nang nua ko: [1 = Tiep tuc], [So bat ki khac 1 = thoat ra menu] ");
        scanf_s("%d", &i);

    }
}
// code Tính tiền vay mua xe
void tinhTienVayMuaXe() {

    int i = 1;
    while (i == 1)
    {
        system("cls");
        float tyLeVay;
        printf("Nhap ty le vay (%%): ");
        scanf("%f", &tyLeVay);

        if (tyLeVay <= 0 || tyLeVay > 100) {
            printf("Ty le vay không hop le! Vui long nhap tu 1 den 100.\n");
        }
        else {
            float giaTriXe = 500000000; // Giá trị cố định 500 triệu VND
            float laiSuatNam = 0.072;   // Lãi suất cố định 7.2% mỗi năm
            int soNamVay = 2;           // Kỳ hạn vay 2 năm = 24 tháng

            float soTienVay = (tyLeVay / 100) * giaTriXe;
            float tienTraTruoc = giaTriXe - soTienVay;
            float laiSuatThang = laiSuatNam / 12;
            int soThangVay = soNamVay * 12;
            float tienGocHangThang = soTienVay / soThangVay;
            float tongTienTra = 0;

            printf("Gia tri xe: %.2f VND\n", giaTriXe);
            printf("So tien tra truoc: %.2f VND\n", tienTraTruoc);
            printf("Chi tiet cac khoan phai tra hang thang:\n");

            for (int thang = 1; thang <= soThangVay; thang++) {
                float tienLaiThang = soTienVay * laiSuatThang;
                float tienTraHangThang = tienGocHangThang + tienLaiThang;
                printf("Thang %d: Tien goc = %.2f, Tien lai = %.2f, Tong = %.2f\n", thang, tienGocHangThang, tienLaiThang, tienTraHangThang);
                tongTienTra += tienTraHangThang;
                soTienVay -= tienGocHangThang; // Giảm dư nợ khi trả gốc
            }

            printf("Tong so tien phai tra sau %d thang: %.2f VND\n", soThangVay, tongTienTra);
        }
        printf("ban muon tiep tuc chuc nang nua ko: [1 = Tiep tuc], [So bat ki khac 1 = thoat ra menu] ");
        scanf_s("%d", &i);

    }
}



void MenuASM()
{
    int chon;
    do
    {

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
            kiemTraSoNguyen();
            break;
        case 2:
            kiemTraSoNguyen();
            break;
        case 3:
            kiemTraSoNguyen();
            break;
        case 4:
            kiemTraSoNguyen();
            break;
        case 5:
            kiemTraSoNguyen();
            break;
        case 6:
            kiemTraSoNguyen();
            break;
        case 7:
            kiemTraSoNguyen();
            break;
        case 8:
            kiemTraSoNguyen();
            break;
        case 9:
            kiemTraSoNguyen();
            break;
        case 10:
            kiemTraSoNguyen();
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





int main()
{
    void MenuASM();
    {
        int chon;
        do
        {
            system("cls");
            printf("* Menu Chuc Nang *"); printf("\n");
            printf("*________________________________________*"); printf("\n");
            printf("| 1. Kiem tra so nguyen                  |"); printf("\n");
            printf("| 2. Uoc chung & Boi chung cua 2 so      |"); printf("\n");
            printf("| 3. Tinh tien quan Karaoke              |"); printf("\n");
            printf("| 4. Tinh tien dien                      |"); printf("\n");
            printf("| 5. Doi tien                            |"); printf("\n");
            printf("| 6. Tinh lai xuat vay ngan hang tra gop |"); printf("\n");
            printf("| 7. Vay tien mua xe                     |"); printf("\n");
            printf("| 8. Sap xep thong tin sinh vien         |"); printf("\n");
            printf("| 9. Xay u game FPOLY-LOTT               |"); printf("\n");
            printf("| 10. Tinh toan phan so                  |"); printf("\n");
            printf("| 0. thoat                               |"); printf("\n");
            printf("|________________________________________|"); printf("\n");
            printf("* Xin moi chon chuc nang tren menu * : ");
            scanf_s("%d", &chon);

            switch (chon)
            {
            case 1:
                kiemTraSoNguyen();
                break;
            case 2:
                timUocBoiChung();
                break;
            case 3:
                tinhTienChoKaraoke();
                break;
            case 4:
                tinhTienDienBacThang();
                break;
            case 5:
                doiTien();
                break;
            case 6:
                tinhToanVayNganHang();
                break;
            case 7:
                tinhTienVayMuaXe();
                break;
            case 8:
                kiemTraSoNguyen();
                break;
            case 9:
                kiemTraSoNguyen();
                break;
            case 10:
                kiemTraSoNguyen();
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