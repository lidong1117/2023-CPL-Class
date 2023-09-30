//
// Created by 86155 on 2023/9/30.
//



#include <stdio.h>

int main(void){

    int radius = 10;

    const double PI = 3.14159;//    int 限定取值范围    限定了对变量的操作 例如 整形可以进行加减运算等，但是不能对字符串进行拼接
// &radius   location 和变量本身的值有区别
    double circumference = 2 * PI * radius;
    double area = 3.14159 * PI * radius;
//%d decimal
    printf("radius = %d\ncircumference = %.2f\narea = %.2f\n",
           radius, circumference, area);

    return 0;
}