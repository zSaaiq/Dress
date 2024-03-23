THEOS_DEVICE_IP = 192.168.178.116
FINALPACKAGE = 1
PREFIX = $(THEOS)/toolchain/Xcode.xctoolchain/usr/bin/
THEOS_PACKAGE_SCHEME=rootless
export ADDITIONAL_CFLAGS = -DTHEOS_LEAN_AND_MEAN -fobjc-arc -O3
export TARGET = iphone:15.6
ARCHS = arm64 arm64e
export SYSROOT = $(THEOS)/sdks/iPhoneOS15.6.sdk

INSTALL_TARGET_PROCESSES = SpringBoard
SUBPROJECTS += Tweak Preferences

include $(THEOS)/makefiles/common.mk
include $(THEOS_MAKE_PATH)/aggregate.mk
