#include <stdio.h>
void chucNangMot()
{
    int n;
    do 
    {
        printf("Nhap n (n > 10): ");
        scanf_s("%d", &n);
        if (n <= 10)
        {
            printf("Sai,ban phai nhap so n > 10.\n");
        }
    } while (n <= 10);

    int tong = 0;     
    int soluong = 0;  

    for (int i = 1; i <= n; i += 2) 
    {
        tong = tong + i;   
        soluong = soluong + 1;
    }

    double tbc = (double)tong / soluong;

    printf("TBC cac so le tu 1 den N %d = %.2f\n", n, tbc);

    return 0;
}
void chucNangHai()
{
    int n;
    printf("nhap so:");
    scanf_s("%d", &n);
    if (n % 2 == 0)
    {
        printf("n la so chan\n");
    }
    else
    {
        printf("n la so le\n");
    }
}
int main()
{
    int chon;
    int luaChon;
    do
    {
        printf("Menu chuong trinh\n");
        printf("1.Tinh TB cong so le tu 1 den N\n");
        printf("2.TB cong cua so le tu 1 den N la so chan hay le\n");
        printf("0.Thoat\n");
        printf("Lua chon cua ban: ");
        scanf_s("%d", &chon);
        switch (chon)
        {
        case 1:
            chucNangMot();
            break;
        case 2:
            chucNangHai();
            break;
        default:
            printf("lua chon khong hop le, vui long nhap lai\n");
            break;
        }
    } while (chon != 0);
}