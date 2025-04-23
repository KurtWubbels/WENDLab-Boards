#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303A
#define USB_PID 0x1001

#define USB_MANUFACTURER "WENDLab"
#define USB_PRODUCT      "ESP32-S3 ST77903 Display"
#define USB_SERIAL       ""  // Empty string for MAC address

static const uint8_t SDA = -1;
static const uint8_t SCL = 40;

static const uint8_t MOSI = -1;
static const uint8_t SCK = 40;
static const uint8_t MISO = -1;
static const uint8_t CS = 39;
static const uint8_t SS = -1;

static const uint8_t TFT_MISO = 41; 	// TFT Input
static const uint8_t TFT_MOSI = 40; 	// TFT Output
static const uint8_t TFT_SCLK = 39; 	// TFT Clock
static const uint8_t TFT_DC  = -1; 	// Data Command control pin
static const uint8_t TFT_RST = 16; 	// Reset pin (could connect to RST pin)


static const uint8_t CAN_TX = 13;
static const uint8_t CAN_RX = 14;
static const uint8_t BACKLIGHT = 18;
static const uint8_t CAN_RS = 38;

#endif /* Pins_Arduino_h */
