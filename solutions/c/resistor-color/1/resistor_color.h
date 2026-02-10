#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

// 定义颜色枚举，顺序千万不能错，因为它们自动对应 0-9
typedef enum {
    BLACK,  // 0
    BROWN,  // 1
    RED,    // 2
    ORANGE, // 3
    YELLOW, // 4
    GREEN,  // 5
    BLUE,   // 6
    VIOLET, // 7
    GREY,   // 8
    WHITE   // 9
} resistor_band_t;

// 声明函数
resistor_band_t color_code(resistor_band_t color);
const resistor_band_t *colors(void);

#endif