typedef struct
{
  volatile uint32_t CR;             /*!< RCC Clock Sources Control Register,                                     Address offset: 0x00 */
  volatile uint32_t ICSCR;          /*!< RCC Internal Clock Sources Calibration Register,                        Address offset: 0x04 */
  volatile uint32_t CFGR;           /*!< RCC Regulated Domain Clocks Configuration Register,                     Address offset: 0x08 */
  volatile uint32_t RESERVED0[3];   /*!< Reserved,                                                               Address offset: 0x0C -- 0x14 */
  volatile uint32_t CIER;           /*!< RCC Clock Interrupt Enable Register,                                    Address offset: 0x18 */
  volatile uint32_t CIFR;           /*!< RCC Clock Interrupt Flag Register,                                      Address offset: 0x1C */
  volatile uint32_t CICR;           /*!< RCC Clock Interrupt Clear Register,                                     Address offset: 0x20 */
  volatile uint32_t IOPRSTR;        /*!< RCC IO port reset register,                                             Address offset: 0x24 */
  volatile uint32_t AHBRSTR;        /*!< RCC AHB peripherals reset register,                                     Address offset: 0x28 */
  volatile uint32_t APBRSTR1;       /*!< RCC APB peripherals reset register 1,                                   Address offset: 0x2C */
  volatile uint32_t APBRSTR2;       /*!< RCC APB peripherals reset register 2,                                   Address offset: 0x30 */
  volatile uint32_t IOPENR;         /*!< RCC IO port enable register,                                            Address offset: 0x34 */
  volatile uint32_t AHBENR;         /*!< RCC AHB peripherals clock enable register,                              Address offset: 0x38 */
  volatile uint32_t APBENR1;        /*!< RCC APB peripherals clock enable register1,                             Address offset: 0x3C */
  volatile uint32_t APBENR2;        /*!< RCC APB peripherals clock enable register2,                             Address offset: 0x40 */
  volatile uint32_t IOPSMENR;       /*!< RCC IO port clocks enable in sleep mode register,                       Address offset: 0x44 */
  volatile uint32_t AHBSMENR;       /*!< RCC AHB peripheral clocks enable in sleep mode register,                Address offset: 0x48 */
  volatile uint32_t APBSMENR1;      /*!< RCC APB peripheral clocks enable in sleep mode register1,               Address offset: 0x4C */
  volatile uint32_t APBSMENR2;      /*!< RCC APB peripheral clocks enable in sleep mode register2,               Address offset: 0x50 */
  volatile uint32_t CCIPR;          /*!< RCC Peripherals Independent Clocks Configuration Register,              Address offset: 0x54 */
  volatile uint32_t RESERVED2;      /*!< Reserved,                                                               Address offset: 0x58 */
  volatile uint32_t CSR1;           /*!< RCC Control and status Register 1,                                      Address offset: 0x5C */
  volatile uint32_t CSR2;           /*!< RCC Control and status Register 2,                                      Address offset: 0x60 */
} RCC_TypeDef;

#define RCC ((RCC_TypeDef *) 0x40021000)