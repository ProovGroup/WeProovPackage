// Objective-C API for talking to github.com/ProovGroup/weproov-sdk-go/keyvalue Go package.
//   gobind -lang=objc github.com/ProovGroup/weproov-sdk-go/keyvalue
//
// File is generated by gobind. Do not edit.

#ifndef __Keyvalue_H__
#define __Keyvalue_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"

#include "Fscache.objc.h"

FOUNDATION_EXPORT void KeyvalueDelete(NSString* _Nullable key);

FOUNDATION_EXPORT NSString* _Nonnull KeyvalueGet(NSString* _Nullable key);

FOUNDATION_EXPORT void KeyvalueSet(NSString* _Nullable key, NSString* _Nullable value);

#endif
