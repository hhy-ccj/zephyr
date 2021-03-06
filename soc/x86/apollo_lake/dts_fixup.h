/*
 * Copyright (c) 2018 Intel Corporation Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* SoC level DTS fixup file */

#define CONFIG_PHYS_RAM_ADDR                    CONFIG_SRAM_BASE_ADDRESS

#define CONFIG_PHYS_LOAD_ADDR                   CONFIG_FLASH_BASE_ADDRESS

#define CONFIG_RAM_SIZE                         CONFIG_SRAM_SIZE

#define CONFIG_ROM_SIZE                         CONFIG_FLASH_SIZE

#define CONFIG_IOAPIC_BASE_ADDRESS              INTEL_IOAPIC_FEC00000_BASE_ADDRESS

#define CONFIG_APL_GPIO_BASE_ADDRESS_0          INTEL_APL_GPIO_D0C50000_BASE_ADDRESS_0
#define CONFIG_APL_GPIO_BASE_ADDRESS_1          INTEL_APL_GPIO_D0C50000_BASE_ADDRESS_1
#define CONFIG_APL_GPIO_BASE_ADDRESS_2          INTEL_APL_GPIO_D0C50000_BASE_ADDRESS_2
#define CONFIG_APL_GPIO_BASE_ADDRESS_3          INTEL_APL_GPIO_D0C50000_BASE_ADDRESS_3
#define CONFIG_APL_GPIO_IRQ                     INTEL_APL_GPIO_D0C50000_IRQ_0
#define CONFIG_APL_GPIO_IRQ_PRIORITY            INTEL_APL_GPIO_D0C50000_IRQ_0_PRIORITY
#define CONFIG_APL_GPIO_IRQ_SENSE               INTEL_APL_GPIO_D0C50000_IRQ_0_SENSE
#define CONFIG_APL_GPIO_LABEL                   INTEL_APL_GPIO_D0C50000_LABEL
#define CONFIG_APL_GPIO_MEM_SIZE_0              INTEL_APL_GPIO_D0C50000_SIZE_0
#define CONFIG_APL_GPIO_MEM_SIZE_1              INTEL_APL_GPIO_D0C50000_SIZE_1
#define CONFIG_APL_GPIO_MEM_SIZE_2              INTEL_APL_GPIO_D0C50000_SIZE_2
#define CONFIG_APL_GPIO_MEM_SIZE_3              oINTEL_APL_GPIO_D0C50000_SIZE_3

/* End of SoC Level DTS fixup file */
