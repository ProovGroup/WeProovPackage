// Objective-C API for talking to github.com/ProovGroup/weproov-sdk-go/services Go package.
//   gobind -lang=objc github.com/ProovGroup/weproov-sdk-go/services
//
// File is generated by gobind. Do not edit.

#ifndef __Services_H__
#define __Services_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"

#include "Wperr.objc.h"

@class ServicesOcrRequest;
@class ServicesOcrResult;
@protocol ServicesVinOcrDelegate;
@class ServicesVinOcrDelegate;

@protocol ServicesVinOcrDelegate <NSObject>
- (void)onVinError:(NSError* _Nullable)err;
- (void)onVinFound:(NSString* _Nullable)vin;
- (void)onVinNotFound;
@end

@interface ServicesOcrRequest : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull data;
@end

@interface ServicesOcrResult : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull result;
@end

FOUNDATION_EXPORT void ServicesOcrVin(NSData* _Nullable data, id<ServicesVinOcrDelegate> _Nullable delegate);

// skipped function OcrVinSync with unsupported parameter or return types


@class ServicesVinOcrDelegate;

@interface ServicesVinOcrDelegate : NSObject <goSeqRefInterface, ServicesVinOcrDelegate> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onVinError:(NSError* _Nullable)err;
- (void)onVinFound:(NSString* _Nullable)vin;
- (void)onVinNotFound;
@end

#endif
