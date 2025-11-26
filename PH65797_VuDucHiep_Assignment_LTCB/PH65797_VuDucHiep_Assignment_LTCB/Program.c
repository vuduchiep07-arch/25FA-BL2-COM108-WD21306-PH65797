#include <stdio.h>
#include <math.h>

void kiemTraSoNguyen()
{
    int luaChon;
    do
    {
        printf("Kiem tra so nguyen\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void timUocChungVaBoiChung()
{
    int luaChon;
    do
    {
        printf("Tim Uoc chung va Boi chung\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void tinhTienKaraoke()
{
    int luaChon;
    do
    {
        printf("Tinh tien Karaoke\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void tinhTienDien()
{
    int luaChon;
    do
    {
        printf("Tinh tien dien\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void chucNangDoiTien()
{
    int luaChon;
    do
    {
        printf("Chuc nang doi tien\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void vayNganHangVayTraGop()
{
    int luaChon;
    do
    {
        printf("Vay ngan hang,vay tra gop\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void vayTienMuaXe()
{
    int luaChon;
    do
    {
        printf("Vay tien mua xe\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void ttSinhVien()
{
    int luaChon;
    do
    {
        printf("TT sinh vien\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void chucNangChin()
{
    int luaChon;
    do
    {
        printf("Game FPOLY_LOTT (2/15)\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void chucNangMuoi()
{
    int luaChon;
    do
    {
        printf("Toan phan so\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
int main()
{
    int chon;
    int luaChon;
    do
    {
        printf("Menu chuong trinh\n");
        printf("1.Kiem tra so nguyen\n");
        printf("2.Tim Uoc chung va Boi chung\n");
        printf("3.Tinh tien Karaoke\n");
        printf("4.Tinh tien dien\n");
        printf("5.Chuc nang doi tien\n");
        printf("6.Vay ngan hang,vay tra gop\n");
        printf("7.Vay tien mua xe\n");
        printf("8.TT sinh vien\n");
        printf("9.Game FPOLY_LOTT (2/15)\n");
        printf("10.Toan phan so\n");
        printf("0.Thoat\n");
        printf("Lua chon cua ban: ");
        scanf_s("%d", &chon);
        switch (chon)
        {
        case 1:
            kiemTraSoNguyen();
            break;
        case 2:
            timUocChungVaBoiChung();
            break;
        case 3:
            tinhTienKaraoke();
            break;
        case 4:
            tinhTienDien();
            break;
        case 5:
            chucNangDoiTien();
            break;
        case 6:
            vayNganHangVayTraGop();
            break;
        case 7:
            vayTienMuaXe();
            break;
        case 8:
            ttSinhVien();
            break;
        case 9:
            chucNangChin();
            break;
        case 10:
            chucNangMuoi();
            break;
        default:
            printf("lua chon khong hop le, vui long nhap lai\n");
            break;
        }
    } while (chon != 0);
}