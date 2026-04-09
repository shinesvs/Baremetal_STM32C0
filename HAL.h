#ifndef HAL_H
#define HAL_H

#include <stdint.h>
#include <stdbool.h>

/* -----------------------------------------------------------------------
 * RCC (Reset & Clock Control)
 * Base address: 0x40021000
 * ----------------------------------------------------------------------- */
struct rcc {
    volatile uint32_t CR;           /* 0x00  Clock control                          */
    volatile uint32_t ICSCR;        /* 0x04  Internal clock source calibration      */
    volatile uint32_t CFGR;         /* 0x08  Clock configuration                    */
    volatile uint32_t RESERVED0;    /* 0x0C  Reserved                               */
    volatile uint32_t CIER;         /* 0x10  Clock interrupt enable                 */
    volatile uint32_t CIFR;         /* 0x14  Clock interrupt flag                   */
    volatile uint32_t CICR;         /* 0x18  Clock interrupt clear                  */
    volatile uint32_t IOPRSTR;      /* 0x1C  I/O port reset                         */
    volatile uint32_t AHBRSTR;      /* 0x20  AHB peripheral reset                   */
    volatile uint32_t APBRSTR1;     /* 0x24  APB peripheral reset 1                 */
    volatile uint32_t APBRSTR2;     /* 0x28  APB peripheral reset 2                 */
    volatile uint32_t RESERVED1;    /* 0x2C  Reserved                               */
    volatile uint32_t RESERVED2;    /* 0x30  Reserved                               */
    volatile uint32_t IOPENR;       /* 0x34  I/O port clock enable                  */
    volatile uint32_t AHBENR;       /* 0x38  AHB peripheral clock enable            */
    volatile uint32_t APBENR1;      /* 0x3C  APB peripheral clock enable 1          */
    volatile uint32_t APBENR2;      /* 0x40  APB peripheral clock enable 2          */
    volatile uint32_t IOPSMENR;     /* 0x44  I/O port clock enable in Sleep mode    */
    volatile uint32_t AHBSMENR;     /* 0x48  AHB peripheral clock enable Sleep/Stop */
    volatile uint32_t APBSMENR1;    /* 0x4C  APB peripheral clock enable Sleep 1    */
    volatile uint32_t APBSMENR2;    /* 0x50  APB peripheral clock enable Sleep 2    */
    volatile uint32_t CCIPR;        /* 0x54  Peripherals independent clock config   */
    volatile uint32_t RESERVED3;    /* 0x58  Reserved                               */
    volatile uint32_t CSR1;         /* 0x5C  Control/status 1 (RTC domain / LSE)    */
    volatile uint32_t CSR2;         /* 0x60  Control/status 2 (reset flags)         */
};

#define RCC ((struct rcc *) 0x40021000)

/* IOPENR bit positions — one bit per GPIO bank 
#define RCC_IOPENR_GPIOAEN  (1U << 0)
#define RCC_IOPENR_GPIOBEN  (1U << 1)
#define RCC_IOPENR_GPIOCEN  (1U << 2)
#define RCC_IOPENR_GPIODEN  (1U << 3)
#define RCC_IOPENR_GPIOFEN  (1U << 5) */

/* -----------------------------------------------------------------------
 * GPIO
 * Base address: 0x50000000, each bank is +0x400
 * ----------------------------------------------------------------------- */
struct gpio {
    volatile uint32_t MODER;    /* 0x00  Mode register             */
    volatile uint32_t OTYPER;   /* 0x04  Output type register      */
    volatile uint32_t OSPEEDR;  /* 0x08  Output speed register     */
    volatile uint32_t PUPDR;    /* 0x0C  Pull-up/pull-down         */
    volatile uint32_t IDR;      /* 0x10  Input data register       */
    volatile uint32_t ODR;      /* 0x14  Output data register      */
    volatile uint32_t BSRR;     /* 0x18  Bit set/reset register    */
    volatile uint32_t LCKR;     /* 0x1C  Configuration lock        */
    volatile uint32_t AFRL;     /* 0x20  Alternate function low    */
    volatile uint32_t AFRH;     /* 0x24  Alternate function high   */
    volatile uint32_t BRR;      /* 0x28  Bit reset register        */
};

/* GPIO bank accessor — bank 0=A, 1=B, 2=C ... */
#define GPIO(bank)  ((struct gpio *) (0x50000000 + 0x400 * (bank)))

/* Pack bank + pin into a single uint16_t for passing around */
#define PIN(bank, num)   ((((bank) - 'A') << 8) | (num))
#define PINNO(pin)       ((pin) & 255)
#define PINBANK(pin)     ((pin) >> 8)

/* GPIO MODER values (2 bits per pin) */
#define GPIO_MODE_INPUT   0x0U
#define GPIO_MODE_OUTPUT  0x1U
#define GPIO_MODE_AF      0x2U
#define GPIO_MODE_ANALOG  0x3U

#endif HAL_H

