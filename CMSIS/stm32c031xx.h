#include "bitfield.h"
#include <stdint.h>

typedef struct
{
  __IO uint32_t CR;             /*!< RCC Clock Sources Control Register,                                     Address offset: 0x00 */
  __IO uint32_t ICSCR;          /*!< RCC Internal Clock Sources Calibration Register,                        Address offset: 0x04 */
  __IO uint32_t CFGR;           /*!< RCC Regulated Domain Clocks Configuration Register,                     Address offset: 0x08 */
       uint32_t RESERVED0[3];   /*!< Reserved,                                                               Address offset: 0x0C -- 0x14 */
  __IO uint32_t CIER;           /*!< RCC Clock Interrupt Enable Register,                                    Address offset: 0x18 */
  __IO uint32_t CIFR;           /*!< RCC Clock Interrupt Flag Register,                                      Address offset: 0x1C */
  __IO uint32_t CICR;           /*!< RCC Clock Interrupt Clear Register,                                     Address offset: 0x20 */
  __IO uint32_t IOPRSTR;        /*!< RCC IO port reset register,                                             Address offset: 0x24 */
  __IO uint32_t AHBRSTR;        /*!< RCC AHB peripherals reset register,                                     Address offset: 0x28 */
  __IO uint32_t APBRSTR1;       /*!< RCC APB peripherals reset register 1,                                   Address offset: 0x2C */
  __IO uint32_t APBRSTR2;       /*!< RCC APB peripherals reset register 2,                                   Address offset: 0x30 */
  __IO uint32_t IOPENR;         /*!< RCC IO port enable register,                                            Address offset: 0x34 */
  __IO uint32_t AHBENR;         /*!< RCC AHB peripherals clock enable register,                              Address offset: 0x38 */
  __IO uint32_t APBENR1;        /*!< RCC APB peripherals clock enable register1,                             Address offset: 0x3C */
  __IO uint32_t APBENR2;        /*!< RCC APB peripherals clock enable register2,                             Address offset: 0x40 */
  __IO uint32_t IOPSMENR;       /*!< RCC IO port clocks enable in sleep mode register,                       Address offset: 0x44 */
  __IO uint32_t AHBSMENR;       /*!< RCC AHB peripheral clocks enable in sleep mode register,                Address offset: 0x48 */
  __IO uint32_t APBSMENR1;      /*!< RCC APB peripheral clocks enable in sleep mode register1,               Address offset: 0x4C */
  __IO uint32_t APBSMENR2;      /*!< RCC APB peripheral clocks enable in sleep mode register2,               Address offset: 0x50 */
  __IO uint32_t CCIPR;          /*!< RCC Peripherals Independent Clocks Configuration Register,              Address offset: 0x54 */
  __IO uint32_t RESERVED2;      /*!< Reserved,                                                               Address offset: 0x58 */
  __IO uint32_t CSR1;           /*!< RCC Control and status Register 1,                                      Address offset: 0x5C */
  __IO uint32_t CSR2;           /*!< RCC Control and status Register 2,                                      Address offset: 0x60 */
} RCC_TypeDef;



/*!< Peripheral memory map */
#define PERIPH_BASE           (0x40000000UL)
#define APBPERIPH_BASE        (PERIPH_BASE)
#define AHBPERIPH_BASE        (PERIPH_BASE + 0x00020000UL)


/*!< AHB peripherals */
#define RCC                 ((RCC_TypeDef *) RCC_BASE)
#define RCC_BASE            (AHBPERIPH_BASE + 0x00001000UL)


/********************  Bit definition for RCC_CR register  *****************/
#define RCC_CR_HSIKERDIV_Pos             (5U)
#define RCC_CR_HSIKERDIV_Msk             (0x7UL << RCC_CR_HSIKERDIV_Pos)       /*!< 0x000000E0 */
#define RCC_CR_HSIKERDIV                 RCC_CR_HSIKERDIV_Msk                  /*!< HSI48 clock division factor for HSI kernel clocks inputs */
#define RCC_CR_HSIKERDIV_0               (0x1UL << RCC_CR_HSIKERDIV_Pos)       /*!< 0x00000020 */
#define RCC_CR_HSIKERDIV_1               (0x2UL << RCC_CR_HSIKERDIV_Pos)       /*!< 0x00000040 */
#define RCC_CR_HSIKERDIV_2               (0x4UL << RCC_CR_HSIKERDIV_Pos)       /*!< 0x00000080 */
#define RCC_CR_HSION_Pos                 (8U)
#define RCC_CR_HSION_Msk                 (0x1UL << RCC_CR_HSION_Pos)           /*!< 0x00000100 */
#define RCC_CR_HSION                     RCC_CR_HSION_Msk                      /*!< Internal High Speed clock enable */
#define RCC_CR_HSIKERON_Pos              (9U)
#define RCC_CR_HSIKERON_Msk              (0x1UL << RCC_CR_HSIKERON_Pos)        /*!< 0x00000200 */
#define RCC_CR_HSIKERON                  RCC_CR_HSIKERON_Msk                   /*!< Internal High Speed clock enable for some IPs Kernel */
#define RCC_CR_HSIRDY_Pos                (10U)
#define RCC_CR_HSIRDY_Msk                (0x1UL << RCC_CR_HSIRDY_Pos)          /*!< 0x00000400 */
#define RCC_CR_HSIRDY                    RCC_CR_HSIRDY_Msk                     /*!< Internal High Speed clock ready flag */
#define RCC_CR_HSIDIV_Pos                (11U)
#define RCC_CR_HSIDIV_Msk                (0x7UL << RCC_CR_HSIDIV_Pos)          /*!< 0x00003800 */
#define RCC_CR_HSIDIV                    RCC_CR_HSIDIV_Msk                     /*!< HSIDIV[13:11] Internal High Speed clock division factor */
#define RCC_CR_HSIDIV_0                  (0x1UL << RCC_CR_HSIDIV_Pos)          /*!< 0x00000800 */
#define RCC_CR_HSIDIV_1                  (0x2UL << RCC_CR_HSIDIV_Pos)          /*!< 0x00001000 */
#define RCC_CR_HSIDIV_2                  (0x4UL << RCC_CR_HSIDIV_Pos)          /*!< 0x00002000 */
#define RCC_CR_HSEON_Pos                 (16U)
#define RCC_CR_HSEON_Msk                 (0x1UL << RCC_CR_HSEON_Pos)           /*!< 0x00010000 */
#define RCC_CR_HSEON                     RCC_CR_HSEON_Msk                      /*!< External High Speed clock enable */
#define RCC_CR_HSERDY_Pos                (17U)
#define RCC_CR_HSERDY_Msk                (0x1UL << RCC_CR_HSERDY_Pos)          /*!< 0x00020000 */
#define RCC_CR_HSERDY                    RCC_CR_HSERDY_Msk                     /*!< External High Speed clock ready */
#define RCC_CR_HSEBYP_Pos                (18U)
#define RCC_CR_HSEBYP_Msk                (0x1UL << RCC_CR_HSEBYP_Pos)          /*!< 0x00040000 */
#define RCC_CR_HSEBYP                    RCC_CR_HSEBYP_Msk                     /*!< External High Speed clock Bypass */
#define RCC_CR_CSSON_Pos                 (19U)
#define RCC_CR_CSSON_Msk                 (0x1UL << RCC_CR_CSSON_Pos)           /*!< 0x00080000 */
#define RCC_CR_CSSON                     RCC_CR_CSSON_Msk                      /*!< HSE Clock Security System enable */

/********************  Bit definition for RCC_ICSCR register  ***************/
/*!< HSICAL configuration */
#define RCC_ICSCR_HSICAL_Pos             (0U)
#define RCC_ICSCR_HSICAL_Msk             (0xFFUL << RCC_ICSCR_HSICAL_Pos)      /*!< 0x000000FF */
#define RCC_ICSCR_HSICAL                 RCC_ICSCR_HSICAL_Msk                  /*!< HSICAL[7:0] bits */
#define RCC_ICSCR_HSICAL_0               (0x01UL << RCC_ICSCR_HSICAL_Pos)      /*!< 0x00000001 */
#define RCC_ICSCR_HSICAL_1               (0x02UL << RCC_ICSCR_HSICAL_Pos)      /*!< 0x00000002 */
#define RCC_ICSCR_HSICAL_2               (0x04UL << RCC_ICSCR_HSICAL_Pos)      /*!< 0x00000004 */
#define RCC_ICSCR_HSICAL_3               (0x08UL << RCC_ICSCR_HSICAL_Pos)      /*!< 0x00000008 */
#define RCC_ICSCR_HSICAL_4               (0x10UL << RCC_ICSCR_HSICAL_Pos)      /*!< 0x00000010 */
#define RCC_ICSCR_HSICAL_5               (0x20UL << RCC_ICSCR_HSICAL_Pos)      /*!< 0x00000020 */
#define RCC_ICSCR_HSICAL_6               (0x40UL << RCC_ICSCR_HSICAL_Pos)      /*!< 0x00000040 */
#define RCC_ICSCR_HSICAL_7               (0x80UL << RCC_ICSCR_HSICAL_Pos)      /*!< 0x00000080 */

/*!< HSITRIM configuration */
#define RCC_ICSCR_HSITRIM_Pos            (8U)
#define RCC_ICSCR_HSITRIM_Msk            (0x7FUL << RCC_ICSCR_HSITRIM_Pos)     /*!< 0x00007F00 */
#define RCC_ICSCR_HSITRIM                RCC_ICSCR_HSITRIM_Msk                 /*!< HSITRIM[14:8] bits */
#define RCC_ICSCR_HSITRIM_0              (0x01UL << RCC_ICSCR_HSITRIM_Pos)     /*!< 0x00000100 */
#define RCC_ICSCR_HSITRIM_1              (0x02UL << RCC_ICSCR_HSITRIM_Pos)     /*!< 0x00000200 */
#define RCC_ICSCR_HSITRIM_2              (0x04UL << RCC_ICSCR_HSITRIM_Pos)     /*!< 0x00000400 */
#define RCC_ICSCR_HSITRIM_3              (0x08UL << RCC_ICSCR_HSITRIM_Pos)     /*!< 0x00000800 */
#define RCC_ICSCR_HSITRIM_4              (0x10UL << RCC_ICSCR_HSITRIM_Pos)     /*!< 0x00001000 */
#define RCC_ICSCR_HSITRIM_5              (0x20UL << RCC_ICSCR_HSITRIM_Pos)     /*!< 0x00002000 */
#define RCC_ICSCR_HSITRIM_6              (0x40UL << RCC_ICSCR_HSITRIM_Pos)     /*!< 0x00004000 */

/********************  Bit definition for RCC_CFGR register  ***************/
/*!< SW configuration */
#define RCC_CFGR_SW_Pos                (0U)
#define RCC_CFGR_SW_Msk                (0x7UL << RCC_CFGR_SW_Pos)              /*!< 0x00000007 */
#define RCC_CFGR_SW                    RCC_CFGR_SW_Msk                         /*!< SW[2:0] bits (System clock Switch) */
#define RCC_CFGR_SW_0                  (0x1UL << RCC_CFGR_SW_Pos)              /*!< 0x00000001 */
#define RCC_CFGR_SW_1                  (0x2UL << RCC_CFGR_SW_Pos)              /*!< 0x00000002 */
#define RCC_CFGR_SW_2                  (0x4UL << RCC_CFGR_SW_Pos)              /*!< 0x00000004 */

/*!< SWS configuration */
#define RCC_CFGR_SWS_Pos               (3U)
#define RCC_CFGR_SWS_Msk               (0x7UL << RCC_CFGR_SWS_Pos)             /*!< 0x00000038 */
#define RCC_CFGR_SWS                   RCC_CFGR_SWS_Msk                        /*!< SWS[2:0] bits (System Clock Switch Status) */
#define RCC_CFGR_SWS_0                 (0x1UL << RCC_CFGR_SWS_Pos)             /*!< 0x00000008 */
#define RCC_CFGR_SWS_1                 (0x2UL << RCC_CFGR_SWS_Pos)             /*!< 0x00000010 */
#define RCC_CFGR_SWS_2                 (0x4UL << RCC_CFGR_SWS_Pos)             /*!< 0x00000020 */

#define RCC_CFGR_SWS_HSI               (0UL)                                   /*!< HSI used as system clock */
#define RCC_CFGR_SWS_HSE               (0x00000008UL)                          /*!< HSE used as system clock */
#define RCC_CFGR_SWS_LSI               (0x00000018UL)                          /*!< LSI used as system clock */
#define RCC_CFGR_SWS_LSE               (0x00000020UL)                          /*!< LSE used as system clock */

/*!< HPRE configuration */
#define RCC_CFGR_HPRE_Pos              (8U)
#define RCC_CFGR_HPRE_Msk              (0xFUL << RCC_CFGR_HPRE_Pos)            /*!< 0x00000F00 */
#define RCC_CFGR_HPRE                  RCC_CFGR_HPRE_Msk                       /*!< HPRE[3:0] bits (AHB prescaler) */
#define RCC_CFGR_HPRE_0                (0x1UL << RCC_CFGR_HPRE_Pos)            /*!< 0x00000100 */
#define RCC_CFGR_HPRE_1                (0x2UL << RCC_CFGR_HPRE_Pos)            /*!< 0x00000200 */
#define RCC_CFGR_HPRE_2                (0x4UL << RCC_CFGR_HPRE_Pos)            /*!< 0x00000400 */
#define RCC_CFGR_HPRE_3                (0x8UL << RCC_CFGR_HPRE_Pos)            /*!< 0x00000800 */

/*!< PPRE configuration */
#define RCC_CFGR_PPRE_Pos              (12U)
#define RCC_CFGR_PPRE_Msk              (0x7UL << RCC_CFGR_PPRE_Pos)            /*!< 0x00007000 */
#define RCC_CFGR_PPRE                  RCC_CFGR_PPRE_Msk                       /*!< PRE1[2:0] bits (APB prescaler) */
#define RCC_CFGR_PPRE_0                (0x1UL << RCC_CFGR_PPRE_Pos)            /*!< 0x00001000 */
#define RCC_CFGR_PPRE_1                (0x2UL << RCC_CFGR_PPRE_Pos)            /*!< 0x00002000 */
#define RCC_CFGR_PPRE_2                (0x4UL << RCC_CFGR_PPRE_Pos)            /*!< 0x00004000 */

/*!< MCO2SEL configuration */
#define RCC_CFGR_MCO2SEL_Pos           (16U)
#define RCC_CFGR_MCO2SEL_Msk           (0x7UL << RCC_CFGR_MCO2SEL_Pos)         /*!< 0x00070000 */
#define RCC_CFGR_MCO2SEL               RCC_CFGR_MCO2SEL_Msk                    /*!< MCO2SEL [2:0] bits (Clock output selection) */
#define RCC_CFGR_MCO2SEL_0             (0x1UL << RCC_CFGR_MCO2SEL_Pos)         /*!< 0x00010000 */
#define RCC_CFGR_MCO2SEL_1             (0x2UL << RCC_CFGR_MCO2SEL_Pos)         /*!< 0x00020000 */
#define RCC_CFGR_MCO2SEL_2             (0x4UL << RCC_CFGR_MCO2SEL_Pos)         /*!< 0x00040000 */

/*!< MCO2 Prescaler configuration */
#define RCC_CFGR_MCO2PRE_Pos           (20U)
#define RCC_CFGR_MCO2PRE_Msk           (0x7UL << RCC_CFGR_MCO2PRE_Pos)         /*!< 0x00700000 */
#define RCC_CFGR_MCO2PRE               RCC_CFGR_MCO2PRE_Msk                    /*!< MCO prescaler [2:0] */
#define RCC_CFGR_MCO2PRE_0             (0x1UL << RCC_CFGR_MCO2PRE_Pos)         /*!< 0x00100000 */
#define RCC_CFGR_MCO2PRE_1             (0x2UL << RCC_CFGR_MCO2PRE_Pos)         /*!< 0x00200000 */
#define RCC_CFGR_MCO2PRE_2             (0x4UL << RCC_CFGR_MCO2PRE_Pos)         /*!< 0x00400000 */

/*!< MCOSEL configuration */
#define RCC_CFGR_MCOSEL_Pos            (24U)
#define RCC_CFGR_MCOSEL_Msk            (0x7UL << RCC_CFGR_MCOSEL_Pos)          /*!< 0x07000000 */
#define RCC_CFGR_MCOSEL                RCC_CFGR_MCOSEL_Msk                     /*!< MCOSEL [2:0] bits (Clock output selection) */
#define RCC_CFGR_MCOSEL_0              (0x1UL << RCC_CFGR_MCOSEL_Pos)          /*!< 0x01000000 */
#define RCC_CFGR_MCOSEL_1              (0x2UL << RCC_CFGR_MCOSEL_Pos)          /*!< 0x02000000 */
#define RCC_CFGR_MCOSEL_2              (0x4UL << RCC_CFGR_MCOSEL_Pos)          /*!< 0x04000000 */

/*!< MCO Prescaler configuration */
#define RCC_CFGR_MCOPRE_Pos            (28U)
#define RCC_CFGR_MCOPRE_Msk            (0x7UL << RCC_CFGR_MCOPRE_Pos)          /*!< 0x70000000 */
#define RCC_CFGR_MCOPRE                RCC_CFGR_MCOPRE_Msk                     /*!< MCO prescaler [2:0] */
#define RCC_CFGR_MCOPRE_0              (0x1UL << RCC_CFGR_MCOPRE_Pos)          /*!< 0x10000000 */
#define RCC_CFGR_MCOPRE_1              (0x2UL << RCC_CFGR_MCOPRE_Pos)          /*!< 0x20000000 */
#define RCC_CFGR_MCOPRE_2              (0x4UL << RCC_CFGR_MCOPRE_Pos)          /*!< 0x40000000 */

/********************  Bit definition for RCC_CIER register  ******************/
#define RCC_CIER_LSIRDYIE_Pos            (0U)
#define RCC_CIER_LSIRDYIE_Msk            (0x1UL << RCC_CIER_LSIRDYIE_Pos)      /*!< 0x00000001 */
#define RCC_CIER_LSIRDYIE                RCC_CIER_LSIRDYIE_Msk
#define RCC_CIER_LSERDYIE_Pos            (1U)
#define RCC_CIER_LSERDYIE_Msk            (0x1UL << RCC_CIER_LSERDYIE_Pos)      /*!< 0x00000002 */
#define RCC_CIER_LSERDYIE                RCC_CIER_LSERDYIE_Msk
#define RCC_CIER_HSIRDYIE_Pos            (3U)
#define RCC_CIER_HSIRDYIE_Msk            (0x1UL << RCC_CIER_HSIRDYIE_Pos)      /*!< 0x00000008 */
#define RCC_CIER_HSIRDYIE                RCC_CIER_HSIRDYIE_Msk
#define RCC_CIER_HSERDYIE_Pos            (4U)
#define RCC_CIER_HSERDYIE_Msk            (0x1UL << RCC_CIER_HSERDYIE_Pos)      /*!< 0x00000010 */
#define RCC_CIER_HSERDYIE                RCC_CIER_HSERDYIE_Msk

/********************  Bit definition for RCC_CIFR register  ******************/
#define RCC_CIFR_LSIRDYF_Pos             (0U)
#define RCC_CIFR_LSIRDYF_Msk             (0x1UL << RCC_CIFR_LSIRDYF_Pos)       /*!< 0x00000001 */
#define RCC_CIFR_LSIRDYF                 RCC_CIFR_LSIRDYF_Msk
#define RCC_CIFR_LSERDYF_Pos             (1U)
#define RCC_CIFR_LSERDYF_Msk             (0x1UL << RCC_CIFR_LSERDYF_Pos)       /*!< 0x00000002 */
#define RCC_CIFR_LSERDYF                 RCC_CIFR_LSERDYF_Msk
#define RCC_CIFR_HSIRDYF_Pos             (3U)
#define RCC_CIFR_HSIRDYF_Msk             (0x1UL << RCC_CIFR_HSIRDYF_Pos)       /*!< 0x00000008 */
#define RCC_CIFR_HSIRDYF                 RCC_CIFR_HSIRDYF_Msk
#define RCC_CIFR_HSERDYF_Pos             (4U)
#define RCC_CIFR_HSERDYF_Msk             (0x1UL << RCC_CIFR_HSERDYF_Pos)       /*!< 0x00000010 */
#define RCC_CIFR_HSERDYF                 RCC_CIFR_HSERDYF_Msk
#define RCC_CIFR_CSSF_Pos                (8U)
#define RCC_CIFR_CSSF_Msk                (0x1UL << RCC_CIFR_CSSF_Pos)          /*!< 0x00000100 */
#define RCC_CIFR_CSSF                    RCC_CIFR_CSSF_Msk
#define RCC_CIFR_LSECSSF_Pos             (9U)
#define RCC_CIFR_LSECSSF_Msk             (0x1UL << RCC_CIFR_LSECSSF_Pos)       /*!< 0x00000200 */
#define RCC_CIFR_LSECSSF                 RCC_CIFR_LSECSSF_Msk

/********************  Bit definition for RCC_CICR register  ******************/
#define RCC_CICR_LSIRDYC_Pos             (0U)
#define RCC_CICR_LSIRDYC_Msk             (0x1UL << RCC_CICR_LSIRDYC_Pos)       /*!< 0x00000001 */
#define RCC_CICR_LSIRDYC                 RCC_CICR_LSIRDYC_Msk
#define RCC_CICR_LSERDYC_Pos             (1U)
#define RCC_CICR_LSERDYC_Msk             (0x1UL << RCC_CICR_LSERDYC_Pos)       /*!< 0x00000002 */
#define RCC_CICR_LSERDYC                 RCC_CICR_LSERDYC_Msk
#define RCC_CICR_HSIRDYC_Pos             (3U)
#define RCC_CICR_HSIRDYC_Msk             (0x1UL << RCC_CICR_HSIRDYC_Pos)       /*!< 0x00000008 */
#define RCC_CICR_HSIRDYC                 RCC_CICR_HSIRDYC_Msk
#define RCC_CICR_HSERDYC_Pos             (4U)
#define RCC_CICR_HSERDYC_Msk             (0x1UL << RCC_CICR_HSERDYC_Pos)       /*!< 0x00000010 */
#define RCC_CICR_HSERDYC                 RCC_CICR_HSERDYC_Msk
#define RCC_CICR_CSSC_Pos                (8U)
#define RCC_CICR_CSSC_Msk                (0x1UL << RCC_CICR_CSSC_Pos)          /*!< 0x00000100 */
#define RCC_CICR_CSSC                    RCC_CICR_CSSC_Msk
#define RCC_CICR_LSECSSC_Pos             (9U)
#define RCC_CICR_LSECSSC_Msk             (0x1UL << RCC_CICR_LSECSSC_Pos)       /*!< 0x00000200 */
#define RCC_CICR_LSECSSC                 RCC_CICR_LSECSSC_Msk

/********************  Bit definition for RCC_IOPRSTR register  ****************/
#define RCC_IOPRSTR_GPIOARST_Pos         (0U)
#define RCC_IOPRSTR_GPIOARST_Msk         (0x1UL << RCC_IOPRSTR_GPIOARST_Pos)   /*!< 0x00000001 */
#define RCC_IOPRSTR_GPIOARST             RCC_IOPRSTR_GPIOARST_Msk
#define RCC_IOPRSTR_GPIOBRST_Pos         (1U)
#define RCC_IOPRSTR_GPIOBRST_Msk         (0x1UL << RCC_IOPRSTR_GPIOBRST_Pos)   /*!< 0x00000002 */
#define RCC_IOPRSTR_GPIOBRST             RCC_IOPRSTR_GPIOBRST_Msk
#define RCC_IOPRSTR_GPIOCRST_Pos         (2U)
#define RCC_IOPRSTR_GPIOCRST_Msk         (0x1UL << RCC_IOPRSTR_GPIOCRST_Pos)   /*!< 0x00000004 */
#define RCC_IOPRSTR_GPIOCRST             RCC_IOPRSTR_GPIOCRST_Msk
#define RCC_IOPRSTR_GPIODRST_Pos         (3U)
#define RCC_IOPRSTR_GPIODRST_Msk         (0x1UL << RCC_IOPRSTR_GPIODRST_Pos)   /*!< 0x00000008 */
#define RCC_IOPRSTR_GPIODRST             RCC_IOPRSTR_GPIODRST_Msk
#define RCC_IOPRSTR_GPIOFRST_Pos         (5U)
#define RCC_IOPRSTR_GPIOFRST_Msk         (0x1UL << RCC_IOPRSTR_GPIOFRST_Pos)   /*!< 0x00000020 */
#define RCC_IOPRSTR_GPIOFRST             RCC_IOPRSTR_GPIOFRST_Msk

/********************  Bit definition for RCC_AHBRSTR register  ***************/
#define RCC_AHBRSTR_DMA1RST_Pos          (0U)
#define RCC_AHBRSTR_DMA1RST_Msk          (0x1UL << RCC_AHBRSTR_DMA1RST_Pos)    /*!< 0x00000001 */
#define RCC_AHBRSTR_DMA1RST              RCC_AHBRSTR_DMA1RST_Msk
#define RCC_AHBRSTR_FLASHRST_Pos         (8U)
#define RCC_AHBRSTR_FLASHRST_Msk         (0x1UL << RCC_AHBRSTR_FLASHRST_Pos)   /*!< 0x00000100 */
#define RCC_AHBRSTR_FLASHRST             RCC_AHBRSTR_FLASHRST_Msk
#define RCC_AHBRSTR_CRCRST_Pos           (12U)
#define RCC_AHBRSTR_CRCRST_Msk           (0x1UL << RCC_AHBRSTR_CRCRST_Pos)     /*!< 0x00001000 */
#define RCC_AHBRSTR_CRCRST               RCC_AHBRSTR_CRCRST_Msk

/********************  Bit definition for RCC_APBRSTR1 register  **************/
#define RCC_APBRSTR1_TIM3RST_Pos         (1U)
#define RCC_APBRSTR1_TIM3RST_Msk         (0x1UL << RCC_APBRSTR1_TIM3RST_Pos)   /*!< 0x00000002 */
#define RCC_APBRSTR1_TIM3RST             RCC_APBRSTR1_TIM3RST_Msk
#define RCC_APBRSTR1_USART2RST_Pos       (17U)
#define RCC_APBRSTR1_USART2RST_Msk       (0x1UL << RCC_APBRSTR1_USART2RST_Pos) /*!< 0x00010000 */
#define RCC_APBRSTR1_USART2RST           RCC_APBRSTR1_USART2RST_Msk
#define RCC_APBRSTR1_I2C1RST_Pos         (21U)
#define RCC_APBRSTR1_I2C1RST_Msk         (0x1UL << RCC_APBRSTR1_I2C1RST_Pos)    /*!< 0x00200000 */
#define RCC_APBRSTR1_I2C1RST             RCC_APBRSTR1_I2C1RST_Msk
#define RCC_APBRSTR1_DBGRST_Pos          (27U)
#define RCC_APBRSTR1_DBGRST_Msk          (0x1UL << RCC_APBRSTR1_DBGRST_Pos)     /*!< 0x08000000 */
#define RCC_APBRSTR1_DBGRST              RCC_APBRSTR1_DBGRST_Msk
#define RCC_APBRSTR1_PWRRST_Pos          (28U)
#define RCC_APBRSTR1_PWRRST_Msk          (0x1UL << RCC_APBRSTR1_PWRRST_Pos)     /*!< 0x10000000 */
#define RCC_APBRSTR1_PWRRST              RCC_APBRSTR1_PWRRST_Msk

/********************  Bit definition for RCC_APBRSTR2 register  **************/
#define RCC_APBRSTR2_SYSCFGRST_Pos       (0U)
#define RCC_APBRSTR2_SYSCFGRST_Msk       (0x1UL << RCC_APBRSTR2_SYSCFGRST_Pos)  /*!< 0x00000001 */
#define RCC_APBRSTR2_SYSCFGRST           RCC_APBRSTR2_SYSCFGRST_Msk
#define RCC_APBRSTR2_TIM1RST_Pos         (11U)
#define RCC_APBRSTR2_TIM1RST_Msk         (0x1UL << RCC_APBRSTR2_TIM1RST_Pos)    /*!< 0x00000800 */
#define RCC_APBRSTR2_TIM1RST             RCC_APBRSTR2_TIM1RST_Msk
#define RCC_APBRSTR2_SPI1RST_Pos         (12U)
#define RCC_APBRSTR2_SPI1RST_Msk         (0x1UL << RCC_APBRSTR2_SPI1RST_Pos)    /*!< 0x00001000 */
#define RCC_APBRSTR2_SPI1RST             RCC_APBRSTR2_SPI1RST_Msk
#define RCC_APBRSTR2_USART1RST_Pos       (14U)
#define RCC_APBRSTR2_USART1RST_Msk       (0x1UL << RCC_APBRSTR2_USART1RST_Pos)  /*!< 0x00004000 */
#define RCC_APBRSTR2_USART1RST           RCC_APBRSTR2_USART1RST_Msk
#define RCC_APBRSTR2_TIM14RST_Pos        (15U)
#define RCC_APBRSTR2_TIM14RST_Msk        (0x1UL << RCC_APBRSTR2_TIM14RST_Pos)   /*!< 0x00008000 */
#define RCC_APBRSTR2_TIM14RST            RCC_APBRSTR2_TIM14RST_Msk
#define RCC_APBRSTR2_TIM16RST_Pos        (17U)
#define RCC_APBRSTR2_TIM16RST_Msk        (0x1UL << RCC_APBRSTR2_TIM16RST_Pos)   /*!< 0x00020000 */
#define RCC_APBRSTR2_TIM16RST            RCC_APBRSTR2_TIM16RST_Msk
#define RCC_APBRSTR2_TIM17RST_Pos        (18U)
#define RCC_APBRSTR2_TIM17RST_Msk        (0x1UL << RCC_APBRSTR2_TIM17RST_Pos)   /*!< 0x00040000 */
#define RCC_APBRSTR2_TIM17RST            RCC_APBRSTR2_TIM17RST_Msk
#define RCC_APBRSTR2_ADCRST_Pos          (20U)
#define RCC_APBRSTR2_ADCRST_Msk          (0x1UL << RCC_APBRSTR2_ADCRST_Pos)     /*!< 0x00100000 */
#define RCC_APBRSTR2_ADCRST              RCC_APBRSTR2_ADCRST_Msk

/********************  Bit definition for RCC_IOPENR register  ****************/
#define RCC_IOPENR_GPIOAEN_Pos           (0U)
#define RCC_IOPENR_GPIOAEN_Msk           (0x1UL << RCC_IOPENR_GPIOAEN_Pos)      /*!< 0x00000001 */
#define RCC_IOPENR_GPIOAEN               RCC_IOPENR_GPIOAEN_Msk
#define RCC_IOPENR_GPIOBEN_Pos           (1U)
#define RCC_IOPENR_GPIOBEN_Msk           (0x1UL << RCC_IOPENR_GPIOBEN_Pos)      /*!< 0x00000002 */
#define RCC_IOPENR_GPIOBEN               RCC_IOPENR_GPIOBEN_Msk
#define RCC_IOPENR_GPIOCEN_Pos           (2U)
#define RCC_IOPENR_GPIOCEN_Msk           (0x1UL << RCC_IOPENR_GPIOCEN_Pos)      /*!< 0x00000004 */
#define RCC_IOPENR_GPIOCEN               RCC_IOPENR_GPIOCEN_Msk
#define RCC_IOPENR_GPIODEN_Pos           (3U)
#define RCC_IOPENR_GPIODEN_Msk           (0x1UL << RCC_IOPENR_GPIODEN_Pos)      /*!< 0x00000008 */
#define RCC_IOPENR_GPIODEN               RCC_IOPENR_GPIODEN_Msk
#define RCC_IOPENR_GPIOFEN_Pos           (5U)
#define RCC_IOPENR_GPIOFEN_Msk           (0x1UL << RCC_IOPENR_GPIOFEN_Pos)      /*!< 0x00000020 */
#define RCC_IOPENR_GPIOFEN               RCC_IOPENR_GPIOFEN_Msk

/********************  Bit definition for RCC_AHBENR register  ****************/
#define RCC_AHBENR_DMA1EN_Pos            (0U)
#define RCC_AHBENR_DMA1EN_Msk            (0x1UL << RCC_AHBENR_DMA1EN_Pos)       /*!< 0x00000001 */
#define RCC_AHBENR_DMA1EN                RCC_AHBENR_DMA1EN_Msk
#define RCC_AHBENR_FLASHEN_Pos           (8U)
#define RCC_AHBENR_FLASHEN_Msk           (0x1UL << RCC_AHBENR_FLASHEN_Pos)      /*!< 0x00000100 */
#define RCC_AHBENR_FLASHEN               RCC_AHBENR_FLASHEN_Msk
#define RCC_AHBENR_CRCEN_Pos             (12U)
#define RCC_AHBENR_CRCEN_Msk             (0x1UL << RCC_AHBENR_CRCEN_Pos)        /*!< 0x00001000 */
#define RCC_AHBENR_CRCEN                 RCC_AHBENR_CRCEN_Msk

/********************  Bit definition for RCC_APBENR1 register  ***************/
#define RCC_APBENR1_TIM3EN_Pos           (1U)
#define RCC_APBENR1_TIM3EN_Msk           (0x1UL << RCC_APBENR1_TIM3EN_Pos)      /*!< 0x00000002 */
#define RCC_APBENR1_TIM3EN               RCC_APBENR1_TIM3EN_Msk
#define RCC_APBENR1_RTCAPBEN_Pos         (10U)
#define RCC_APBENR1_RTCAPBEN_Msk         (0x1UL << RCC_APBENR1_RTCAPBEN_Pos)    /*!< 0x00000400 */
#define RCC_APBENR1_RTCAPBEN             RCC_APBENR1_RTCAPBEN_Msk
#define RCC_APBENR1_WWDGEN_Pos           (11U)
#define RCC_APBENR1_WWDGEN_Msk           (0x1UL << RCC_APBENR1_WWDGEN_Pos)      /*!< 0x00000800 */
#define RCC_APBENR1_WWDGEN               RCC_APBENR1_WWDGEN_Msk
#define RCC_APBENR1_USART2EN_Pos         (17U)
#define RCC_APBENR1_USART2EN_Msk         (0x1UL << RCC_APBENR1_USART2EN_Pos)    /*!< 0x00010000 */
#define RCC_APBENR1_USART2EN             RCC_APBENR1_USART2EN_Msk
#define RCC_APBENR1_I2C1EN_Pos           (21U)
#define RCC_APBENR1_I2C1EN_Msk           (0x1UL << RCC_APBENR1_I2C1EN_Pos)      /*!< 0x00200000 */
#define RCC_APBENR1_I2C1EN               RCC_APBENR1_I2C1EN_Msk
#define RCC_APBENR1_DBGEN_Pos            (27U)
#define RCC_APBENR1_DBGEN_Msk            (0x1UL << RCC_APBENR1_DBGEN_Pos)       /*!< 0x08000000 */
#define RCC_APBENR1_DBGEN                RCC_APBENR1_DBGEN_Msk
#define RCC_APBENR1_PWREN_Pos            (28U)
#define RCC_APBENR1_PWREN_Msk            (0x1UL << RCC_APBENR1_PWREN_Pos)       /*!< 0x10000000 */
#define RCC_APBENR1_PWREN                RCC_APBENR1_PWREN_Msk

/********************  Bit definition for RCC_APBENR2 register  **************/
#define RCC_APBENR2_SYSCFGEN_Pos         (0U)
#define RCC_APBENR2_SYSCFGEN_Msk         (0x1UL << RCC_APBENR2_SYSCFGEN_Pos)    /*!< 0x00000001 */
#define RCC_APBENR2_SYSCFGEN             RCC_APBENR2_SYSCFGEN_Msk
#define RCC_APBENR2_TIM1EN_Pos           (11U)
#define RCC_APBENR2_TIM1EN_Msk           (0x1UL << RCC_APBENR2_TIM1EN_Pos)      /*!< 0x00000800 */
#define RCC_APBENR2_TIM1EN               RCC_APBENR2_TIM1EN_Msk
#define RCC_APBENR2_SPI1EN_Pos           (12U)
#define RCC_APBENR2_SPI1EN_Msk           (0x1UL << RCC_APBENR2_SPI1EN_Pos)      /*!< 0x00001000 */
#define RCC_APBENR2_SPI1EN               RCC_APBENR2_SPI1EN_Msk
#define RCC_APBENR2_USART1EN_Pos         (14U)
#define RCC_APBENR2_USART1EN_Msk         (0x1UL << RCC_APBENR2_USART1EN_Pos)    /*!< 0x00004000 */
#define RCC_APBENR2_USART1EN             RCC_APBENR2_USART1EN_Msk
#define RCC_APBENR2_TIM14EN_Pos          (15U)
#define RCC_APBENR2_TIM14EN_Msk          (0x1UL << RCC_APBENR2_TIM14EN_Pos)     /*!< 0x00008000 */
#define RCC_APBENR2_TIM14EN              RCC_APBENR2_TIM14EN_Msk
#define RCC_APBENR2_TIM16EN_Pos          (17U)
#define RCC_APBENR2_TIM16EN_Msk          (0x1UL << RCC_APBENR2_TIM16EN_Pos)     /*!< 0x00020000 */
#define RCC_APBENR2_TIM16EN              RCC_APBENR2_TIM16EN_Msk
#define RCC_APBENR2_TIM17EN_Pos          (18U)
#define RCC_APBENR2_TIM17EN_Msk          (0x1UL << RCC_APBENR2_TIM17EN_Pos)     /*!< 0x00040000 */
#define RCC_APBENR2_TIM17EN              RCC_APBENR2_TIM17EN_Msk
#define RCC_APBENR2_ADCEN_Pos            (20U)
#define RCC_APBENR2_ADCEN_Msk            (0x1UL << RCC_APBENR2_ADCEN_Pos)       /*!< 0x00100000 */
#define RCC_APBENR2_ADCEN                RCC_APBENR2_ADCEN_Msk

/********************  Bit definition for RCC_IOPSMENR register  *************/
#define RCC_IOPSMENR_GPIOASMEN_Pos       (0U)
#define RCC_IOPSMENR_GPIOASMEN_Msk       (0x1UL << RCC_IOPSMENR_GPIOASMEN_Pos)  /*!< 0x00000001 */
#define RCC_IOPSMENR_GPIOASMEN           RCC_IOPSMENR_GPIOASMEN_Msk
#define RCC_IOPSMENR_GPIOBSMEN_Pos       (1U)
#define RCC_IOPSMENR_GPIOBSMEN_Msk       (0x1UL << RCC_IOPSMENR_GPIOBSMEN_Pos)  /*!< 0x00000002 */
#define RCC_IOPSMENR_GPIOBSMEN           RCC_IOPSMENR_GPIOBSMEN_Msk
#define RCC_IOPSMENR_GPIOCSMEN_Pos       (2U)
#define RCC_IOPSMENR_GPIOCSMEN_Msk       (0x1UL << RCC_IOPSMENR_GPIOCSMEN_Pos)  /*!< 0x00000004 */
#define RCC_IOPSMENR_GPIOCSMEN           RCC_IOPSMENR_GPIOCSMEN_Msk
#define RCC_IOPSMENR_GPIODSMEN_Pos       (3U)
#define RCC_IOPSMENR_GPIODSMEN_Msk       (0x1UL << RCC_IOPSMENR_GPIODSMEN_Pos)  /*!< 0x00000008 */
#define RCC_IOPSMENR_GPIODSMEN           RCC_IOPSMENR_GPIODSMEN_Msk
#define RCC_IOPSMENR_GPIOFSMEN_Pos       (5U)
#define RCC_IOPSMENR_GPIOFSMEN_Msk       (0x1UL << RCC_IOPSMENR_GPIOFSMEN_Pos)  /*!< 0x00000020 */
#define RCC_IOPSMENR_GPIOFSMEN           RCC_IOPSMENR_GPIOFSMEN_Msk

/********************  Bit definition for RCC_AHBSMENR register  *************/
#define RCC_AHBSMENR_DMA1SMEN_Pos        (0U)
#define RCC_AHBSMENR_DMA1SMEN_Msk        (0x1UL << RCC_AHBSMENR_DMA1SMEN_Pos)   /*!< 0x00000001 */
#define RCC_AHBSMENR_DMA1SMEN            RCC_AHBSMENR_DMA1SMEN_Msk
#define RCC_AHBSMENR_FLASHSMEN_Pos       (8U)
#define RCC_AHBSMENR_FLASHSMEN_Msk       (0x1UL << RCC_AHBSMENR_FLASHSMEN_Pos)  /*!< 0x00000100 */
#define RCC_AHBSMENR_FLASHSMEN           RCC_AHBSMENR_FLASHSMEN_Msk
#define RCC_AHBSMENR_SRAMSMEN_Pos        (9U)
#define RCC_AHBSMENR_SRAMSMEN_Msk        (0x1UL << RCC_AHBSMENR_SRAMSMEN_Pos)   /*!< 0x00000200 */
#define RCC_AHBSMENR_SRAMSMEN            RCC_AHBSMENR_SRAMSMEN_Msk
#define RCC_AHBSMENR_CRCSMEN_Pos         (12U)
#define RCC_AHBSMENR_CRCSMEN_Msk         (0x1UL << RCC_AHBSMENR_CRCSMEN_Pos)    /*!< 0x00001000 */
#define RCC_AHBSMENR_CRCSMEN             RCC_AHBSMENR_CRCSMEN_Msk

/********************  Bit definition for RCC_APBSMENR1 register  *************/
#define RCC_APBSMENR1_TIM3SMEN_Pos       (1U)
#define RCC_APBSMENR1_TIM3SMEN_Msk       (0x1UL << RCC_APBSMENR1_TIM3SMEN_Pos)  /*!< 0x00000002 */
#define RCC_APBSMENR1_TIM3SMEN           RCC_APBSMENR1_TIM3SMEN_Msk
#define RCC_APBSMENR1_RTCAPBSMEN_Pos     (10U)
#define RCC_APBSMENR1_RTCAPBSMEN_Msk     (0x1UL << RCC_APBSMENR1_RTCAPBSMEN_Pos) /*!< 0x00000400 */
#define RCC_APBSMENR1_RTCAPBSMEN         RCC_APBSMENR1_RTCAPBSMEN_Msk
#define RCC_APBSMENR1_WWDGSMEN_Pos       (11U)
#define RCC_APBSMENR1_WWDGSMEN_Msk       (0x1UL << RCC_APBSMENR1_WWDGSMEN_Pos)  /*!< 0x00000800 */
#define RCC_APBSMENR1_WWDGSMEN           RCC_APBSMENR1_WWDGSMEN_Msk
#define RCC_APBSMENR1_USART2SMEN_Pos     (17U)
#define RCC_APBSMENR1_USART2SMEN_Msk     (0x1UL << RCC_APBSMENR1_USART2SMEN_Pos) /*!< 0x00010000 */
#define RCC_APBSMENR1_USART2SMEN         RCC_APBSMENR1_USART2SMEN_Msk
#define RCC_APBSMENR1_I2C1SMEN_Pos       (21U)
#define RCC_APBSMENR1_I2C1SMEN_Msk       (0x1UL << RCC_APBSMENR1_I2C1SMEN_Pos)   /*!< 0x00200000 */
#define RCC_APBSMENR1_I2C1SMEN           RCC_APBSMENR1_I2C1SMEN_Msk
#define RCC_APBSMENR1_DBGSMEN_Pos        (27U)
#define RCC_APBSMENR1_DBGSMEN_Msk        (0x1UL << RCC_APBSMENR1_DBGSMEN_Pos)    /*!< 0x08000000 */
#define RCC_APBSMENR1_DBGSMEN            RCC_APBSMENR1_DBGSMEN_Msk
#define RCC_APBSMENR1_PWRSMEN_Pos        (28U)
#define RCC_APBSMENR1_PWRSMEN_Msk        (0x1UL << RCC_APBSMENR1_PWRSMEN_Pos)    /*!< 0x10000000 */
#define RCC_APBSMENR1_PWRSMEN            RCC_APBSMENR1_PWRSMEN_Msk

/********************  Bit definition for RCC_APBSMENR2 register  *************/
#define RCC_APBSMENR2_SYSCFGSMEN_Pos     (0U)
#define RCC_APBSMENR2_SYSCFGSMEN_Msk     (0x1UL << RCC_APBSMENR2_SYSCFGSMEN_Pos) /*!< 0x00000001 */
#define RCC_APBSMENR2_SYSCFGSMEN         RCC_APBSMENR2_SYSCFGSMEN_Msk
#define RCC_APBSMENR2_TIM1SMEN_Pos       (11U)
#define RCC_APBSMENR2_TIM1SMEN_Msk       (0x1UL << RCC_APBSMENR2_TIM1SMEN_Pos)  /*!< 0x00000800 */
#define RCC_APBSMENR2_TIM1SMEN           RCC_APBSMENR2_TIM1SMEN_Msk
#define RCC_APBSMENR2_SPI1SMEN_Pos       (12U)
#define RCC_APBSMENR2_SPI1SMEN_Msk       (0x1UL << RCC_APBSMENR2_SPI1SMEN_Pos)  /*!< 0x00001000 */
#define RCC_APBSMENR2_SPI1SMEN           RCC_APBSMENR2_SPI1SMEN_Msk
#define RCC_APBSMENR2_USART1SMEN_Pos     (14U)
#define RCC_APBSMENR2_USART1SMEN_Msk     (0x1UL << RCC_APBSMENR2_USART1SMEN_Pos) /*!< 0x00004000 */
#define RCC_APBSMENR2_USART1SMEN         RCC_APBSMENR2_USART1SMEN_Msk
#define RCC_APBSMENR2_TIM14SMEN_Pos      (15U)
#define RCC_APBSMENR2_TIM14SMEN_Msk      (0x1UL << RCC_APBSMENR2_TIM14SMEN_Pos) /*!< 0x00008000 */
#define RCC_APBSMENR2_TIM14SMEN          RCC_APBSMENR2_TIM14SMEN_Msk
#define RCC_APBSMENR2_TIM16SMEN_Pos      (17U)
#define RCC_APBSMENR2_TIM16SMEN_Msk      (0x1UL << RCC_APBSMENR2_TIM16SMEN_Pos) /*!< 0x00020000 */
#define RCC_APBSMENR2_TIM16SMEN          RCC_APBSMENR2_TIM16SMEN_Msk
#define RCC_APBSMENR2_TIM17SMEN_Pos      (18U)
#define RCC_APBSMENR2_TIM17SMEN_Msk      (0x1UL << RCC_APBSMENR2_TIM17SMEN_Pos) /*!< 0x00040000 */
#define RCC_APBSMENR2_TIM17SMEN          RCC_APBSMENR2_TIM17SMEN_Msk
#define RCC_APBSMENR2_ADCSMEN_Pos        (20U)
#define RCC_APBSMENR2_ADCSMEN_Msk        (0x1UL << RCC_APBSMENR2_ADCSMEN_Pos)   /*!< 0x00100000 */
#define RCC_APBSMENR2_ADCSMEN            RCC_APBSMENR2_ADCSMEN_Msk

/********************  Bit definition for RCC_CCIPR register  ******************/
#define RCC_CCIPR_USART1SEL_Pos          (0U)
#define RCC_CCIPR_USART1SEL_Msk          (0x3UL << RCC_CCIPR_USART1SEL_Pos)     /*!< 0x00000003 */
#define RCC_CCIPR_USART1SEL              RCC_CCIPR_USART1SEL_Msk
#define RCC_CCIPR_USART1SEL_0            (0x1UL << RCC_CCIPR_USART1SEL_Pos)     /*!< 0x00000001 */
#define RCC_CCIPR_USART1SEL_1            (0x2UL << RCC_CCIPR_USART1SEL_Pos)     /*!< 0x00000002 */
#define RCC_CCIPR_I2C1SEL_Pos            (12U)
#define RCC_CCIPR_I2C1SEL_Msk            (0x3UL << RCC_CCIPR_I2C1SEL_Pos)       /*!< 0x00003000 */
#define RCC_CCIPR_I2C1SEL                RCC_CCIPR_I2C1SEL_Msk
#define RCC_CCIPR_I2C1SEL_0              (0x1UL << RCC_CCIPR_I2C1SEL_Pos)       /*!< 0x00001000 */
#define RCC_CCIPR_I2C1SEL_1              (0x2UL << RCC_CCIPR_I2C1SEL_Pos)       /*!< 0x00002000 */
#define RCC_CCIPR_I2S1SEL_Pos            (14U)
#define RCC_CCIPR_I2S1SEL_Msk            (0x3UL << RCC_CCIPR_I2S1SEL_Pos)       /*!< 0x0000C000 */
#define RCC_CCIPR_I2S1SEL                RCC_CCIPR_I2S1SEL_Msk
#define RCC_CCIPR_I2S1SEL_0              (0x1UL << RCC_CCIPR_I2S1SEL_Pos)       /*!< 0x00004000 */
#define RCC_CCIPR_I2S1SEL_1              (0x2UL << RCC_CCIPR_I2S1SEL_Pos)       /*!< 0x00008000 */
#define RCC_CCIPR_ADCSEL_Pos             (30U)
#define RCC_CCIPR_ADCSEL_Msk             (0x3UL << RCC_CCIPR_ADCSEL_Pos)        /*!< 0xC0000000 */
#define RCC_CCIPR_ADCSEL                 RCC_CCIPR_ADCSEL_Msk
#define RCC_CCIPR_ADCSEL_0               (0x1UL << RCC_CCIPR_ADCSEL_Pos)        /*!< 0x40000000 */
#define RCC_CCIPR_ADCSEL_1               (0x2UL << RCC_CCIPR_ADCSEL_Pos)        /*!< 0x80000000 */

/********************  Bit definition for RCC_CSR1 register  ******************/
#define RCC_CSR1_LSEON_Pos               (0U)
#define RCC_CSR1_LSEON_Msk               (0x1UL << RCC_CSR1_LSEON_Pos)          /*!< 0x00000001 */
#define RCC_CSR1_LSEON                   RCC_CSR1_LSEON_Msk
#define RCC_CSR1_LSERDY_Pos              (1U)
#define RCC_CSR1_LSERDY_Msk              (0x1UL << RCC_CSR1_LSERDY_Pos)         /*!< 0x00000002 */
#define RCC_CSR1_LSERDY                  RCC_CSR1_LSERDY_Msk
#define RCC_CSR1_LSEBYP_Pos              (2U)
#define RCC_CSR1_LSEBYP_Msk              (0x1UL << RCC_CSR1_LSEBYP_Pos)         /*!< 0x00000004 */
#define RCC_CSR1_LSEBYP                  RCC_CSR1_LSEBYP_Msk
#define RCC_CSR1_LSEDRV_Pos              (3U)
#define RCC_CSR1_LSEDRV_Msk              (0x3UL << RCC_CSR1_LSEDRV_Pos)         /*!< 0x00000018 */
#define RCC_CSR1_LSEDRV                  RCC_CSR1_LSEDRV_Msk
#define RCC_CSR1_LSEDRV_0                (0x1UL << RCC_CSR1_LSEDRV_Pos)         /*!< 0x00000008 */
#define RCC_CSR1_LSEDRV_1                (0x2UL << RCC_CSR1_LSEDRV_Pos)         /*!< 0x00000010 */
#define RCC_CSR1_LSECSSON_Pos            (5U)
#define RCC_CSR1_LSECSSON_Msk            (0x1UL << RCC_CSR1_LSECSSON_Pos)       /*!< 0x00000020 */
#define RCC_CSR1_LSECSSON                RCC_CSR1_LSECSSON_Msk
#define RCC_CSR1_LSECSSD_Pos             (6U)
#define RCC_CSR1_LSECSSD_Msk             (0x1UL << RCC_CSR1_LSECSSD_Pos)        /*!< 0x00000040 */
#define RCC_CSR1_LSECSSD                 RCC_CSR1_LSECSSD_Msk
#define RCC_CSR1_RTCSEL_Pos              (8U)
#define RCC_CSR1_RTCSEL_Msk              (0x3UL << RCC_CSR1_RTCSEL_Pos)         /*!< 0x00000300 */
#define RCC_CSR1_RTCSEL                  RCC_CSR1_RTCSEL_Msk
#define RCC_CSR1_RTCSEL_0                (0x1UL << RCC_CSR1_RTCSEL_Pos)         /*!< 0x00000100 */
#define RCC_CSR1_RTCSEL_1                (0x2UL << RCC_CSR1_RTCSEL_Pos)         /*!< 0x00000200 */
#define RCC_CSR1_RTCEN_Pos               (15U)
#define RCC_CSR1_RTCEN_Msk               (0x1UL << RCC_CSR1_RTCEN_Pos)          /*!< 0x00008000 */
#define RCC_CSR1_RTCEN                   RCC_CSR1_RTCEN_Msk
#define RCC_CSR1_RTCRST_Pos              (16U)
#define RCC_CSR1_RTCRST_Msk              (0x1UL << RCC_CSR1_RTCRST_Pos)          /*!< 0x00010000 */
#define RCC_CSR1_RTCRST                  RCC_CSR1_RTCRST_Msk
#define RCC_CSR1_LSCOEN_Pos              (24U)
#define RCC_CSR1_LSCOEN_Msk              (0x1UL << RCC_CSR1_LSCOEN_Pos)         /*!< 0x01000000 */
#define RCC_CSR1_LSCOEN                  RCC_CSR1_LSCOEN_Msk
#define RCC_CSR1_LSCOSEL_Pos             (25U)
#define RCC_CSR1_LSCOSEL_Msk             (0x1UL << RCC_CSR1_LSCOSEL_Pos)        /*!< 0x02000000 */
#define RCC_CSR1_LSCOSEL                 RCC_CSR1_LSCOSEL_Msk

/********************  Bit definition for RCC_CSR2 register  *******************/
#define RCC_CSR2_LSION_Pos               (0U)
#define RCC_CSR2_LSION_Msk               (0x1UL << RCC_CSR2_LSION_Pos)           /*!< 0x00000001 */
#define RCC_CSR2_LSION                   RCC_CSR2_LSION_Msk
#define RCC_CSR2_LSIRDY_Pos              (1U)
#define RCC_CSR2_LSIRDY_Msk              (0x1UL << RCC_CSR2_LSIRDY_Pos)          /*!< 0x00000002 */
#define RCC_CSR2_LSIRDY                  RCC_CSR2_LSIRDY_Msk
#define RCC_CSR2_RMVF_Pos                (23U)
#define RCC_CSR2_RMVF_Msk                (0x1UL << RCC_CSR2_RMVF_Pos)            /*!< 0x00800000 */
#define RCC_CSR2_RMVF                    RCC_CSR2_RMVF_Msk
#define RCC_CSR2_OBLRSTF_Pos             (25U)
#define RCC_CSR2_OBLRSTF_Msk             (0x1UL << RCC_CSR2_OBLRSTF_Pos)         /*!< 0x02000000 */
#define RCC_CSR2_OBLRSTF                 RCC_CSR2_OBLRSTF_Msk
#define RCC_CSR2_PINRSTF_Pos             (26U)
#define RCC_CSR2_PINRSTF_Msk             (0x1UL << RCC_CSR2_PINRSTF_Pos)         /*!< 0x04000000 */
#define RCC_CSR2_PINRSTF                 RCC_CSR2_PINRSTF_Msk
#define RCC_CSR2_PWRRSTF_Pos             (27U)
#define RCC_CSR2_PWRRSTF_Msk             (0x1UL << RCC_CSR2_PWRRSTF_Pos)         /*!< 0x08000000 */
#define RCC_CSR2_PWRRSTF                 RCC_CSR2_PWRRSTF_Msk
#define RCC_CSR2_SFTRSTF_Pos             (28U)
#define RCC_CSR2_SFTRSTF_Msk             (0x1UL << RCC_CSR2_SFTRSTF_Pos)         /*!< 0x10000000 */
#define RCC_CSR2_SFTRSTF                 RCC_CSR2_SFTRSTF_Msk
#define RCC_CSR2_IWDGRSTF_Pos            (29U)
#define RCC_CSR2_IWDGRSTF_Msk            (0x1UL << RCC_CSR2_IWDGRSTF_Pos)        /*!< 0x20000000 */
#define RCC_CSR2_IWDGRSTF                RCC_CSR2_IWDGRSTF_Msk
#define RCC_CSR2_WWDGRSTF_Pos            (30U)
#define RCC_CSR2_WWDGRSTF_Msk            (0x1UL << RCC_CSR2_WWDGRSTF_Pos)        /*!< 0x40000000 */
#define RCC_CSR2_WWDGRSTF                RCC_CSR2_WWDGRSTF_Msk
#define RCC_CSR2_LPWRRSTF_Pos            (31U)
#define RCC_CSR2_LPWRRSTF_Msk            (0x1UL << RCC_CSR2_LPWRRSTF_Pos)        /*!< 0x80000000 */
#define RCC_CSR2_LPWRRSTF                RCC_CSR2_LPWRRSTF_Msk
