//
// Created by 86155 on 2023/9/30.
//


#include <math.h>
#include <stdio.h>
#include <ctype.h>

int main(void){
    char first_name[] = "dayou";
    char last_name[] = "luo";

    char gender = 'm';
    char upper_case_gender = gender - 32;
    printf("%c\n", upper_case_gender);
//    printf("%s\n", gender);
    int birth_year = 1954;
    int birth_month = 7;
    int birth_day = 20;

    char weekday[] = "Tuesday";

    int c_score = 30;
    int music_score =100;
    int medicine_score =85;
//    printf("%c\n", c_score);将c_score转换为对应的字符

    double mean = (c_score + music_score + medicine_score) / 3.0;
    double sd = sqrt((pow(c_score - mean,2) +
            pow(music_score - mean,2) +
            pow(medicine_score - mean,2)) / 3.0);
    int rank = 5;
    printf("%s \t %s \t %c\n"
           "%.2d-%d-%d %.3s.\n"
           "%d\t %d\t%d\n"
           "%.1f \t %.2f\n"
           "%d%%\n"
           , first_name, last_name, toupper(gender),
           birth_day, birth_month, birth_year, weekday,
           c_score, music_score, medicine_score,
           mean, sd, rank);
//    toupper 大写输出


    return 0;
}