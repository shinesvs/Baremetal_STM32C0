CFLAGS ?= -W -Wall -Wextra -Werror -Wundef -Wshadow -Wdouble-promotion \
	  -Wformat-truncation -fno-common -Wconversion \
	  -g3 -Os -ffunction-sections -fdata-sections -I. \
	  -mcpu=cortex-m0plus -mthumb $(EXTRA_CFLAGS)

LDFLAGS ?= -Tlink.ld -nostartfiles -nostdlib --specs=nano.specs -lc -lgcc -Wl,--gc-sections
SOURCES = main.c gpio.c startup.c

build : firmware.elf

firmware.elf: $(SOURCES)
	arm-none-eabi-gcc $(CFLAGS) $(SOURCES) $(LDFLAGS) -o $@

firmware.bin: firwmare.elf
	arm-none-eabi-objcopy -O binary $< $@

flash: firmware.bin
	STM32_Programmer_CLI -c port=SWD -w firmware.bin 0x08000000 -V -rst

clean:
	rm -rf *.o firmware.*
