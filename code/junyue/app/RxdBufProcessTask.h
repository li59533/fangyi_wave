/**
 **************************************************************************************************
 * @file        RxBufProcessTask.h
 * @author
 * @version
 * @date        5/28/2016
 * @brief
 **************************************************************************************************
 * @attention
 *
 **************************************************************************************************
 */
#ifndef _RXBUFPROCESSTASK_H_
#define _RXBUFPROCESSTASK_H_

/**
 * @addtogroup    XXX 
 * @{ 
 */
#include "self_def.h"
/**
 * @addtogroup    RxBufProcessTask_Modules 
 * @{  
 */

/**
 * @defgroup      RxBufProcessTask_Exported_Macros 
 * @{  
 */
#define RX_CONF_PROTOCOL_LEN		140
#define RX_CONF_HEAD				0X3A

#define RX_CONF_STATUS_OK			0X01
#define RX_CONF_STATUS_ERR			0X00
/**
 * @}
 */

/**
 * @defgroup      RxBufProcessTask_Exported_Constants
 * @{  
 */

/**
 * @}
 */

/**
 * @defgroup      RxBufProcessTask_Exported_Types 
 * @{  
 */
#pragma pack(1)

typedef struct
{
	uint8_t Head;
	uint8_t NodeNum;
	uint16_t SampleRate;
	uint16_t up_period;   // unit -> min
	uint16_t sample_time; // unit -> s
	uint16_t standy_1;
	uint16_t standy_2;
	uint32_t node_ip; // 
	uint32_t waas_ip;
	uint16_t node_port;
	uint16_t waas_port;
	uint8_t ch_type[5];
	uint8_t standy[60];
	char ap_ssid[25];
	char ap_password[25];
	uint16_t crc;	
}Rx_ConfData_t;


typedef struct
{
	uint8_t Head;
	uint32_t NodeNum;
	uint16_t crc;
	uint8_t status;	
}Rx_Conf_resp_t;

#pragma pack()
/**
 * @}
 */

/**
 * @defgroup      RxBufProcessTask_Exported_Variables 
 * @{  
 */

/**
 * @}
 */

/**
 * @defgroup      RxBufProcessTask_Exported_Functions 
 * @{  
 */
void Rx_Conf_Req(uint8_t *buf , uint16_t len);

void Rx_Conf_Resp(uint8_t status , uint16_t crc);
/**
 * @}
 */

/**
 * @}
 */

/**
 * @}
 */
#endif
