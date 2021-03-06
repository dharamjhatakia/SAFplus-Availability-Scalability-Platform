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
/*******************************************************************************
 * ModuleName  : name
 * File        : clNameConfigApi.h
 *******************************************************************************/

/*******************************************************************************
 * Description :
 *
 *  This file contains Name Service lifecycle module related
 * datastructures and APIs.
 *
 *
 *****************************************************************************/

/**
 *  \file
 *  \brief Header file of Name Service lifecycle module related datastructures
 *   and APIs
 *  \ingroup name_apis
 */

/**
 ************************************
 *  \addtogroup name_apis
 *  \{
 */

#ifndef _CL_NAME_CONFIG_API_H_
#define _CL_NAME_CONFIG_API_H_

#ifdef __cplusplus
extern "C" {
#endif

/*********************************************************************************/
/********************* Name Service config related data structures ***************/
/*********************************************************************************/

/**
 * The structure ClNameSvcConfigT contains the Name Service configuration information.
 */
typedef struct
{

/**
 * Maximum number of entries per context.
 */
    ClUint32T  nsMaxNoEntries;

/**
 * Maximum number of user-defined global contexts.
 */
    ClUint32T  nsMaxNoGlobalContexts;

/**
 * Maximum number of node local user contexts.
 */
    ClUint32T  nsMaxNoLocalContexts;

}ClNameSvcConfigT;

typedef ClNameSvcConfigT* ClNameSvcConfigPtrT ;

/**************************************************************************************/
/************************** API to Life cycle Module **********************************/



#ifdef __cplusplus
}
#endif

#endif /* _CL_NAME_CONFIG_API_H_ */

/**
 *  \}
 */
