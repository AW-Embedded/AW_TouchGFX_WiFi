# STM32H7B3I-DK TBS Version 3.0.11.

Please note this TouchGFX Board Setup is only supported from TouchGFX 4.20.0\n\nConfiguration is done using STM32CubeMX 6.5.0 and Additional Software component \"TouchGFX Generator 4.20.0\", based on STM32Cube FW_H7 V1.10.0 drivers.\nThe default IDE is set to STM32CubeIDE, to change IDE open the STM32H7B3I-DK.ioc with STM32CubeMX and select from the supported IDEs (STM32CubeIDE, EWARM, and MDK-ARM).\n\nSupports flashing of the STM32H7B3I-DK board directly from TouchGFX Designer using GCC and STM32CubeProgrammer. Flashing the board requires STM32CubeProgrammer which can be downloaded from the ST webpage.

This TBS is configured for 272 x 480 pixels 24bpp screen resolution.  

Performance testing can be done using the GPIO pins designated with the following signals: VSYNC_FREQ  - Pin PH14 (D0), RENDER_TIME - Pin PH13 (D1), FRAME_RATE  - Pin PI9 (D2), MCU_ACTIVE  - Pin PH9 (D3)

## EWARM Support

EWARM does not come with support for the STM32H7B3I, therefore EWARM support files are stored inside
`3rdparty/EWARMv8_STM32H7Ax-7Bx_Support_V2.3.zip`.

Installing `EWARMv8_STM32H7Ax-7Bx_Support_V2.3.exe` will add the following:
- RPNs without SMPS:STM32H7A/B3xx
- RPNs with SMPS:STM32H7A/B3xx-Q
- Adding support for new RPNs value line: STM32HB0xx
- STM32H7B3I-EVAL dedicated connection with OSPI external loader support (revB)
- STM32H7B3I-EVAL dedicated connection with FMC NOR external loader support
- STM32H7B3I_DISCO dedicated connection with OSPI external loader support
- STM32H7B0x_DISCO dedicated connection with OSPI external loader support
- STM32H7B0x_EVAL dedicated connection with OSPI external loader support
- Automatic STM32H7A/B flash algorithm selection
- SVD file for STM32H7A/B

### Installation Instructions

1. Extract the contents of `3rdparty/EWARMv8_STM32H7Ax-7Bx_Support_V2.3` to a temporary folder.
2. Copy `EWARMv8_STM32H7Ax-7Bx_Support_V2.3.exe` to your EWARM installation folder, typically `C:\Program Files\IAR Systems\Embedded Workbench`.
3. Then run `EWARMv8_STM32H7Ax-7Bx_Support_V2.3.exe` as administrator.


### Uninstallation instructions
You can remove it by running `Uninstall_Patch.bat` as administrator.
