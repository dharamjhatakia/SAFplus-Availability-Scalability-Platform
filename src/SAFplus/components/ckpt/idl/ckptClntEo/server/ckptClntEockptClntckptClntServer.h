
/*********************************************************************
* File: 
*********************************************************************/
/*********************************************************************
* Description : This file contains the declartions for server stub
*               routines
*     
* THIS FILE IS AUTO-GENERATED BY OPENCLOVIS IDE. EDIT THIS FILE AT
* YOUR OWN RISK. ANY CHANGE TO THIS FILE WILL BE OVERWRITTEN ON
* RE-GENERATION.
*     
*********************************************************************/

#ifndef _CKPTCLNTEOCKPTCLNTCKPTCLNT_SERVER_H_
#define _CKPTCLNTEOCKPTCLNTCKPTCLNT_SERVER_H_
#ifdef __cplusplus
extern "C" {
#endif
#include <clXdrApi.h>
#include <clIdlApi.h>
#include <ipi/clRmdIpi.h>
#include "../clientIDDefinitions.h"
#include "xdrClCkptIOVectorElementT.h"
#include "xdrClCkptSectionIdT.h"



ClRcT clCkptSectionUpdationNotification_4_0_0(CL_IN ClNameT*  pName, CL_IN ClCkptSectionIdT_4_0_0*  pSecId, CL_IN ClUint32T  dataSize, CL_IN ClUint8T*  pData);

ClRcT clCkptSectionUpdationNotificationResponseSend_4_0_0(CL_IN ClIdlHandleT idlHdl,CL_IN ClRcT retCode);

ClRcT clCkptWriteUpdationNotification_4_0_0(CL_IN ClNameT*  pName, CL_IN ClUint32T  numberOfElements, CL_IN ClCkptIOVectorElementT_4_0_0*  pIoVector);

ClRcT clCkptWriteUpdationNotificationResponseSend_4_0_0(CL_IN ClIdlHandleT idlHdl,CL_IN ClRcT retCode);


#ifdef __cplusplus
}
#endif
#endif /*_CKPTCLNTEOCKPTCLNTCKPTCLNT_SERVER_H_*/
