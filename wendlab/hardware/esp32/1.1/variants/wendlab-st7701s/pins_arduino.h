#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303A
#define USB_PID 0x1001

#define USB_MANUFACTURER "WENDLab"
#define USB_PRODUCT      "ESP32-S3 ST7701S Single 55mm Display"
#define USB_SERIAL       ""  // Empty string for MAC address

static const uint8_t PCA_TFT_SCK = 0;
static const uint8_t PCA_TFT_CS = 1;
static const uint8_t PCA_TFT_RESET = 2;
static const uint8_t PCA_CPT_IRQ = 3;
static const uint8_t PCA_TFT_BACKLIGHT = 4;
static const uint8_t PCA_BUTTON_UP = 5;
static const uint8_t PCA_BUTTON_DOWN = 6;
static const uint8_t PCA_TFT_MOSI = 7;

static const uint8_t SDA = 8;
static const uint8_t SCL = 18;

static const uint8_t MOSI= 8;
static const uint8_t SCK = 18;
static const uint8_t MISO = -1;
static const uint8_t SS = -1;

static const uint8_t CAN_TX = 6;
static const uint8_t CAN_RX = 7;
static const uint8_t BACKLIGHT = 17;
static const uint8_t CAN_RS = 16;

static const uint8_t TFT_R1 = 11;
static const uint8_t TFT_R2 = 10;
static const uint8_t TFT_R3 = 9;
static const uint8_t TFT_R4 = 46;
static const uint8_t TFT_R5 = 3;
static const uint8_t TFT_G0 = 48;
static const uint8_t TFT_G1 = 47;
static const uint8_t TFT_G2 = 21;
static const uint8_t TFT_G3 = 14;
static const uint8_t TFT_G4 = 13;
static const uint8_t TFT_G5 = 12;
static const uint8_t TFT_B1 = 40;
static const uint8_t TFT_B2 = 39;
static const uint8_t TFT_B3 = 38;
static const uint8_t TFT_B4 = 0;
static const uint8_t TFT_B5 = 45;
static const uint8_t TFT_PCLK = 1;
static const uint8_t TFT_DE = 2;
static const uint8_t TFT_HSYNC = 41;
static const uint8_t TFT_VSYNC = 42;

#endif /* Pins_Arduino_h */
