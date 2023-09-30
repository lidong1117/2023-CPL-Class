//
// Created by 86155 on 2023/9/30.
//

#include <stdio.h>

int main(void){
    const double MOL = 6.02e23;
    const int GRAM_PER_MOL = 32;

    int mass = 6;
//  e exponent 科学计数法
//  g significant digits 有效数字

    double quantity = mass * 1.0 / GRAM_PER_MOL * MOL;
    printf("quantity = %.3e\nquantity = %.5g\n", quantity, quantity);
    return 0;

}