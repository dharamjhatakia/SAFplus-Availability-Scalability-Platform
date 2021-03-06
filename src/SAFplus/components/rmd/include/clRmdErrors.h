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
 * ModuleName  : rmd                                                           
 * File        : clRmdErrors.h
 *******************************************************************************/

/*******************************************************************************
 * Description :                                                                
 *          This module contains RMD related Error Codes.
 *
 *
 *****************************************************************************/
/**
 *  \file
 *  \brief Header file of RMD related Error Codes
 *  \ingroup rmd_apis
 */

/**
 *  \addtogroup rmd_apis
 *  \{
 */
 

#ifndef _CL_RMD_ERRORS_H_
# define _CL_RMD_ERRORS_H_

# ifdef __cplusplus
extern "C"
{
# endif


/**
 * RMD Specific Error Codes.
 */
# define CL_RMD_RC(ERROR_CODE)        CL_RC(CL_CID_RMD, (ERROR_CODE))
# define CL_RMD_ERR_CONTINUE          CL_RMD_RC(CL_ERR_CONTINUE)
# define CL_RMD_ERR_INUSE             CL_RMD_RC(CL_ERR_INUSE)

# ifdef __cplusplus
}
# endif

#endif                          /* _CL_RMD_ERRORS_H_ */


/** \} */
