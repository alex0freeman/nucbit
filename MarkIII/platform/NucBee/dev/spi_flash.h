/*
 * spi_flash.h
 *
 *  Created on: 03 ����. 2014 �.
 *      Author: 17095
 */

#ifndef SPI_FLASH_H_
#define SPI_FLASH_H_


typedef enum {
	CMD_MAIN_READ = 0xd2,

	CMD_CNTREAD_LF = 0x03,
	CMD_CNTREAD_HF = 0x0b,

	CMD_BUF1READ_LF = 0xd1,
	CMD_BUF1READ_HF = 0xd3,

	CMD_BUF2READ_LF = 0xd4,
	CMD_BUF2READ_HF = 0xd6,

	CMD_BUF1WRITE = 0x84,
	CMD_BUF2WRITE = 0x87,

	CMD_MAIN_THROUGH_BUF1WRITE = 0x82,
	CMD_MAIN_THROUGH_BUF2WRITE = 0x85,

	CMD_BUF1MAINWRITE_ER = 0x83,
	CMD_BUF2MAINWRITE_ER = 0x86,

	CMD_BUF1MAINWRITE = 0x88,
	CMD_BUF2MAINWRITE = 0x89,

	CMD_PAGE_ER = 0x81,
	CMD_BLOCK_ER = 0x50,
	//CMD_CHIP_ERASE, //banned by errata

	CMD_READ_STS = 0xd7,

} sflash_cmd_t;


typedef struct {
	unsigned char pSize:1;
	unsigned char protect:1;
	unsigned char :4;
	unsigned char compare:1;
	unsigned char ready:1;
} sflast_stsreg_t;

#endif /* SPI_FLASH_H_ */
