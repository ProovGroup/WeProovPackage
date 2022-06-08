// Objective-C API for talking to github.com/ProovGroup/weproov-sdk-go/pulldownload Go package.
//   gobind -lang=objc github.com/ProovGroup/weproov-sdk-go/pulldownload
//
// File is generated by gobind. Do not edit.

#ifndef __Pulldownload_H__
#define __Pulldownload_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"

#include "Cachedimage.objc.h"
#include "S3image.objc.h"
#include "Utils.objc.h"

@class PulldownloadStruct;
@protocol PulldownloadDownloadable;
@class PulldownloadDownloadable;
@protocol PulldownloadManagerDelegate;
@class PulldownloadManagerDelegate;

@protocol PulldownloadDownloadable <NSObject>
- (id<PulldownloadDownloadable> _Nullable)asDownloadable;
- (PulldownloadStruct* _Nullable)download:(id<PulldownloadManagerDelegate> _Nullable)delegate;
@end

@protocol PulldownloadManagerDelegate <NSObject>
- (void)onDownloadProgress:(long)total finished:(long)finished;
@end

@interface PulldownloadStruct : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
/**
 * 		Total est le nombre de total de telechargement demander
		il seras aussi le premiers argument l'ors du callback
		du progress

		totalLock est le mutex pour proteger la variable
 */
@property (nonatomic) long total;
/**
 * 		Finished est le nombre de total de telechargement terminer
		il seras aussi le second argument l'ors du callback
		du progress

		v est le mutex pour proteger la variable
 */
@property (nonatomic) long finished;
/**
 * 		Success est le nombre de total de telechargement terminer Reussi

		successLock est le mutex pour proteger la variable
 */
@property (nonatomic) long success;
/**
 * 		Error est le nombre de total de telechargement terminer qui a rater

		successLock est le mutex pour proteger la variable
 */
@property (nonatomic) long error;
// skipped field Struct.Errors with unsupported type: []error

/**
 * 		Manager est la classe qui serviras pour les callback

		managerLock est le mutex pour proteger la variable
 */
@property (nonatomic) id<PulldownloadManagerDelegate> _Nullable manager;
- (BOOL)downloadAdditionalCalque:(long)id_ templateId:(long)templateId processId:(long)processId num:(long)num;
/**
 * 	Download un calque grace a son id (cached_id)
	une fois terminer la fonction OnCalqueSuccess
	du delegate sera appeler
 */
- (BOOL)downloadCalque:(long)id_ templateId:(long)templateId processId:(long)processId;
/**
 * 	Download l'image en signalent que l'image sera un dropin

	une fois terminer la fonction OnDropinSuccess du
	delegate sera appeler

	@key = "image/{proov_code}/{hash}.jpeg"
	@delegate
 */
- (BOOL)downloadDropin:(NSString* _Nullable)key;
/**
 * 	Download l'image en signalent que l'image sera un dropoff

	une fois terminer la fonction OnDropoffSuccess du
	delegate sera appeler

	@key = "image/{proov_code}/{hash}.jpeg"
 */
- (BOOL)downloadDropoff:(NSString* _Nullable)key;
- (NSString* _Nonnull)getLastErrorString;
- (BOOL)haveInCacheS3:(NSString* _Nullable)key;
- (BOOL)haveToDownload;
- (void)printError;
/**
 * 	Wait fait attendre un coeure pour le telechargement

	la fonction ne retourneras pas tant que le
	telechargement n'est pas terminer

	if true == tout ses bien passer
 */
- (BOOL)waits;
@end

FOUNDATION_EXPORT PulldownloadStruct* _Nullable PulldownloadNew(id<PulldownloadManagerDelegate> _Nullable manager);

@class PulldownloadDownloadable;

@class PulldownloadManagerDelegate;

/**
 * 	le delegate
	Serviras de callback de telechargement
 */
@interface PulldownloadDownloadable : NSObject <goSeqRefInterface, PulldownloadDownloadable> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (id<PulldownloadDownloadable> _Nullable)asDownloadable;
/**
 * 		Download return Struct initialized
 */
- (PulldownloadStruct* _Nullable)download:(id<PulldownloadManagerDelegate> _Nullable)delegate;
@end

/**
 * 	ManagerDelegate
	permet de recuperer le pourcentage d'avancement du telechargment
 */
@interface PulldownloadManagerDelegate : NSObject <goSeqRefInterface, PulldownloadManagerDelegate> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onDownloadProgress:(long)total finished:(long)finished;
@end

#endif
