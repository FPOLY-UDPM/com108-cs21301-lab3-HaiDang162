/******************************************************************************
 * Họ và tên: [Lã Hải Đăng]
 * MSSV:      [PS47692]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH
// 2.2 BẬC 2
// Phương trình có dạng: ax2 + bx + c = 0
// Input: Nhập vào từ bàn phím: a, b, c
// Output: Nghiệm của phương trình
// Biết rằng:
// Nếu a == 0, phương trình thành bx + c = 0
// Ngược lại nếu a != 0
//  Tính delta
//  Nếu delta < 0: Phương trình vô nghiệm
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a)
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt
// o X1 = (-b + căn(delta))/(2*a)
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>

int main()
{

    float a, b, c;
    printf("Nhập a: ");
    scanf("%f", &a);
    printf("Nhập b: ");
    scanf("%f", &b);
    printf("Nhập c: ");
    scanf("%f", &c);

    if (a == 0)
    {
        // phương trình bậc 1: bx + c = 0
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Phương trình có vô số nghiệm\n");
            }
            else
            {
                printf("Phương trình vô nghiệm\n");
            }
        }
        else
        {
            printf("Phương trình có nghiệm x = %.2f\n", -c / b);
        }
    }
    else
    {
        float delta = b * b - 4 * a * c;
        printf("Delta = %.2f\n", delta);

        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem\n");
        }
        else if (delta == 0)
        {
            float x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep x = %.2f\n", x);
        }
        else
        {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }
    return 0;
}