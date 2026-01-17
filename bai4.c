/******************************************************************************
 * Họ và tên: [Lã Hải Đăng]
 * MSSV:      [PS47692]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
#include <math.h>

void cau1();
void cau2();
void cau3();
int main(){
    int choice;
    do
    {
    printf("\n----------LAB3----------");
    printf("\nCau 1\n");
    printf("Cau 2\n");
    printf("Cau 3\n");
    printf("Chọn 4 để thoát trương trình\n");
    printf("Chọn câu bạn muốn thực hiện : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        cau1();
        break;
    case 2:
        cau2();
        break;
    case 3:
        cau3();
        break;  
    case 4:
        break;
    default: 
        printf("Vui lòng chọn câu 1, 2, 3 !!!\n");
        break;
    }
    } while (choice != 4);
    printf("Bye byeeeeee !!!");
    return 0;
}

void cau1(){
    float diem;
    printf("Nhap diem sinh vien: ");
    do {
        scanf("%f", &diem);
        if (diem < 0 || diem > 10) {
            printf("Nhập điểm từ 0 - 10: ");
        }
    } while (diem < 0 || diem > 10);

        if (diem < 3.5){
            printf("Học lực kém");
        } else if (diem < 5){
            printf("Học lực yếu");
        } else if (diem < 6.5){
            printf("Học lực trung bình");
        } else if (diem < 8){
            printf("Học lực khá");
        } else if (diem < 9){
            printf("Học lực giỏi");
        } else {
            printf("Học lực xuất sắc");
        }
}

void cau2(){
    int choice;
    printf("Chọn phương trình (1: Bậc 1, 2: Bậc 2): ");
    scanf("%d", &choice);

    switch (choice){
    case 1: {
        // ax + b = 0
        float a, b;

        printf("Nhập a: ");
        scanf("%f", &a);

        printf("Nhập b: ");
        scanf("%f", &b);

        if (a == 0){
            if (b == 0){
                printf("Phương trình có vô số nghiệm\n");
            } else {
                printf("Phương trình vô nghiệm\n");
            }
        } else {
            float x = -b / a;
            printf("Phương trình có nghiệm x = %.2f\n", x);
        }
        break;
    }

    case 2: {
        // ax^2 + bx + c = 0
        float a, b, c;
        printf("Nhập a: ");
        scanf("%f", &a);
        printf("Nhập b: ");
        scanf("%f", &b);
        printf("Nhập c: ");
        scanf("%f", &c);

        if (a == 0){
            // phương trình bậc 1: bx + c = 0
            if (b == 0){
                if (c == 0){
                    printf("Phương trình có vô số nghiệm\n");
                } else {
                    printf("Phương trình vô nghiệm\n");
                }
            } else {
                printf("Phương trình có nghiệm x = %.2f\n", -c / b);
            }
        } else {
            float delta = b*b - 4*a*c;
            printf("Delta = %.2f\n", delta);

            if (delta < 0){
                printf("Phuong trinh vo nghiem\n");
            } 
            else if (delta == 0){
                float x = -b / (2 * a);
                printf("Phuong trinh co nghiem kep x = %.2f\n", x);
            } 
            else {
                float x1 = (-b + sqrt(delta)) / (2 * a);
                float x2 = (-b - sqrt(delta)) / (2 * a);
                printf("Phuong trinh co 2 nghiem phan biet:\n");
                printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
            }
        }
        break;
    }

    default:
        printf("Vui lòng chọn 1 hoặc 2\n");
        break;
    }
}

void cau3(){
    float soDienTieuThu, tongDien = 0;
    printf("Nhập số điện tiêu thụ : ");
    // Loại trường hợp < 0
    do {
        scanf("%f", &soDienTieuThu);
        if (soDienTieuThu < 0) {
            printf("Vui lòng nhập số điện tiêu thụ > 0 : ");
        }
    } while (soDienTieuThu < 0);
    // Bậc 1
    if (soDienTieuThu > 50) {
        tongDien += 50 * 1678;
        soDienTieuThu -= 50;
    } else {
        tongDien += soDienTieuThu * 1678;
        soDienTieuThu = 0;
    }
    // Bậc 2
    if (soDienTieuThu > 0) {
        if (soDienTieuThu > 50) {
            tongDien += 50 * 1734;
            soDienTieuThu -= 50;
        } else {
            tongDien += soDienTieuThu * 1734;
            soDienTieuThu = 0;
        }
    }
    // Bậc 3
    if (soDienTieuThu > 0) {
        if (soDienTieuThu > 100) {
            tongDien += 100 * 2014;
            soDienTieuThu -= 100;
        } else {
            tongDien += soDienTieuThu * 2014;
            soDienTieuThu = 0;
        }
    }
    // Bậc 4
    if (soDienTieuThu > 0) {
        if (soDienTieuThu > 100) {
            tongDien += 100 * 2536;
            soDienTieuThu -= 100;
        } else {
            tongDien += soDienTieuThu * 2536;
            soDienTieuThu = 0;
        }
    }
    // Bậc 5
    if (soDienTieuThu > 0) {
        if (soDienTieuThu > 100) {
            tongDien += 100 * 2834;
            soDienTieuThu -= 100;
        } else {
            tongDien += soDienTieuThu * 2834;
            soDienTieuThu = 0;
        }
    }
    // Bậc 6
    if (soDienTieuThu > 0) {
        tongDien += soDienTieuThu * 2927;
        soDienTieuThu = 0;
    }
    printf("Số tiền điện cần phải đóng là : %.2f\n", tongDien);
}


