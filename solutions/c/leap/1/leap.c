#include "leap.h"
#include <stdio.h>

bool leap_year(int year) {
    // 修复逻辑：400能整除 OR (4能整除 AND 100不能整除)
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year!\n", year);
        return true;
    } else {
        printf("%d is not a leap year.\n", year);
        return false;
    }
}