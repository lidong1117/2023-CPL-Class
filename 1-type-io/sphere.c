//
// Created by 86155 on 2023/9/30.
//



#include <stdio.h>

int main(void){

    const double PI = 3.14159;
    int radius = 100;

    double  volume = 4.0 / 3.0 * PI * radius * radius * radius;
    double surface_area = 4 * PI * radius * radius;

//    .4 precision
//    15 minimum width
//     - left-justified

    printf("%-15.4f = surface_area\n%-15.4f = volume\n",
           surface_area, volume);
    return 0;



}