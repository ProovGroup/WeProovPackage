// Objective-C API for talking to github.com/ProovGroup/weproov-sdk-go/team Go package.
//   gobind -lang=objc github.com/ProovGroup/weproov-sdk-go/team
//
// File is generated by gobind. Do not edit.

#ifndef __Team_H__
#define __Team_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"

#include "Wperr.objc.h"

@class TeamList;
@class TeamStruct;
@protocol TeamDelegate;
@class TeamDelegate;
@protocol TeamListDelegate;
@class TeamListDelegate;

@protocol TeamDelegate <NSObject>
- (void)onTeamError:(NSError* _Nullable)err;
- (void)onTeamSuccess;
@end

@protocol TeamListDelegate <NSObject>
- (void)onTeamFindError:(NSError* _Nullable)err;
- (void)onTeamFindsuccess:(TeamList* _Nullable)list;
@end

@interface TeamList : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull find;
@property (nonatomic) long offset;
@property (nonatomic) long limit;
@property (nonatomic) BOOL haveMore;
// skipped field List.Result with unsupported type: []github.com/ProovGroup/weproov-sdk-go/team.Struct

- (long)count;
- (TeamStruct* _Nullable)get:(long)num;
- (void)next:(id<TeamListDelegate> _Nullable)delegate;
@end

@interface TeamStruct : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long id_;
@property (nonatomic) NSString* _Nonnull firstName;
@property (nonatomic) NSString* _Nonnull lastName;
@property (nonatomic) NSString* _Nonnull email;
@property (nonatomic) NSString* _Nonnull cell;
- (NSString* _Nonnull)fullName;
- (void)remove:(id<TeamDelegate> _Nullable)delegate;
@end

FOUNDATION_EXPORT void TeamAddToTeam(NSString* _Nullable email, id<TeamDelegate> _Nullable delegate);

FOUNDATION_EXPORT void TeamGetList(NSString* _Nullable find, long offset, long limit, id<TeamListDelegate> _Nullable delegate);

FOUNDATION_EXPORT TeamList* _Nullable TeamGetListSync(NSString* _Nullable find, long offset, long limit, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT BOOL TeamRemoveSync(long id_, NSError* _Nullable* _Nullable error);

@class TeamDelegate;

@class TeamListDelegate;

@interface TeamDelegate : NSObject <goSeqRefInterface, TeamDelegate> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onTeamError:(NSError* _Nullable)err;
- (void)onTeamSuccess;
@end

@interface TeamListDelegate : NSObject <goSeqRefInterface, TeamListDelegate> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onTeamFindError:(NSError* _Nullable)err;
- (void)onTeamFindsuccess:(TeamList* _Nullable)list;
@end

#endif
