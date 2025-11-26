#include<stdio.h>
#include<math.h>
// prin va scan goi chung la build_in function ( cac ham ) 
void PhepTinhCoBan()
{
    {
        // khai bao
        double soThuc1 = 100;
        double soThuc2 = 2;
        double tong, hieu, tich, thuong;
        while (1 == 1)
        { // nguoi dung nhap
            printf("nhap so thu 1: ");
            scanf_s("%lf", &soThuc1);
            printf("nhap so thu 2: ");
            scanf_s("%lf", &soThuc2);
            // tinh toan
            tong = soThuc1 + soThuc2;
            hieu = soThuc1 - soThuc2;
            tich = soThuc1 * soThuc2;
            thuong = soThuc1 / soThuc2;
            // in ket qua
            printf("%lf\n", tong);
            printf("%lf\n", hieu);
            printf("%lf\n", tich);
            printf("%lf\n", thuong);
            printf("tong hai so: %.2lf + %3lf = %4lf\n", soThuc1, soThuc2, tong);
            printf("hieu hai so: %.2lf - %3lf = %4lf\n", soThuc1, soThuc2, hieu);
            printf("tich hai so: %.2lf * %3lf = %4lf\n", soThuc1, soThuc2, tich);
            printf("thuong hai so: %.2lf / %3lf = %4lf\n", soThuc1, soThuc2, thuong);
        }
    }
}
void HinhTron()
{
    // ham luy thua
   // printf_s("%lf", pow(2, 3));
   // printf("\n");
    // ham can bac 2
   // printf_s("%lf", sqrt(9));

    //nhap ban kinh hinh tron
    const float pi = 3.14;
    float banKinh, chuVi, dienTich;
    printf("Moi nhap Ban Kinh Hinh Tron:");
    scanf_s("%f", &banKinh);
    // tinh chu vi
    chuVi = pi * 2 * banKinh;
    // tinh dien tich #include<math.h> ==> pow: tinh luy thua
    dienTich = pi * pow(banKinh, 2);
    //in ket qua
    printf("Chu vi hinh tron: %.2f x 2 x %.2f = %.2f", pi, banKinh, chuVi);
    printf("\n");
    printf("Dien tich hinh tron: %f x %f^2 = %f", pi, banKinh, dienTich);
}
void hamDieuKien()
{
    // khai bao
    double soThuc, soThuc2, thuong;
    while (1 == 1)
    {
        // nguoi dung nhap
        scanf_s("%lf", &soThuc);
        scanf_s("%lf", &soThuc2);

        if (soThuc2 == 0)
        {
            printf("so chia phai khac 0");
        }
        else if (soThuc2 == 1)
        {
            printf("%lf", soThuc);
        }
        else if (soThuc == soThuc2)
        {
            printf("1.000");
        }
        else
        {
            // tinh toan
            thuong = soThuc / soThuc2;
            // in ket qua
            printf("%lf", thuong);
        }
    }
}
void timSoChan()
{
    int n;
    printf("nhap so:");
    scanf_s("%d", &n);
    if (n % 2 == 0)
    {
        printf("n la so chan");
    }
}
void ptrBac2()
{
    //khai bao
    float soA;
    float soB;
    float soC;
    printf("nhap vao ba so A , B , C""\n");
    float ketQua;
    int delta;
    float x1, x2;
    int soNguyen;
    //nguoi dung nhap
    scanf("%f", &soA);
    scanf("%f", &soB);
    scanf("%f", &soC);
    // tinh toan 
    if (soA == 0) // code lai ptrB1
    {
        //timh toan 
        ketQua = -soC / soB;
        // in kqua
        printf("%f", ketQua);
        printf("\n");
    }
    delta = pow(soB, 2) - 4 * soA * soC;
    if (delta < 0)
    {
        printf("phuong trinh vo nghiem");
    }
    else if (delta == 0)
    {
        // tinh toan 
        x1 = -soB / 2 * soA;
        printf("phuong trinh co nghiem kep x1 = x2 ""\n");
        printf("%f", x1);
    }
    else if (delta > 0)
    {
        // tinh toan 
        x1 = (-soB + sqrt(delta)) / (2 * soA);
        x2 = (-soB - sqrt(delta)) / (2 * soA);
        soNguyen == ((int)x1);
        if (x1 == (int)x1)
        {
            printf("phuong trinh co 2 nghiem phan biet");
            printf("\n");
            printf("x1 = %f", x1);
            printf("\n");
            printf("x2 = %f", x2);
            printf("\n");
        }
        else
        {

        }
    }
}
void epKieuDuLieu()
{
    system("cls");
    char kyTu;
    int soNguyen;

    for ( int  i = 0; i < 5 ; i++)
    {
        scanf("%d", &soNguyen);
        kyTu = (char)soNguyen;

        printf("%c\n", kyTu);
        printf("%d\n", soNguyen);

    }
    
}
void lapBangCuuChuong()
{
    int bangCuuChuong = 2;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", bangCuuChuong, i, bangCuuChuong * i);
        if (i == 10 && bangCuuChuong < 10)
        {
            i = 0;
            bangCuuChuong++;
        }
    }
}
double tinhTich(double soThuc, double soThuc2)
{
    double tich = soThuc * soThuc2;
    return tich;
}
double tinhToanCoBan(double soThuc, double soThuc2, char toanTu)
{
    double ketQua;
    {
        if (toanTu == '+')
        {
            ketQua = soThuc + soThuc2;
        }
        else if (toanTu == '-')
        {
            ketQua = soThuc - soThuc2;
        }
        else if (toanTu == '*')
        {
            ketQua = soThuc * soThuc2;
        }
        else if (toanTu == ':')
        {
            ketQua = soThuc / soThuc2;
        }
    } return ketQua;
}// double ketQua = tinhToanCoBan(4, 9, '-');
//printf("%lf", ketQua);
double max(double soThuc, double soThuc2)
{
    if(soThuc > soThuc2)
    {
        return soThuc;
    }
    if (soThuc < soThuc2)
    {
        return soThuc2;
    }
    return soThuc;
}   //printf("so lon nhat la %lf", max(5, 67));
void khaiBaoMang()
{
    int array[4] = { 9, 8, 6, 3 };// thay int = double array[2] = {8.5, 9,4};
    scanf_s("%d", &array[1]);

    printf("%d\n", array[0]);
    printf("%d\n", array[1]);
    printf("%d\n", array[2]);
    printf("%d\n", array[3]);
    // động đến mảng là có vòng lặp
}
void khaiBaoMangCoVongLap()
{
    double array[4];
    // cho phep nguoi dung nhap du lieu vao mang"array"
    for (int i = 0; i < sizeof(array) / sizeof(double); i++)
    {
        scanf_s("%lf", &array[i]);
    }
    //in ra tat ca gia tri luu trong mang "array"
    for (int i = 0; i < sizeof(array) / sizeof(double); i++)
    {
        printf("%lf", array[i]); printf("\n");
    }
}
int main()
{
    khaiBaoMangCoVongLap();
}