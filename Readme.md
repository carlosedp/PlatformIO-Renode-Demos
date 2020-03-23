# PlatformIO - Renode integration Demos

This repository has some demos showing the integration between [PlatformIO](platformio.org/) and Antmicro [Renode](https://renode.io/) for embedded development. The objective is show the integration setup with minimal working example applications.

[![Integration Demo](https://img.youtube.com/vi/EdC3kFZxSzI/0.jpg)](https://www.youtube.com/watch?v=EdC3kFZxSzI)


Checkout the [companion article](https://www.zephyrproject.org/developing-zephyr-rtos-embedded-applications-on-platformio-and-simulating-on-antmicro-renode/) showing the step-by-step for setting-up your environment.

## Projects

### [Zephyr RTOS Console Echo App](Zephyr-HiFive1)

This project is a simple Console Echo application written in [Zephyr RTOS](https://www.zephyrproject.org) and simulated on the [SiFive HiFive1](https://docs.platformio.org/en/latest/boards/sifive/hifive1.html#board-sifive-hifive1) board, a 32bit RISC-V SoC.

The files are configured to be built on PlatformIO and simulated on a HiFive1 board in Renode.

------------------------------------------------

### [Arduino STM32 Echo App](Arduino-STM32)

This project is an Echo application written in [Arduino](arduino.cc/) targeting the STM32 processors.

The files are configured to be built on PlatformIO and simulated on a ST [STM32F4-Discovery](https://docs.platformio.org/en/latest/boards/ststm32/disco_f407vg.html) in Renode.

------------------------------------------------

### [FreeRTOS Hello World](FreeRTOS-K210)

This project is a simple Hello World written in [FreeRTOS](https://www.freertos.org/) [port](https://github.com/kendryte/kendryte-freertos-sdk) for [Kendryte K210](https://docs.platformio.org/en/latest/platforms/kendryte210.html), a dual core 64bit RISC-V SoC.

The files are configured to be built on PlatformIOand simulated on a HiFive1 board in Renode.
