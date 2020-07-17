/**
 **************************************************************************************************
 * @file        DataEmuTask.h
 * @author
 * @version
 * @date        5/28/2016
 * @brief
 **************************************************************************************************
 * @attention
 *
 **************************************************************************************************
 */
#ifndef _DATAEMUTASK_H_
#define _DATAEMUTASK_H_

/**
 * @addtogroup    XXX 
 * @{ 
 */
#include "self_def.h"
/**
 * @addtogroup    DataEmuTask_Modules 
 * @{  
 */

/**
 * @defgroup      DataEmuTask_Exported_Macros 
 * @{  
 */

/**
 * @}
 */

/**
 * @defgroup      DataEmuTask_Exported_Constants
 * @{  
 */

/**
 * @}
 */

/**
 * @defgroup      DataEmuTask_Exported_Types 
 * @{  
 */
#pragma pack(1)
typedef struct
{
	uint8_t Head;
	uint8_t NodeNum;
	uint8_t ChannelNum;
	uint8_t CurMode;
	uint16_t TotalPackage;
	uint32_t CurPackage;
	uint16_t SampleRate;
	uint16_t Battery;
	int16_t Temperature[2];
    uint8_t maxvibration_channel;
    uint8_t standby_app;
	uint16_t * Wave;
}Protocol_Wave_Fangyi_t ; 
#pragma pack()
/**
 * @}
 */

/**
 * @defgroup      DataEmuTask_Exported_Variables 
 * @{  
 */

/**
 * @}
 */

/**
 * @defgroup      DataEmuTask_Exported_Functions 
 * @{  
 */
void BoardPeroidWave_ForFangyi(void);
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
