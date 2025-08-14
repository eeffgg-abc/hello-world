#include <stdio.h>
//2025年8月14日 22点03分 再改一次代码，就当完善功能了
//2025年8月14日 23点02分 这次我根据管理员意见进行了修改。
int main() {
    double fahrenheit, celsius;
    //根据管理员提供的意见进行修改了
    
    printf("输入华氏温度: ");
    scanf("%lf", &fahrenheit);
    
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("摄氏温度: %.2f\n", celsius);
    
    return 0;
}


