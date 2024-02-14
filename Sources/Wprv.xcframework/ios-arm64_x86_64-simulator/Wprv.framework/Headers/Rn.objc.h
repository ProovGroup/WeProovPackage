// Objective-C API for talking to github.com/ProovGroup/weproov-sdk-go/requestNative Go package.
//   gobind -lang=objc github.com/ProovGroup/weproov-sdk-go/requestNative
//
// File is generated by gobind. Do not edit.

#ifndef __Rn_H__
#define __Rn_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"

#include "Wperr.objc.h"

@class RnHttpGolangWarperResponce;
@protocol RnHttpGolangWarperDelegate;
@class RnHttpGolangWarperDelegate;

@protocol RnHttpGolangWarperDelegate <NSObject>
- (void)get:(NSString* _Nullable)url token:(NSString* _Nullable)token resp:(RnHttpGolangWarperResponce* _Nullable)resp;
@end

@interface RnHttpGolangWarperResponce : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field HttpGolangWarperResponce.Wg with unsupported type: sync.WaitGroup

@property (nonatomic) long statusCode;
@property (nonatomic) NSData* _Nullable data;
@property (nonatomic) NSError* _Nullable error;
- (void)set:(long)status data:(NSData* _Nullable)data err:(NSError* _Nullable)err;
- (void)setStringError:(NSString* _Nullable)value;
@end

FOUNDATION_EXPORT RnHttpGolangWarperResponce* _Nullable RnGet(NSString* _Nullable url, NSString* _Nullable token);

FOUNDATION_EXPORT BOOL RnHaveDelegate(void);

FOUNDATION_EXPORT void RnSetDelegate(id<RnHttpGolangWarperDelegate> _Nullable delegate);

@class RnHttpGolangWarperDelegate;

@interface RnHttpGolangWarperDelegate : NSObject <goSeqRefInterface, RnHttpGolangWarperDelegate> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)get:(NSString* _Nullable)url token:(NSString* _Nullable)token resp:(RnHttpGolangWarperResponce* _Nullable)resp;
@end

#endif
