#include<stdio.h>
#include<math.h>
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
int main()
{
    int gtri;
    do
    {
        printf("Menu chuong trinh\n");
        printf("1.Kiem tra so nguyen\n");
        printf("2.Tim Uoc chung va Boi chung\n");
        printf("3.Tinh tien Karaoke\n");
        printf("4.Tinh tien dien\n");
        printf("5.Chuc nang doi tien\n");
        printf("6.Vay ngan hang,vay tra gop\n");
        printf("7.Vay tien mua xe");
        printf("8.TT sinh vien");
        printf("9.Game FPOLY_LOTT (2/15)\n");
        printf("10.Toan phan so\n");
        printf("0.Thoat\n");
        printf("Lua chon cua ban: " );
        scanf_s("%d", &gtri);
    } while(gtri!=0);
        
}