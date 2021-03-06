// Objective-C API for talking to github.com/ProovGroup/weproov-sdk-go/mission Go package.
//   gobind -lang=objc github.com/ProovGroup/weproov-sdk-go/mission
//
// File is generated by gobind. Do not edit.

#ifndef __Mission_H__
#define __Mission_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"

#include "Wperr.objc.h"
#include "Cachedimage.objc.h"
#include "Geoloc.objc.h"
#include "Report.objc.h"
#include "User.objc.h"

@class MissionList;
@class MissionOwnerInfoStruct;
@class MissionStruct;
@protocol MissionListDelegate;
@class MissionListDelegate;

@protocol MissionListDelegate <NSObject>
- (void)onMissionFindError:(NSError* _Nullable)err;
- (void)onMissionFindSuccess:(MissionList* _Nullable)list;
@end

@interface MissionList : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull find;
@property (nonatomic) long offset;
@property (nonatomic) long limit;
@property (nonatomic) BOOL haveMore;
// skipped field List.Result with unsupported type: []github.com/ProovGroup/weproov-sdk-go/mission.Struct

- (long)count;
- (MissionStruct* _Nullable)get:(long)num;
- (void)next:(id<MissionListDelegate> _Nullable)delegate;
@end

@interface MissionOwnerInfoStruct : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull firstName;
@property (nonatomic) NSString* _Nonnull lastName;
@property (nonatomic) NSString* _Nonnull email;
@property (nonatomic) NSString* _Nonnull cell;
@end

@interface MissionStruct : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long id_;
@property (nonatomic) NSString* _Nonnull email;
@property (nonatomic) NSString* _Nonnull proovCode;
@property (nonatomic) NSString* _Nonnull title;
@property (nonatomic) NSString* _Nonnull description;
@property (nonatomic) GeolocStruct* _Nullable geoloc;
@property (nonatomic) long owner;
@property (nonatomic) ReportStruct* _Nullable report;
@property (nonatomic) long userLogo;
@property (nonatomic) UserStruct* _Nullable ownerInfos;
@property (nonatomic) UserStruct* _Nullable receivedInfos;
// skipped field Struct.DueDate with unsupported type: time.Time

// skipped field Struct.StartDate with unsupported type: time.Time

- (void)downloadPictureMission:(id<CachedimageDelegate> _Nullable)delegate;
- (int64_t)getDueDateUnix;
- (NSString* _Nonnull)getReportTr;
- (int64_t)getStartDateUnix;
- (BOOL)haveLogo;
- (NSString* _Nonnull)toJson;
@end

FOUNDATION_EXPORT MissionStruct* _Nullable MissionFromJson(NSString* _Nullable data, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT void MissionGetList(NSString* _Nullable mType, long offset, long limit, id<MissionListDelegate> _Nullable delegate);

FOUNDATION_EXPORT MissionList* _Nullable MissionGetListSync(NSString* _Nullable mType, long offset, long limit, NSError* _Nullable* _Nullable error);

@class MissionListDelegate;

@interface MissionListDelegate : NSObject <goSeqRefInterface, MissionListDelegate> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onMissionFindError:(NSError* _Nullable)err;
- (void)onMissionFindSuccess:(MissionList* _Nullable)list;
@end

#endif
