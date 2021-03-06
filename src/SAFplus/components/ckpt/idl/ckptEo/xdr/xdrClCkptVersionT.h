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
*               and unmarshall funtions of ClCkptVersionT 
*     
* THIS FILE IS AUTO-GENERATED BY OPENCLOVIS IDE. EDIT THIS FILE AT
* YOUR OWN RISK. ANY CHANGE TO THIS FILE WILL BE OVERWRITTEN ON
* RE-GENERATION.
*     
*********************************************************************/

#ifndef _XDR_CL_CKPT_VERSION_T_H_
#define _XDR_CL_CKPT_VERSION_T_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "clXdrApi.h"

#include "clCkptApi.h"
#include "clCkptCommon.h"
#include "clCkptExtApi.h"

struct _ClCkptVersionT_4_0_0;

typedef struct _ClCkptVersionT_4_0_0 {
    ClUint8T    releaseCode;
    ClUint8T    majorVersion;
    ClUint8T    minorVersion;
    ClUint8T    reserved;

}ClCkptVersionT_4_0_0;


ClRcT  clXdrMarshallClCkptVersionT_4_0_0(void *,ClBufferHandleT , ClUint32T);

ClRcT  clXdrUnmarshallClCkptVersionT_4_0_0(ClBufferHandleT, void *);

#define clXdrMarshallArrayClCkptVersionT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallArray((pointer), sizeof(ClCkptVersionT_4_0_0), (multiplicity), clXdrMarshallClCkptVersionT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallArrayClCkptVersionT_4_0_0(msg,pointer, multiplicity) \
clXdrUnmarshallArray((msg),(pointer), sizeof(ClCkptVersionT_4_0_0), (multiplicity), clXdrUnmarshallClCkptVersionT_4_0_0)

#define clXdrMarshallPointerClCkptVersionT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallPointer((pointer), sizeof(ClCkptVersionT_4_0_0), (multiplicity), clXdrMarshallClCkptVersionT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallPointerClCkptVersionT_4_0_0(msg,pointer) \
clXdrUnmarshallPointer((msg),(pointer), sizeof(ClCkptVersionT_4_0_0), clXdrUnmarshallClCkptVersionT_4_0_0)

#define clXdrMarshallPtrClCkptVersionT_4_0_0(pointer, multiplicity, msg, isDelete) \
clXdrMarshallPtr((pointer), sizeof(ClCkptVersionT_4_0_0), (multiplicity), clXdrMarshallClCkptVersionT_4_0_0, (msg), (isDelete))

#define clXdrUnmarshallPtrClCkptVersionT_4_0_0(msg,pointer,multiplicity) \
clXdrUnmarshallPtr((msg),(pointer), sizeof(ClCkptVersionT_4_0_0),multiplicity, clXdrUnmarshallClCkptVersionT_4_0_0)


typedef ClCkptVersionT_4_0_0 ClCkptVersionT;



#ifdef __cplusplus
}
#endif

#endif /*_XDR_CL_CKPT_VERSION_T_H_*/
