# Copyright (C) 2002-2012 OpenClovis Solutions Inc.  All Rights Reserved.
# This file is available  under  a  commercial  license  from  the
# copyright  holder or the GNU General Public License Version 2.0.
#
# The source code for  this program is not published  or otherwise 
# divested of  its trade secrets, irrespective  of  what  has been 
# deposited with the U.S. Copyright office.
# 
# This program is distributed in the  hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied  warranty  of 
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
# General Public License for more details.
# 
# For more  information,  see the  file COPYING provided with this
# material.
################################################################################
# ModuleName  : amf
# File        : Makefile
################################################################################
# Description :
################################################################################

THIRD_PARTY_UTILS_PATH = $(CLOVIS_ROOT)/ASP/3rdparty/utils/
AMF_PATH                = $(CLOVIS_ROOT)/ASP/components/amf

##### Component name (using all lowercase):

COMPNAME	:= amf

### Other libs needed
ifeq ($(HCL_CM),1)
EXTRA_CPPFLAGS += -I$(TOOLCHAIN_DIR)/include/radisys
else
EXTRA_CPPFLAGS += -I$(TOOLCHAIN_DIR)/include/openhpi
endif

THIRDPARTY_LIBS	:= -L$(THIRD_PARTY_UTILS_PATH) -l3rdpartyutils
EXTRA_CPPFLAGS  += -I$(THIRD_PARTY_UTILS_PATH) -I$(AMF_PATH)/common/ams
EXTRA_CPPFLAGS  += -I$(AMF_PATH)/server/ams -I$(AMF_PATH)/common/ams/idl/xdr -I$(AMF_PATH)/common/cpm
#EXTRA_CPPFLAGS  += -DCL_AMS_DEBUG_PRINT

##### Source files for the client of this component

SRC_FILES	:= clAmsMgmtClientApi.c		\
		   clAmsMgmtClientRmd.c		\
           ClAmsMgmtCCBBatch.c \
		   clAmsTriggerClient.c         \
		   clAmsClientNotification.c          \
		   ${AMF_PATH}/common/ams/clAmsUtils.c \


##### ASP libraries needed to get this client built

DEP_COMP_LIST	:= utils osal timer buffer cnt ioc rmd eo debug amf cm cor log event ckpt


##### Libraries built for this component

LIB_NAMES	=  libClAmsMgmt 


SRC_FILES_libClAmsMgmt	= clAmsMgmtClientApi.c		\
                          clAmsMgmtClientRmd.c		\
						  clAmsMgmtCCBBatch.c \
			  clAmsClientNotification.c           \
			  clAmsTriggerClient.c          \
			  ${AMF_PATH}/common/ams/clAmsUtils.c \

include $(CLOVIS_ROOT)/ASP/mk/make-client.mk
