/* tools/mkbootimg/samsung_dtbh.h
**
** Copyright 2017, The LineageOS Project
**
** SPDX-License-Identifier: Apache-2.0
*/

#ifndef _SAMSUNG_DTBH_H_
#define _SAMSUNG_DTBH_H_

#define DTBH_MAGIC         "DTBH"
#define DTBH_VERSION       2
#define DTBH_PLATFORM      "android"
#define DTBH_SUBTYPE       "samsung"
 /* Hardcoded entry */
#define DTBH_PLATFORM_CODE 0x000050a6
#define DTBH_SUBTYPE_CODE  0x217584da

/* DTBH_MAGIC + DTBH_VERSION + DTB counts */
#define DT_HEADER_PHYS_SIZE 12

/*
 * keep the eight uint32_t entries first in this struct so we can memcpy them to the file
 */
#define DT_ENTRY_PHYS_SIZE (sizeof(uint32_t) * 8)

#endif // _SAMSUNG_DTBH_H_
