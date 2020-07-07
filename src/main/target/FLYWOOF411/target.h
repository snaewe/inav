/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once


#define TARGET_BOARD_IDENTIFIER "FLYWOOF411"
#define USBD_PRODUCT_STRING  "FlywooF411"

#define LED0                    PC13

#define BEEPER                  PC14
#define BEEPER_INVERTED


// *************** SPI **********************
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN   	PA6
#define SPI1_MOSI_PIN   	PA7

#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN            PB13
#define SPI3_MISO_PIN  		PB14
#define SPI3_MOSI_PIN  		PB15


// *************** SPI Gyro & ACC **********************

#define USE_IMU_MPU6000
#define MPU6000_CS_PIN          PA4
#define MPU6000_SPI_BUS         BUS_SPI1
#define IMU_MPU6000_ALIGN       CW180_DEG

#define USE_IMU_ICM20689
#define ICM20689_CS_PIN         PA4
#define ICM20689_SPI_BUS        BUS_SPI1
#define IMU_ICM20689_ALIGN      CW180_DEG

#define USE_EXTI
#define GYRO_INT_EXTI           PB3
#define USE_MPU_DATA_READY_SIGNAL

// *************** Baro *****************************

#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9

#define USE_BARO
#define BARO_I2C_BUS		BUS_I2C1
#define USE_BARO_BMP280
#define USE_BARO_MS5611

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_IST8310
#define USE_MAG_IST8308
#define USE_MAG_MAG3110
#define USE_MAG_LIS3MDL

// *************** SPI OSD *****************************
#define USE_OSD
#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI3
#define MAX7456_CS_PIN          PB12

// *************** SPI FLASH **************************
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define M25P16_CS_PIN           PB2
#define M25P16_SPI_BUS          BUS_SPI3
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

// *************** UART *****************************
//#define USE_UART_INVERTER

#define USE_VCP

#define USE_UART1
#define UART1_TX_PIN            PB6
#define UART1_RX_PIN            PB7

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

// #define INVERTER_PIN_UART2      PC14
//#define INVERTER_PIN_UART2_RX   PC14 // PC14 used as inverter select GPIO

#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_TX_PIN      PA2 // Workaround for softserial not initializing with only RX
#define SOFTSERIAL_1_RX_PIN      PA2 // Backdoor timer on UART2_TX, used for ESC telemetry

#define SERIAL_PORT_COUNT       4 //VCP, USART1, USART2, SOFTSERIAL1

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART2

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE                         ADC1
#define ADC_CHANNEL_1_PIN               PA1
#define ADC_CHANNEL_2_PIN               PA0
#define ADC_CHANNEL_3_PIN               PB1

#define CURRENT_METER_ADC_CHANNEL        ADC_CHN_1
#define VBAT_ADC_CHANNEL                 ADC_CHN_2
#define RSSI_ADC_CHANNEL                   ADC_CHN_3

// *************** LED2812 ************************
#define USE_LED_STRIP
#define WS2811_PIN                      PB11
#define WS2811_DMA_HANDLER_IDENTIFER    DMA1_ST6_HANDLER
#define WS2811_DMA_STREAM               DMA1_Stream6
#define WS2811_DMA_CHANNEL              DMA_Channel_6

// ***************  OTHERS *************************
#define DEFAULT_FEATURES        (FEATURE_OSD | FEATURE_VBAT)

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD        (BIT(2))

#define MAX_PWM_OUTPUT_PORTS       4


