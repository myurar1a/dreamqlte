/*
 * =================================================================
 *
 *
 *	Description:  samsung display panel file
 *
 *	Author: jb09.kim
 *	Company:  Samsung Electronics
 *
 * ================================================================
 */
/*
<one line to give the program's name and a brief idea of what it does.>
Copyright (C) 2012, Samsung Electronics. All rights reserved.

*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
*/
#ifndef SS_DSI_PANEL_S6E3HA6_AMB632NF01_H
#define SS_DSI_PANEL_S6E3HA6_AMB632NF01_H

#include "../ss_dsi_panel_common.h"

#define HBM_INTERPOLATION_STEP 8 /*443, 465, 488, 510, 533, 555, 578, 600*/
#define SUPPORT_LOWTEMP_ELVSS 15

enum {
	MID_TEMP = 0,
	LOW_TEMP,
	HIGH_TEMP,
	MAX_TEMP
};

struct smartdim_conf *smart_get_conf_S6E3HA6_AMB632NF01(void);
struct smartdim_conf *smart_get_conf_S6E3HA6_AMB632NF01_hmt(void);
#endif
