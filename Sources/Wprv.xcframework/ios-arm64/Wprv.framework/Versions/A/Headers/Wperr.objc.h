// Objective-C API for talking to github.com/ProovGroup/weproov-sdk-go/wperr Go package.
//   gobind -lang=objc github.com/ProovGroup/weproov-sdk-go/wperr
//
// File is generated by gobind. Do not edit.

#ifndef __Wperr_H__
#define __Wperr_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class WperrWperror;
@class WperrWperrors;

/**
 * error retourner
"responce.read.error.not_possible"
"api.unknow.error"
 */
@interface WperrWperror : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long code;
@property (nonatomic) NSString* _Nonnull type;
@property (nonatomic) NSString* _Nonnull message;
@property (nonatomic) long timestamp;
@end

@interface WperrWperrors : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long status;
// skipped field Wperrors.Errors with unsupported type: []github.com/ProovGroup/weproov-sdk-go/wperr.Wperror

@property (nonatomic) long timestamp;
/**
 * 	Error() permet de correspondre au format golang des
	erreur.
	elle renvoy la string qui seras utiliser dans les app/service pour pouvoirs
	choisir les traduction le type de l'errer
 */
- (NSString* _Nonnull)error;
/**
 * 	Message permet de recuperrer le message de l'error
 */
- (NSString* _Nonnull)message;
/**
 * 	Error() permet de correspondre au format golang des
	erreur.
	elle renvoy la string qui seras utiliser dans les app/service pour pouvoirs
	choisir les traduction le type de l'errer
 */
- (NSString* _Nonnull)row;
@end

/**
 * 	Permet de lire les Erreur transmise par l'api

	retourne un erreur generique qui a ete creer par
	une WpErrors

	status int: Code retourner par la requette http
	body string: le corp de la requette
 */
FOUNDATION_EXPORT BOOL WperrFromHttp(long status, NSData* _Nullable body, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT WperrWperrors* _Nullable WperrGetWpErrors(NSError* _Nullable e);

FOUNDATION_EXPORT BOOL WperrIsAllreadyRegister(NSError* _Nullable e);

FOUNDATION_EXPORT BOOL WperrIsMailError(NSError* _Nullable e);

FOUNDATION_EXPORT BOOL WperrIsNetworkError(NSError* _Nullable e);

FOUNDATION_EXPORT BOOL WperrIsPasswordError(NSError* _Nullable e);

FOUNDATION_EXPORT BOOL WperrIsTrErrors(NSError* _Nullable e);

FOUNDATION_EXPORT BOOL WperrIsUserUnauthorized(NSError* _Nullable e);

// skipped function IsWpErrors with unsupported parameter or return types


/**
 * 	Creer une nouvelle WpErrors

	code int: le code coresspedant au status et aut code error
	Type string: seras la clee qui va me permetre de choisire une traduction
	message string: le message qui est destiner au developeur tombans sur cette error
 */
FOUNDATION_EXPORT BOOL WperrNewErrors(long code, NSString* _Nullable Type, NSString* _Nullable message, NSError* _Nullable* _Nullable error);

/**
 * 	Creer une nouvelle WpErrors

	code int: le code coresspedant au status et aut code error
	Type string: seras la clee qui va me permetre de choisire une traduction
	message string: le message qui est destiner au developeur tombans sur cette error
 */
FOUNDATION_EXPORT BOOL WperrNewSErrors(NSString* _Nullable message, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT void WperrSendErrorToSentry(NSError* _Nullable e);

#endif
