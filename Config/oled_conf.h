#ifndef CONFIG_OLED_CONF_H_
#define CONFIG_OLED_CONF_H_

//#define OLED_I2C
//#define OLED_HANDLE hi2c2
//#define OLED_ADDRESS (0x3C << 1)

#define OLED_SPI
#define OLED_HANDLE hspi2 //10MHz max
#define OLED_CS_PORT CSD_GPIO_Port
#define OLED_CS_PIN CSD_Pin
#define OLED_DC_PORT DC_GPIO_Port
#define OLED_DC_PIN DC_Pin
//#define OLED_RES_PORT RES_GPIO_Port
//#define OLED_RES_PIN RES_Pin

#define OLED_WIDTH 128
#define OLED_HEIGHT 64
#define OLED_BUFFER_SIZE OLED_WIDTH * OLED_HEIGHT / 8

#define OLED_X_OFFSET 0
#define OLED_X_OFFSET_LOWER (OLED_X_OFFSET & 0x0F)
#define OLED_X_OFFSET_UPPER ((OLED_X_OFFSET >> 4) & 0x07)

//#define OLED_INVERT_COLOR
//#define OLED_MIRROR_VERTICAL
//#define OLED_MIRROR_HORIZONTAL

#endif