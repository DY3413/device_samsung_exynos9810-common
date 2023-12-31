#
# Copyright (C) 2022 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

LOCAL_PATH := prebuilts/vndk/v32/arm64/arch-arm64-armv8-a/shared/vndk-sp

include $(CLEAR_VARS)
LOCAL_MODULE := libutils-v32
LOCAL_SRC_FILES := libutils.so
LOCAL_MODULE_SUFFIX := .so
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
LOCAL_MODULE_TARGET_ARCH := arm64
LOCAL_MODULE_PATH := $(TARGET_OUT_VENDOR_SHARED_LIBRARIES)
LOCAL_MODULE_TAGS := optional
LOCAL_CHECK_ELF_FILES := false
include $(BUILD_PREBUILT)
