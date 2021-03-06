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
* Description : Marshall routine for ClIocLogicalAddressIDLT
*     
* THIS FILE IS AUTO-GENERATED BY OPENCLOVIS IDE. EDIT THIS FILE AT
* YOUR OWN RISK. ANY CHANGE TO THIS FILE WILL BE OVERWRITTEN ON
* RE-GENERATION.
*     
*********************************************************************/
                                  
#include <netinet/in.h>
#include "xdrClIocLogicalAddressIDLT.h"

ClRcT clXdrMarshallClIocLogicalAddressIDLT_4_0_0(void *pGenVar,ClBufferHandleT msg, ClUint32T isDelete)
{
    ClIocLogicalAddressIDLT_4_0_0* pVar = (ClIocLogicalAddressIDLT_4_0_0*)pGenVar;
    ClRcT rc = CL_OK;
    ClUint32T length = 0;

    if ((void*)0 == pVar)
    {
        clXdrMarshallClUint32T(&length, msg, 0);
    }
    else
    {
        length = 1;
        clXdrMarshallClUint32T(&length, msg, 0);
    rc = clXdrMarshallClInt32T(&(pVar->discriminant),msg, isDelete);
    if (CL_OK != rc)
    {
        return rc;
    }

    switch (pVar->discriminant)
    {

        case (ClInt32T)CLIOCLOGICALADDRESSIDLTDWORD:
            rc = clXdrMarshallDWord_4_0_0(&(pVar->clIocLogicalAddressIDLT.dWord), msg, isDelete);
            if (CL_OK != rc)
            {
                return rc;
            }
        break;

        case (ClInt32T)CLIOCLOGICALADDRESSIDLTDWORDS:
            rc = clXdrMarshallArrayClUint32T(pVar->clIocLogicalAddressIDLT.dWords, 2, msg, isDelete);
            if (CL_OK != rc)
            {
                return rc;
            }
        break;

        case (ClInt32T)CLIOCLOGICALADDRESSIDLTWORDS:
            rc = clXdrMarshallArrayClUint16T(pVar->clIocLogicalAddressIDLT.words, 4, msg, isDelete);
            if (CL_OK != rc)
            {
                return rc;
            }
        break;

        case (ClInt32T)CLIOCLOGICALADDRESSIDLTBYTES:
            rc = clXdrMarshallArrayClInt8T(pVar->clIocLogicalAddressIDLT.bytes, 8, msg, isDelete);
            if (CL_OK != rc)
            {
                return rc;
            }
        break;

        default:
            return CL_XDR_RC(CL_ERR_INVALID_STATE);
    }
    }

    return rc;
}


