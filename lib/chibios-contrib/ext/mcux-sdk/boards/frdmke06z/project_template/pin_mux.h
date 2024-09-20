/*
 * Copyright 2018 NXP.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/*! @name PORTG7 (number 50), D4[3]/PTG7_BLUE
  @{ */
#define BOARD_INITLEDSPINS_LED_BLUE_GPIO GPIOB            /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITLEDSPINS_LED_BLUE_GPIO_PORT kGPIO_PORTG /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITLEDSPINS_LED_BLUE_PORT PORTG            /*!<@brief PORT device name: PORTG */
#define BOARD_INITLEDSPINS_LED_BLUE_PIN 7U                /*!<@brief PORTG pin index: 7 */
                                                          /* @} */

/*! @name PORTG6 (number 51), D4[4]/PTG6_GREEN
  @{ */
#define BOARD_INITLEDSPINS_LED_GREEN_GPIO GPIOB            /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITLEDSPINS_LED_GREEN_GPIO_PORT kGPIO_PORTG /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITLEDSPINS_LED_GREEN_PORT PORTG            /*!<@brief PORT device name: PORTG */
#define BOARD_INITLEDSPINS_LED_GREEN_PIN 6U                /*!<@brief PORTG pin index: 6 */
                                                           /* @} */

/*! @name PORTG5 (number 52), D4[1]/PTG5_RED
  @{ */
#define BOARD_INITLEDSPINS_LED_RED_GPIO GPIOB            /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITLEDSPINS_LED_RED_GPIO_PORT kGPIO_PORTG /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITLEDSPINS_LED_RED_PORT PORTG            /*!<@brief PORT device name: PORTG */
#define BOARD_INITLEDSPINS_LED_RED_PIN 5U                /*!<@brief PORTG pin index: 5 */
                                                         /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDsPins(void);

/*! @name PORTC6 (number 64), J1[3]/PTC6_RXD1/UART1_RX_TGTMCU
  @{ */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PORT PORTC /*!<@brief PORT device name: PORTC */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PIN 6U     /*!<@brief PORTC pin index: 6 */
                                                          /* @} */

/*! @name PORTC7 (number 63), J1[1]/PTC7_TXD1/UART1_TX_TGTMCU
  @{ */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PORT PORTC /*!<@brief PORT device name: PORTC */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PIN 7U     /*!<@brief PORTC pin index: 7 */
                                                          /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void);

/*! @name PORTA3 (number 59), J2[20]/PTA3_ACCEL_SCL
  @{ */
#define BOARD_INITACCELPINS_ACCEL_SCL_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_INITACCELPINS_ACCEL_SCL_PIN 3U     /*!<@brief PORTA pin index: 3 */
                                                 /* @} */

/*! @name PORTA2 (number 60), J2[18]/PTA2_ACCEL_SDA
  @{ */
#define BOARD_INITACCELPINS_ACCEL_SDA_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_INITACCELPINS_ACCEL_SDA_PIN 2U     /*!<@brief PORTA pin index: 2 */
                                                 /* @} */

/*! @name PORTD4 (number 56), PTD4_ACCEL_INT1
  @{ */
#define BOARD_INITACCELPINS_ACCEL_INT1_GPIO GPIOA            /*!<@brief GPIO device name: GPIOA */
#define BOARD_INITACCELPINS_ACCEL_INT1_GPIO_PORT kGPIO_PORTD /*!<@brief PORTA GPIO port: PORTA */
#define BOARD_INITACCELPINS_ACCEL_INT1_PORT PORTD            /*!<@brief PORT device name: PORTD */
#define BOARD_INITACCELPINS_ACCEL_INT1_PIN 4U                /*!<@brief PORTD pin index: 4 */
                                                             /* @} */

/*! @name PORTD3 (number 57), PTD3_ACCEL_INT2
  @{ */
#define BOARD_INITACCELPINS_ACCEL_INT2_GPIO GPIOA            /*!<@brief GPIO device name: GPIOA */
#define BOARD_INITACCELPINS_ACCEL_INT2_GPIO_PORT kGPIO_PORTD /*!<@brief PORTA GPIO port: PORTA */
#define BOARD_INITACCELPINS_ACCEL_INT2_PORT PORTD            /*!<@brief PORT device name: PORTD */
#define BOARD_INITACCELPINS_ACCEL_INT2_PIN 3U                /*!<@brief PORTD pin index: 3 */
                                                             /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitACCELPins(void);

/*! @name PORTB7 (number 13), EXTAL
  @{ */
#define BOARD_INITOSCPINS_EXTAL_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITOSCPINS_EXTAL_PIN 7U     /*!<@brief PORTB pin index: 7 */
                                           /* @} */

/*! @name PORTB6 (number 14), XTAL
  @{ */
#define BOARD_INITOSCPINS_XTAL_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITOSCPINS_XTAL_PIN 6U     /*!<@brief PORTB pin index: 6 */
                                          /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitOSCPins(void);

/*! @name PORTE7 (number 6), J5[5]/U7[1]/PTE7_CONN/CAN_TX
  @{ */
#define BOARD_INITCANPINS_CAN_TX_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_INITCANPINS_CAN_TX_PIN 7U     /*!<@brief PORTE pin index: 7 */
                                            /* @} */

/*! @name PORTH2 (number 7), J5[4]/U7[4]/PTH2_CONN/CAN_RX
  @{ */
#define BOARD_INITCANPINS_CAN_RX_PORT PORTH /*!<@brief PORT device name: PORTH */
#define BOARD_INITCANPINS_CAN_RX_PIN 2U     /*!<@brief PORTH pin index: 2 */
                                            /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitCANPins(void);

/*! @name PORTB1 (number 41), J1[4]/PTB1_IRTX
  @{ */
#define BOARD_INITINFRAREDPINS_IRTX_GPIO GPIOA            /*!<@brief GPIO device name: GPIOA */
#define BOARD_INITINFRAREDPINS_IRTX_GPIO_PORT kGPIO_PORTB /*!<@brief PORTA GPIO port: PORTA */
#define BOARD_INITINFRAREDPINS_IRTX_PORT PORTB            /*!<@brief PORT device name: PORTB */
#define BOARD_INITINFRAREDPINS_IRTX_PIN 1U                /*!<@brief PORTB pin index: 1 */
                                                          /* @} */

/*! @name PORTA1 (number 61), J1[10]/PTA1_D4_T1/PTA1_IRRX
  @{ */
#define BOARD_INITINFRAREDPINS_IRRX_GPIO GPIOA            /*!<@brief GPIO device name: GPIOA */
#define BOARD_INITINFRAREDPINS_IRRX_GPIO_PORT kGPIO_PORTA /*!<@brief PORTA GPIO port: PORTA */
#define BOARD_INITINFRAREDPINS_IRRX_PORT PORTA            /*!<@brief PORT device name: PORTA */
#define BOARD_INITINFRAREDPINS_IRRX_PIN 1U                /*!<@brief PORTA pin index: 1 */
                                                          /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitINFRAREDPins(void);

/*! @name PORTF4 (number 38), PTF4_THER
  @{ */
#define BOARD_INITTHERPINS_THER_A_PORT PORTF /*!<@brief PORT device name: PORTF */
#define BOARD_INITTHERPINS_THER_A_PIN 4U     /*!<@brief PORTF pin index: 4 */
                                             /* @} */

/*! @name PORTF5 (number 37), PTF5_THER
  @{ */
#define BOARD_INITTHERPINS_THER_B_PORT PORTF /*!<@brief PORT device name: PORTF */
#define BOARD_INITTHERPINS_THER_B_PIN 5U     /*!<@brief PORTF pin index: 5 */
                                             /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitTHERPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
