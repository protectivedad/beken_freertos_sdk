// Copyright 2015-2024 Beken
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _WIFI_UI_EXTRA_H_
#define _WIFI_UI_EXTRA_H_

#include "wlan_ui_pub.h"

void los_wlan_ap_para_info_get(network_InitTypeDef_st *ap_info, unsigned char *security, unsigned char *chann);
void los_wlan_ap_para_info_set(network_InitTypeDef_st *ap_info, unsigned char security, unsigned char chann);
void los_wlan_start_ap(network_InitTypeDef_st *inNetworkInitParaAP, unsigned char security, unsigned char chann);
int los_wlan_start_sta(network_InitTypeDef_st *inNetworkInitPara, char *psk, unsigned int psk_len, int chan);
UINT8* bk_ble_get_mac_addr(void);

#endif // _WIFI_UI_EXTRA_H_
// eof

