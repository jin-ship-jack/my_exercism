#include "resistor_color.h"

// 1. 返回颜色代码
resistor_band_t color_code(resistor_band_t color) {
    // 因为枚举本身就是整数，所以直接返回即可
    return color;
}

// 2. 返回所有颜色数组
const resistor_band_t *colors(void) {
    // 静态数组，保证函数运行完后内存不会被释放
    static resistor_band_t all_colors[] = {
        BLACK, BROWN, RED, ORANGE, YELLOW,
        GREEN, BLUE, VIOLET, GREY, WHITE
    };
    
    return all_colors;
}