// Objective-C API for talking to github.com/ProovGroup/weproov-sdk-go/proover Go package.
//   gobind -lang=objc github.com/ProovGroup/weproov-sdk-go/proover
//
// File is generated by gobind. Do not edit.

#ifndef __Proover_H__
#define __Proover_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"

#include "Wperr.objc.h"

@class ProoverInfos;
@class ProoverList;
@class ProoverStruct;
@protocol ProoverListDelegate;
@class ProoverListDelegate;

@protocol ProoverListDelegate <NSObject>
- (void)onProoverFindError:(NSError* _Nullable)err;
- (void)onProoverFindsuccess:(ProoverList* _Nullable)list;
@end

@interface ProoverInfos : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull name;
@property (nonatomic) NSString* _Nonnull value;
@end

@interface ProoverList : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull find;
@property (nonatomic) long offset;
@property (nonatomic) long limit;
@property (nonatomic) BOOL haveMore;
// skipped field List.Result with unsupported type: []github.com/ProovGroup/weproov-sdk-go/proover.Struct

- (long)count;
- (ProoverStruct* _Nullable)get:(long)num;
- (void)next:(id<ProoverListDelegate> _Nullable)delegate;
@end

@interface ProoverStruct : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long id_;
@property (nonatomic) long userId;
@property (nonatomic) NSString* _Nonnull identifier;
// skipped field Struct.Infos with unsupported type: []github.com/ProovGroup/weproov-sdk-go/proover.Infos

- (NSString* _Nonnull)company;
- (NSString* _Nonnull)email;
- (NSString* _Nonnull)firstName;
- (NSString* _Nonnull)get:(NSString* _Nullable)name;
- (NSString* _Nonnull)lastName;
- (NSString* _Nonnull)phoneNumber;
@end

FOUNDATION_EXPORT ProoverStruct* _Nullable ProoverCreateLightProover(NSString* _Nullable firstName, NSString* _Nullable lastName, NSString* _Nullable email, NSString* _Nullable number);

FOUNDATION_EXPORT void ProoverGetList(NSString* _Nullable find, long offset, long limit, id<ProoverListDelegate> _Nullable delegate);

FOUNDATION_EXPORT ProoverList* _Nullable ProoverGetListSync(NSString* _Nullable find, long offset, long limit, NSError* _Nullable* _Nullable error);

@class ProoverListDelegate;

@interface ProoverListDelegate : NSObject <goSeqRefInterface, ProoverListDelegate> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onProoverFindError:(NSError* _Nullable)err;
- (void)onProoverFindsuccess:(ProoverList* _Nullable)list;
@end

#endif