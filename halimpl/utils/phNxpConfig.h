/******************************************************************************
 *
 *  Copyright (C) 1999-2012 Broadcom Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at:
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/

/******************************************************************************
 *
 *  The original Work has been changed by NXP Semiconductors.
 *
 *  Copyright (C) 2013-2014 NXP Semiconductors
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/

#ifndef __CONFIG_H
#define __CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

int GetNxpStrValue(const char* name, char* p_value, unsigned long len);
int GetNxpNumValue(const char* name, void* p_value, unsigned long len);
int GetNxpByteArrayValue(const char* name, char* pValue, long bufflen,
                         long* len);
void resetNxpConfig(void);
int isNxpConfigModified();
int updateNxpConfigTimestamp();

#ifdef __cplusplus
};
#endif

#define NAME_NXPLOG_EXTNS_LOGLEVEL "NXPLOG_EXTNS_LOGLEVEL"
#define NAME_NXPLOG_NCIHAL_LOGLEVEL "NXPLOG_NCIHAL_LOGLEVEL"
#define NAME_NXPLOG_NCIX_LOGLEVEL "NXPLOG_NCIX_LOGLEVEL"
#define NAME_NXPLOG_NCIR_LOGLEVEL "NXPLOG_NCIR_LOGLEVEL"
#define NAME_NXPLOG_FWDNLD_LOGLEVEL "NXPLOG_FWDNLD_LOGLEVEL"
#define NAME_NXPLOG_TML_LOGLEVEL "NXPLOG_TML_LOGLEVEL"

#define NAME_MIFARE_READER_ENABLE "MIFARE_READER_ENABLE"
#define NAME_FW_STORAGE "FW_STORAGE"
#define NAME_NXP_NFC_DEV_NODE "NXP_NFC_DEV_NODE"
#define NAME_NXP_FW_TYPE "NXP_FW_TYPE"
#define NAME_NXP_FW_PROTECION_OVERRIDE "NXP_FW_PROTECION_OVERRIDE"
#define NAME_NXP_SYS_CLK_SRC_SEL "NXP_SYS_CLK_SRC_SEL"
#define NAME_NXP_SYS_CLK_FREQ_SEL "NXP_SYS_CLK_FREQ_SEL"
#define NAME_NXP_SYS_CLOCK_TO_CFG "NXP_SYS_CLOCK_TO_CFG"
#define NAME_NXP_ACT_PROP_EXTN "NXP_ACT_PROP_EXTN"
#define NAME_NXP_EXT_TVDD_CFG "NXP_EXT_TVDD_CFG"
#define NAME_NXP_EXT_TVDD_CFG_1 "NXP_EXT_TVDD_CFG_1"
#define NAME_NXP_EXT_TVDD_CFG_2 "NXP_EXT_TVDD_CFG_2"
#define NAME_NXP_EXT_TVDD_CFG_3 "NXP_EXT_TVDD_CFG_3"
#define NAME_NXP_RF_CONF_BLK_1 "NXP_RF_CONF_BLK_1"
#define NAME_NXP_RF_CONF_BLK_2 "NXP_RF_CONF_BLK_2"
#define NAME_NXP_RF_CONF_BLK_3 "NXP_RF_CONF_BLK_3"
#define NAME_NXP_RF_CONF_BLK_4 "NXP_RF_CONF_BLK_4"
#define NAME_NXP_RF_CONF_BLK_5 "NXP_RF_CONF_BLK_5"
#define NAME_NXP_RF_CONF_BLK_6 "NXP_RF_CONF_BLK_6"
#define NAME_NXP_CORE_CONF_EXTN "NXP_CORE_CONF_EXTN"
#define NAME_NXP_CORE_CONF "NXP_CORE_CONF"
#define NAME_NXP_CORE_MFCKEY_SETTING "NXP_CORE_MFCKEY_SETTING"
#define NAME_NXP_CORE_STANDBY "NXP_CORE_STANDBY"
#define NAME_NXP_NFC_PROFILE_EXTN "NXP_NFC_PROFILE_EXTN"
#define NAME_NXP_CHINA_TIANJIN_RF_ENABLED "NXP_CHINA_TIANJIN_RF_ENABLED"
#define NAME_NXP_SWP_SWITCH_TIMEOUT "NXP_SWP_SWITCH_TIMEOUT"
#define NAME_NXP_SWP_FULL_PWR_ON "NXP_SWP_FULL_PWR_ON"
#define NAME_NXP_CORE_RF_FIELD "NXP_CORE_RF_FIELD"
#define NAME_NXP_NFC_MERGE_RF_PARAMS "NXP_NFC_MERGE_RF_PARAMS"
#define NAME_NXP_I2C_FRAGMENTATION_ENABLED "NXP_I2C_FRAGMENTATION_ENABLED"
#define NAME_AID_MATCHING_PLATFORM "AID_MATCHING_PLATFORM"
#define NAME_NFC_DEBUG_ENABLED "NFC_DEBUG_ENABLED"
#define NAME_RF_STATUS_UPDATE_ENABLE "RF_STATUS_UPDATE_ENABLE"
#define NAME_ISO_DEP_MAX_TRANSCEIVE "ISO_DEP_MAX_TRANSCEIVE"
#define NAME_NFA_POLL_BAIL_OUT_MODE "NFA_POLL_BAIL_OUT_MODE"
#define NAME_ACTIVE_SE "ACTIVE_SE"
#define NAME_ACTIVE_SE_NFCF "ACTIVE_SE_NFCF"
#define NAME_DEFAULT_FELICA_SYS_CODE_ROUTE "DEFAULT_FELICA_SYS_CODE_ROUTE"
#define NAME_DEFAULT_ISODEP_ROUTE "DEFAULT_ISODEP_ROUTE"
#define NAME_DEVICE_HOST_WHITE_LIST "DEVICE_HOST_WHITE_LIST"
#define NAME_NFA_HCI_STATIC_PIPE_ID_ESE "NFA_HCI_STATIC_PIPE_ID_C0"
#define NAME_NFA_HCI_STATIC_PIPE_ID_SIM "NFA_HCI_STATIC_PIPE_ID_80"
#define NAME_NFA_PROPRIETARY_CFG "NFA_PROPRIETARY_CFG"
#define NAME_PRESENCE_CHECK_ALGORITHM "PRESENCE_CHECK_ALGORITHM"
/* default configuration */
#define default_storage_location "/data/vendor/nfc"

#endif
