#include <stdio.h>

int main() {
    double fahrenheit, celsius;
    
    printf("输入华氏温度: ");
    scanf("%lf", &fahrenheit);
    
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("摄氏温度: %.2f\n", celsius);
    
    return 0;
}
