#include <stdio.h>
//2025年8月14日 22点03分 再改一次代码，就当完善功能了
int main() {
    double fahrenheit, celsius;
    
    printf("输入华氏温度: ");
    scanf("%lf", &fahrenheit);
    
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("摄氏温度: %.2f\n", celsius);
    
    return 0;
}

