// Objective-C API for talking to github.com/ProovGroup/weproov-sdk-go/rights Go package.
//   gobind -lang=objc github.com/ProovGroup/weproov-sdk-go/rights
//
// File is generated by gobind. Do not edit.

#ifndef __Rights_H__
#define __Rights_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"

#include "Keyvalue.objc.h"
#include "Wperr.objc.h"

@class RightsMsgInApp;
@class RightsOption;
@class RightsRightCreateResponce;
@class RightsStruct;
@class RightsSubscription;
@protocol RightsPurchaseDelegate;
@class RightsPurchaseDelegate;
@protocol RightsRightDelegate;
@class RightsRightDelegate;

@protocol RightsPurchaseDelegate <NSObject>
- (void)onPurchaseAllready;
- (void)onPurchaseError:(NSError* _Nullable)err;
- (void)onPurchaseSuccess;
@end

@protocol RightsRightDelegate <NSObject>
- (void)onHaveRightToCreate;
- (void)onRightError:(NSError* _Nullable)p0;
- (void)onRightPaymentNeeded;
@end

@interface RightsMsgInApp : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull platform;
@property (nonatomic) NSString* _Nonnull productId;
@property (nonatomic) NSString* _Nonnull receipt;
@property (nonatomic) NSString* _Nonnull transactionId;
@end

@interface RightsOption : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long id_;
@property (nonatomic) long userId;
// skipped field Option.Credit with unsupported type: *int

@property (nonatomic) long used;
@property (nonatomic) NSString* _Nonnull code;
@property (nonatomic) NSString* _Nonnull source;
@property (nonatomic) BOOL boolean;
@property (nonatomic) BOOL disable;
// skipped field Option.SubsciptionId with unsupported type: *int

@end

@interface RightsRightCreateResponce : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) BOOL right;
@end

@interface RightsStruct : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
/**
 * 		id de l'utilisateur
 */
@property (nonatomic) long id_;
/**
 * 		Prenom de l'utilisateur
 */
@property (nonatomic) NSString* _Nonnull firstName;
/**
 * 		Nom de l'utilisateur
 */
@property (nonatomic) NSString* _Nonnull lastName;
/**
 * 		Email de l'utilisateur
 */
@property (nonatomic) NSString* _Nonnull email;
/**
 * 		subscription id
 */
@property (nonatomic) long subscriptionId;
// skipped field Struct.Credits with unsupported type: github.com/ProovGroup/weproov-sdk-go/rights.Options

/**
 * 		Permet de bloquer l'utilisateur
 */
@property (nonatomic) BOOL active;
/**
 * 		Permet de s'avoir si un utilisateur doit etre synchroniser
		avec sa platform
 */
@property (nonatomic) BOOL needSync;
/**
 * 		Permet de s'avoir si un utilisateur a access au plans de test
 */
@property (nonatomic) BOOL accessTest;
// skipped field Struct.Subscription with unsupported type: github.com/ProovGroup/weproov-sdk-go/rights.Subscription

- (long)getDayEndTrial;
- (long)getFullCredits;
- (long)getMonthlyWeproovs;
- (long)getPermCredits;
- (NSString* _Nonnull)getPermName;
- (BOOL)hasPremiumSupport;
/**
 * 	HaveRightToCreate
	sert a verifier si le compte a
	le drois de ceer un rapport a partire d'un template
 */
- (void)haveRightToCreate:(id<RightsRightDelegate> _Nullable)delegate;
- (BOOL)haveRightToCreateSync:(BOOL* _Nullable)ret0_ error:(NSError* _Nullable* _Nullable)error;
- (BOOL)isLimitedPro;
- (BOOL)isPremium;
/**
 * 	Lis une JSON string pour en extraire les droit
 */
- (BOOL)reloadFromString:(NSString* _Nullable)value;
/**
 * 	Sauvgarde dans la bdd sur le device l'utilisateur
 */
- (void)saveLocal;
- (long)state;
- (BOOL)unlimitedReports;
- (void)useCredis;
- (BOOL)wasInTrial;
@end

@interface RightsSubscription : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long id_;
@property (nonatomic) NSString* _Nonnull platform;
@property (nonatomic) BOOL isTrial;
@property (nonatomic) NSString* _Nonnull reference;
@property (nonatomic) NSString* _Nonnull name;
@property (nonatomic) long userId;
// skipped field Subscription.Start with unsupported type: time.Time

// skipped field Subscription.End with unsupported type: time.Time

// skipped field Subscription.Options with unsupported type: github.com/ProovGroup/weproov-sdk-go/rights.Options

// skipped field Subscription.CacheControl with unsupported type: *string

@end

FOUNDATION_EXPORT NSString* _Nonnull const RightsCURRENT_RIGHT_KEY;
FOUNDATION_EXPORT const int64_t RightsPREMIUM;
FOUNDATION_EXPORT const int64_t RightsREGULAR;
FOUNDATION_EXPORT const int64_t RightsTRIAL;
FOUNDATION_EXPORT const int64_t RightsTRIALEXPIRED;

@interface Rights : NSObject
// skipped variable Current with unsupported type: github.com/ProovGroup/weproov-sdk-go/rights.Struct

@end

/**
 * 	permet de recuperer les droits
 */
FOUNDATION_EXPORT RightsStruct* _Nullable RightsGetCurrent(void);

/**
 * 	Lancer au a l'initialisation
	permet de recuperer les dernier Droits Recupperer

	appeler a partire de la library
 */
FOUNDATION_EXPORT void RightsInitRight(void);

FOUNDATION_EXPORT void RightsPurchase(NSString* _Nullable productId, NSString* _Nullable receipt, NSString* _Nullable transactionId, id<RightsPurchaseDelegate> _Nullable delegate);

FOUNDATION_EXPORT BOOL RightsPurchaseSync(NSString* _Nullable productId, NSString* _Nullable receipt, NSString* _Nullable transactionId, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT BOOL RightsRefreshRight(NSError* _Nullable* _Nullable error);

@class RightsPurchaseDelegate;

@class RightsRightDelegate;

@interface RightsPurchaseDelegate : NSObject <goSeqRefInterface, RightsPurchaseDelegate> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onPurchaseAllready;
- (void)onPurchaseError:(NSError* _Nullable)err;
- (void)onPurchaseSuccess;
@end

@interface RightsRightDelegate : NSObject <goSeqRefInterface, RightsRightDelegate> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onHaveRightToCreate;
- (void)onRightError:(NSError* _Nullable)p0;
- (void)onRightPaymentNeeded;
@end

#endif