// Objective-C API for talking to github.com/ProovGroup/weproov-sdk-go Go package.
//   gobind -lang=objc github.com/ProovGroup/weproov-sdk-go
//
// File is generated by gobind. Do not edit.

#ifndef __Wprv_H__
#define __Wprv_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"

#include "Fscache.objc.h"

FOUNDATION_EXPORT void WprvClearCache(void);

FOUNDATION_EXPORT void WprvSetDebugLevel(long level);

FOUNDATION_EXPORT NSString* _Nonnull WprvVersion(void);

#endif