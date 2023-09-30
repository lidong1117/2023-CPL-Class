//
// Created by 86155 on 2023/9/30.
//



#include <math.h>
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char first_name[10];
    char last_name[10];

    char gender;


    int birth_year;
    int birth_month;
    int birth_day;

    char weekday[10];

    int c_score;
    int music_score;
    int medicine_score;

    double mean;
    double sd;
    int rank;
    scanf("%10s%10s %c %d%d%d%d%d%d%lf%lf%d%%",
          first_name, last_name, &gender,
          &birth_year, &birth_month, &birth_day,
          &c_score, &music_score, &medicine_score,
          &mean, &sd,&rank);
//    &表示将值赋到该地址，而前两个变量不需要因为他们数组类型，其本身就表示该数组的地址
//%d%s会忽略前导空格，而%c不会忽略，只需要在前面加上一个空格即可
//scanf使用时，double类型是%lf




    printf("%s \t %s \t %c\n"
           "%.2d-%d-%d %.3s.\n"
           "%d\t %d\t%d\n"
           "%.1f \t %.2f\n"
           "%d%%\n", first_name, last_name, toupper(gender),
           birth_day, birth_month, birth_year, weekday,
           c_score, music_score, medicine_score,
           mean, sd, rank);
    return 0;
}