
//Base address: 0x40021000

struct rcc {
  volatile uint32_t CR;          /* 0x00  Clock control                          */
  volatile uint32_t ICSCR;       /* 0x04  Internal clock source calibration      */
  volatile uint32_t CFGR;        /* 0x08  Clock configuration                    */
  volatile uint32_t RESERVED0;   /* 0x0C  Reserved                               */
  volatile uint32_t CIER;        /* 0x10  Clock interrupt enable                 */
  volatile uint32_t CIFR;        /* 0x14  Clock interrupt flag                   */
  volatile uint32_t CICR;        /* 0x18  Clock interrupt clear                  */
  volatile uint32_t IOPRSTR;     /* 0x1C  I/O port reset                         */
  volatile uint32_t AHBRSTR;     /* 0x20  AHB peripheral reset                   */
  volatile uint32_t APBRSTR1;    /* 0x24  APB peripheral reset 1                 */
  volatile uint32_t APBRSTR2;    /* 0x28  APB peripheral reset 2                 */
  volatile uint32_t RESERVED1;   /* 0x2C  Reserved                               */
  volatile uint32_t IOPENR;      /* 0x30  I/O port clock enable                  */
  volatile uint32_t AHBENR;      /* 0x34  AHB peripheral clock enable            */
  volatile uint32_t APBENR1;     /* 0x38  APB peripheral clock enable 1          */
  volatile uint32_t APBENR2;     /* 0x3C  APB peripheral clock enable 2          */
  volatile uint32_t IOPSMENR;    /* 0x40  I/O port clock enable in Sleep mode    */
  volatile uint32_t AHBSMENR;    /* 0x44  AHB peripheral clock enable Sleep/Stop */
  volatile uint32_t APBSMENR1;   /* 0x48  APB peripheral clock enable Sleep 1    */
  volatile uint32_t APBSMENR2;   /* 0x4C  APB peripheral clock enable Sleep 2    */
  volatile uint32_t CCIPR;       /* 0x50  Peripherals independent clock config   */
  volatile uint32_t RESERVED2;   /* 0x54  Reserved                               */
  volatile uint32_t CSR1;        /* 0x58  Control/status 1 (RTC domain / LSE)    */
  volatile uint32_t CSR2;        /* 0x5C  Control/status 2 (reset flags)         */
};

#define RCC  ((struct rcc *) 0x40021000)

struct gpio {
   volatile uint32_t MODER, OTYPER, OSPEEDR, PUPDR, IDR, ODR, BSRR, LCKR, AFRL, AFRH, BRR;
};

