#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    char pt;
    
    pritnf("\nHIHI");
    printf ("\nTest case\n");
    printf("Nhap vao hai so nguyen duong a va b: ");
    scanf("%d %d", &a, &b);

    printf("Nhap phep toan (+, -, *, /, ^): ");
    scanf(" %c", &pt);

    
    switch (pt) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d / %d = %.2f\n", a, b, (float)a / b);
            } else {
                printf("Loi: Khong chia duoc cho 0\n");
            }
            break;
        case '^':
            printf("%d ^ %d = %.2f\n", a, b, pow(a, b));
            break;
        default:
            printf("Loi: Phep toan khong hop le\n");
    }
    
    return 0;
}

