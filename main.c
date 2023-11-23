#include <stdint.h>
extern int i2c_read(uint8_t bus_address, uint8_t register_address,
                    uint8_t *buffer, uint16_t length);
extern int i2c_write(uint8_t bus_address, uint8_t register_address,
                     uint8_t *data, uint16_t length);

#define SDO_SA1_PIN_GROUNDED 1

// i2c (SAD) Slave ADdress can change depending on pin configuration. Section 5.1.1 I2C Operation
#ifdef SDO_SA1_PIN_GROUNDED
// 0b0011100
#define I2C_BUS_ADDRESS 0x1C
#else
// 0b0011110
#define I2C_BUS_ADDRESS 0x1E
#endif

// Registers Page 24: Register description
#define REG_WHO_AM_I /*---*/ 0x0F  // Table 17, Page 24
#define REG_CTRL_REG1 /*--*/ 0x20  // Table 18, Page 24
#define REG_CTRL_REG2 /*--*/ 0x21  // Table 23, Page 25
#define REG_CTRL_REG3 /*--*/ 0x22  // Table 26, Page 26
#define REG_CTRL_REG4 /*--*/ 0x23  // Table 29, Page 26
#define REG_CTRL_REG5 /*--*/ 0x27  // TAble 32. Page 27
#define REG_STATUS /*-----*/ 0x27  // Table 34. Page 28
#define REG_OUT_X_L /*----*/ 0x28  // Section 7.8 Page 28 // Low
#define REG_OUT_X_H /*----*/ 0x29  // Section 7.8 Page 28 // High
#define REG_OUT_Y_L /*----*/ 0x2A  // Section 7.9 Page 28 // Low
#define REG_OUT_Y_H /*----*/ 0x2B  // Section 7.9 Page 28 // High
#define REG_OUT_Z_L /*----*/ 0x2C  // Section 7.10 Page 28 // Low
#define REG_OUT_Z_H /*----*/ 0x2D  // Section 7.10 Page 28 // High
#define REG_TEMP_OUT_L /*-*/ 0x2E  // Section 7.11 Page 28 // Low
#define REG_TEMP_OUT_H /*-*/ 0x2F  // Section 7.11 Page 28 // High

#define REG_INT_CFG /*---*/ 0x30  // Table 36, Page 29
#define REG_INT_SRC /*---*/ 0x31  // Table 38, Page 29
#define REG_INT_THS_L /*-*/ 0x32  // Table 40, Page 30 // Low
#define REG_INT_THS_H /*-*/ 0x33  // Table 41, Page 30 // High

// Table 22. Output data rate configuration
#define DATARATE_0_625_HZ /*-*/ 0b0000  //  0.625 Hz
#define DATARATE_1_25_HZ /*--*/ 0b0010  //  1.25 Hz
#define DATARATE_2_5_HZ /*---*/ 0b0100  //  2.5 Hz
#define DATARATE_5_HZ /*-----*/ 0b0110  //  5 Hz
#define DATARATE_10_HZ /*----*/ 0b1000  //  10 Hz
#define DATARATE_20_HZ /*----*/ 0b1010  //  20 Hz
#define DATARATE_40_HZ /*----*/ 0b1100  //  40 Hz
#define DATARATE_80_HZ /*----*/ 0b1110  //  80 Hz

void set_data_rate(uint8_t dr) {
  // set datarate
}

uint8_t get_data_rate() {
  //
}

void get_full_scale_config() {
  //
}

void read_data_from_axis() {
  //
}
void init_i2c() {}
int main() {
  init_i2c();
  get_full_scale_config();
  get_data_rate();
  set_data_rate(DATARATE_10_HZ);
  read_data_from_axis();
}