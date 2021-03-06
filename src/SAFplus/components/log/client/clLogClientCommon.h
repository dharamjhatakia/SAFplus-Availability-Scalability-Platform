/*
 * Copyright (C) 2002-2012 OpenClovis Solutions Inc.  All Rights Reserved.
 *
 * This file is available  under  a  commercial  license  from  the
 * copyright  holder or the GNU General Public License Version 2.0.
 * 
 * The source code for  this program is not published  or otherwise 
 * divested of  its trade secrets, irrespective  of  what  has been 
 * deposited with the U.S. Copyright office.
 * 
 * This program is distributed in the  hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied  warranty  of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 * 
 * For more  information, see  the file  COPYING provided with this
 * material.
 */
#ifndef _CL_LOG_CLIENT_COMMON_H_
#define _CL_LOG_CLIENT_COMMON_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <clCommon.h>
#include <clIdlApi.h>

#define CL_LOG_CLIENT_DEFULT_TIMEOUT    10000
#define CL_LOG_CLIENT_DEFAULT_RETRIES   0

typedef struct
{
    ClNameT    compName;
    ClUint32T  compId;
} ClLogCompInfoT;

ClRcT
clLogClntCompInfoGet(ClLogCompInfoT  *pCompInfo);

ClRcT
clLogClntIdlHandleInitialize(ClIocAddressT  destAddr,
                             ClIdlHandleT   *phLogIdl);

ClRcT
clLogClntIdlHandleFinalize(ClIdlHandleT  *phClntIdl);

ClRcT
clLogClntCompNameChkNCompIdGet(ClNameT    *pCompName,
                               ClUint32T  *pClientId);

#ifdef __cplusplus
}
#endif

#endif /* _CL_LOG_CLIENT_COMMON_H_ */
