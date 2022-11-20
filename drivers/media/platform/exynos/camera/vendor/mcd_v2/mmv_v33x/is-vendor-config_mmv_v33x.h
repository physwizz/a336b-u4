#ifndef IS_VENDOR_CONFIG_MMV_V33X_H
#define IS_VENDOR_CONFIG_MMV_V33X_H

//#define USE_AP_PDAF						/* Support sensor PDAF SW Solution */

#define DISABLE_DUAL_SYNC

/***** HW DEFENDANT DEFINE *****/

#define VENDER_PATH

#define USE_CAMERA_HEAP
#ifdef USE_CAMERA_HEAP
#define CAMERA_HEAP_NAME	"camera"
#define CAMERA_HEAP_NAME_LEN	6
#define CAMERA_HEAP_UNCACHED_NAME	"camera-uncached"
#define CAMERA_HEAP_UNCACHED_NAME_LEN	15
#endif

#define CONFIG_SEC_CAL_ENABLE
#define IS_REAR_MAX_CAL_SIZE (0x4970)
#define IS_FRONT_MAX_CAL_SIZE (0x1C86)
#define IS_REAR3_MAX_CAL_SIZE (0x1AE0)
#define IS_REAR4_MAX_CAL_SIZE (0x1A50)

#define CAMERA_REAR2
#define CAMERA_REAR3
#define CAMERA_REAR4

#define CAMERA_REAR_DUAL_CAL

#define USE_CAMERA_ACT_DRIVER_SOFT_LANDING			/* Using NRC based softlanding */
#define READ_DUAL_CAL_FIRMWARE_DATA

#ifdef USE_KERNEL_VFS_READ_WRITE
#define DUAL_CAL_DATA_PATH "/vendor/firmware/SetMultiCalInfo.bin"
#else
#define DUAL_CAL_DATA_PATH "/vendor/firmware/"
#define DUAL_CAL_DATA_BIN_NAME "SetMultiCalInfo.bin"
#endif

#define DUAL_CAL_DATA_SIZE_DEFAULT (0x080C)

#define CAMERA_REAR2_MODULEID
#define CAMERA_REAR3_MODULEID
#define CAMERA_REAR4_MODULEID

#define CAMERA_EEPROM_SUPPORT_FRONT
#define CAMERA_STANDARD_CAL_ISP_VERSION 'E'
#define USES_STANDARD_CAL_RELOAD
#define USE_PERSISTENT_DEVICE_PROPERTIES_FOR_CAL /* For cal reload */

#define CONFIG_SECURE_CAMERA_USE 1
#define ENABLE_REMOSAIC_CAPTURE
#define MODIFY_CAL_MAP_FOR_SWREMOSAIC_LIB

#define USE_CAMERA_ADAPTIVE_MIPI
#endif /* IS_VENDOR_CONFIG_MMV_V33X_H */
