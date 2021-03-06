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


/*********************************************************************
* ModuleName  : idl
*********************************************************************/
/*********************************************************************
* Description : This file contains the declarations for marshall 
*               and unmarshall funtions of ClCorAttrIdIdxPairT 
*     
* THIS FILE IS AUTO-GENERATED BY OPENCLOVIS IDE. EDIT THIS FILE AT
* YOUR OWN RISK. ANY CHANGE TO THIS FILE WILL BE OVERWRITTEN ON
* RE-GENERATION.
*     
*********************************************************************/

#ifndef _XDR_CL_COR_ATTR_ID_IDX_PAIR_T_H_
#define _XDR_CL_COR_ATTR_ID_IDX_PAIR_T_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "clXdrApi.h"

#include "clCorTxnJobStream.h"
#include "clTimerApi.h"
#include "clCorNotifyApi.h"
#include "clCorClient.h"
#include "clIocApi.h"
#include "clCorDmData.h"
#include "clCorMetaData.h"
#include "clCorSync.h"

struct _ClCorAttrIdIdxPairT_4_0_0;


ClRcT  clXdrMarshallClCorAttrIdIdxPairT_4_0_0(void *,ClBufferHandleT , ClUint32T);

ClRcT  clXdrUnmarshallClCorAttrIdIdxPairT_4_0_0(ClBufferHandleT, void *);

#define clXdrMarshallArrayClCorAttrIdIdxPairT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallArray((pointer), sizeof(ClCorAttrIdIdxPairT_4_0_0), (multiplicity), clXdrMarshallClCorAttrIdIdxPairT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallArrayClCorAttrIdIdxPairT_4_0_0(msg,pointer, multiplicity) \
clXdrUnmarshallArray((msg),(pointer), sizeof(ClCorAttrIdIdxPairT_4_0_0), (multiplicity), clXdrUnmarshallClCorAttrIdIdxPairT_4_0_0)

#define clXdrMarshallPointerClCorAttrIdIdxPairT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallPointer((pointer), sizeof(ClCorAttrIdIdxPairT_4_0_0), (multiplicity), clXdrMarshallClCorAttrIdIdxPairT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallPointerClCorAttrIdIdxPairT_4_0_0(msg,pointer) \
clXdrUnmarshallPointer((msg),(pointer), sizeof(ClCorAttrIdIdxPairT_4_0_0), clXdrUnmarshallClCorAttrIdIdxPairT_4_0_0)

#define clXdrMarshallPtrClCorAttrIdIdxPairT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallPtr((pointer), sizeof(ClCorAttrIdIdxPairT_4_0_0), (multiplicity), clXdrMarshallClCorAttrIdIdxPairT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallPtrClCorAttrIdIdxPairT_4_0_0(msg,pointer,multiplicity) \
clXdrUnmarshallPtr((msg),(pointer), sizeof(ClCorAttrIdIdxPairT_4_0_0),multiplicity, clXdrUnmarshallClCorAttrIdIdxPairT_4_0_0)


typedef ClCorAttrIdIdxPairT ClCorAttrIdIdxPairT_4_0_0;



#ifdef __cplusplus
}
#endif

#endif /*_XDR_CL_COR_ATTR_ID_IDX_PAIR_T_H_*/
