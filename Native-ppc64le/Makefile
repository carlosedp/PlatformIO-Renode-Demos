ARCH = $(shell uname -m)
ifneq ("$(ARCH)", "ppc64")
ifneq ("$(ARCH)", "ppc64le")
        CROSS_COMPILE = powerpc64le-linux-
endif
endif

# Set below to 1 to run commands inside a Docker container with cross-build toolchain or 0 to run with local toolchain
BUILDINDOCKER = 1

CC = $(CROSS_COMPILE)gcc
LD = $(CROSS_COMPILE)ld
OBJCOPY = $(CROSS_COMPILE)objcopy

ifeq ($(BUILDINDOCKER),1)
	DOCKER = docker run -it --rm -w /build -v $(PWD):/build carlosedp/crossbuild-ppc64le
	CC = $(DOCKER) $(CROSS_COMPILE)gcc
	LD = $(DOCKER) $(CROSS_COMPILE)ld
	OBJCOPY = $(DOCKER) $(CROSS_COMPILE)objcopy
endif

CFLAGS = -Os -g -Wall -std=c99 -msoft-float -mno-string -mno-multiple -mno-vsx -mno-altivec -mlittle-endian -fno-stack-protector -mstrict-align -ffreestanding -fdata-sections -ffunction-sections
ASFLAGS = $(CFLAGS)
LDFLAGS = -T powerpc.lds

.PHONY: clean indocker renode

all: hello_world.bin

renode: hello_world.elf
	@renode \
		'-e $$bin="$(realpath $<)"' \
		'-e include @scripts/single-node/microwatt.resc' \
		'-e machine StartGdbServer 3333 True' \
		'-e logLevel 3' \
		'-e emulation CreateServerSocketTerminal 1234 "externalUART"' \
		'-e connector Connect uart externalUART' \
		'-e start'

hello_world.elf: hello_world.o head.o
	$(LD) $(LDFLAGS) -o hello_world.elf hello_world.o head.o

hello_world.bin: hello_world.elf
	$(OBJCOPY) -O binary hello_world.elf hello_world.bin

clean:
	@rm -f *.o hello_world.elf hello_world.bin hello_world.hex
