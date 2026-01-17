/******************************************************************************
 * Họ và tên: [Lã Hải Đăng]
 * MSSV:      [PS47692]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN
//  Input: Nhập vào số điện tiêu thụ hàng tháng
//  Output: Hiển thị số tiền cần phải đóng

#include <stdio.h>

int main()
{

    float soDienTieuThu, tongDien = 0;
    printf("Nhập số điện tiêu thụ : ");
    // Loại trường hợp < 0
    do
    {
        scanf("%f", &soDienTieuThu);
        if (soDienTieuThu < 0)
        {
            printf("Vui lòng nhập số điện tiêu thụ > 0 : ");
        }
    } while (soDienTieuThu < 0);
    // Bậc 1
    if (soDienTieuThu > 50)
    {
        tongDien += 50 * 1678;
        soDienTieuThu -= 50;
    }
    else
    {
        tongDien += soDienTieuThu * 1678;
        soDienTieuThu = 0;
    }
    // Bậc 2
    if (soDienTieuThu > 0)
    {
        if (soDienTieuThu > 50)
        {
            tongDien += 50 * 1734;
            soDienTieuThu -= 50;
        }
        else
        {
            tongDien += soDienTieuThu * 1734;
            soDienTieuThu = 0;
        }
    }
    // Bậc 3
    if (soDienTieuThu > 0)
    {
        if (soDienTieuThu > 100)
        {
            tongDien += 100 * 2014;
            soDienTieuThu -= 100;
        }
        else
        {
            tongDien += soDienTieuThu * 2014;
            soDienTieuThu = 0;
        }
    }
    // Bậc 4
    if (soDienTieuThu > 0)
    {
        if (soDienTieuThu > 100)
        {
            tongDien += 100 * 2536;
            soDienTieuThu -= 100;
        }
        else
        {
            tongDien += soDienTieuThu * 2536;
            soDienTieuThu = 0;
        }
    }
    // Bậc 5
    if (soDienTieuThu > 0)
    {
        if (soDienTieuThu > 100)
        {
            tongDien += 100 * 2834;
            soDienTieuThu -= 100;
        }
        else
        {
            tongDien += soDienTieuThu * 2834;
            soDienTieuThu = 0;
        }
    }
    // Bậc 6
    if (soDienTieuThu > 0)
    {
        tongDien += soDienTieuThu * 2927;
        soDienTieuThu = 0;
    }
    printf("Số tiền điện cần phải đóng là : %.2f\n", tongDien);
    return 0;
}