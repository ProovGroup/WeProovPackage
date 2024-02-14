// Objective-C API for talking to github.com/ProovGroup/weproov-sdk-go/items Go package.
//   gobind -lang=objc github.com/ProovGroup/weproov-sdk-go/items
//
// File is generated by gobind. Do not edit.

#ifndef __Items_H__
#define __Items_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"

#include "Translations.objc.h"
#include "S3image.objc.h"
#include "Wperr.objc.h"
#include "Geoloc.objc.h"
#include "Pulldownload.objc.h"

@class ItemsChecklist;
@class ItemsDamage;
@class ItemsFormItemStruct;
@class ItemsFormStruct;
@class ItemsInfo;
@class ItemsInfosParameters;
@class ItemsList;
@class ItemsProcess;
@class ItemsProcessInfos;
@class ItemsStruct;
@class ItemsSupport;
@protocol ItemsFormGetDelegate;
@class ItemsFormGetDelegate;
@protocol ItemsFormPostDelegate;
@class ItemsFormPostDelegate;
@protocol ItemsFullDelegate;
@class ItemsFullDelegate;
@protocol ItemsListDelegate;
@class ItemsListDelegate;

@protocol ItemsFormGetDelegate <NSObject>
- (void)formGetError:(NSError* _Nullable)err;
- (void)formGetSuccess:(ItemsFormStruct* _Nullable)form;
@end

@protocol ItemsFormPostDelegate <NSObject>
- (void)formPostError:(NSError* _Nullable)err;
- (void)formPostSuccess;
@end

@protocol ItemsFullDelegate <NSObject>
- (void)onFullError:(NSError* _Nullable)err;
- (void)onFullSuccess:(ItemsStruct* _Nullable)item;
@end

@protocol ItemsListDelegate <NSObject>
- (void)onItemsFindError:(NSError* _Nullable)err;
- (void)onItemsFindsuccess:(ItemsList* _Nullable)list;
@end

@interface ItemsChecklist : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long id_;
@property (nonatomic) NSString* _Nonnull name;
@property (nonatomic) NSString* _Nonnull value;
@property (nonatomic) NSString* _Nonnull type;
@property (nonatomic) long itemsId;
@property (nonatomic) long title;
// skipped field Checklist.CreatedAt with unsupported type: time.Time

// skipped field Checklist.UpdatedAt with unsupported type: time.Time

// skipped field Checklist.Title_ with unsupported type: github.com/ProovGroup/weproov-sdk-go/translations.Translation

@end

@interface ItemsDamage : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long id_;
@property (nonatomic) long index;
@property (nonatomic) long choice;
@property (nonatomic) NSString* _Nonnull description;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double left;
@property (nonatomic) double top;
// skipped field Damage.AdditionalPicture_1_ with unsupported type: github.com/ProovGroup/weproov-sdk-go/items.s3picture

// skipped field Damage.AdditionalPicture_2_ with unsupported type: github.com/ProovGroup/weproov-sdk-go/items.s3picture

// skipped field Damage.AdditionalPicture_3_ with unsupported type: github.com/ProovGroup/weproov-sdk-go/items.s3picture

// skipped field Damage.MatrixAnswers with unsupported type: []string

@property (nonatomic) BOOL isPrice;
@property (nonatomic) long matrixPrice;
- (long)count;
- (NSData* _Nullable)getData:(long)index;
- (NSString* _Nonnull)getPicturePathS3:(long)index error:(NSError* _Nullable* _Nullable)error;
// skipped method Damage.GetPicturesPathS3 with unsupported parameter or return types

- (BOOL)havePictureToDownload;
@end

@interface ItemsFormItemStruct : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long id_;
// skipped field FormItemStruct.CreatedAt with unsupported type: time.Time

// skipped field FormItemStruct.UpdatedAt with unsupported type: time.Time

@property (nonatomic) long title;
// skipped field FormItemStruct.Title_ with unsupported type: github.com/ProovGroup/weproov-sdk-go/translations.Translation

@property (nonatomic) NSString* _Nonnull name;
@property (nonatomic) NSString* _Nonnull type;
@property (nonatomic) NSString* _Nonnull value;
@property (nonatomic) long itemsId;
// skipped field FormItemStruct.Parameters with unsupported type: github.com/ProovGroup/weproov-sdk-go/items.InfosParameters

- (ItemsInfosParameters* _Nullable)getParams;
- (NSString* _Nonnull)getTr;
@end

@interface ItemsFormStruct : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field FormStruct.FormItems with unsupported type: []github.com/ProovGroup/weproov-sdk-go/items.FormItemStruct

@property (nonatomic) long categoryId;
- (long)formItemsCount;
- (ItemsFormItemStruct* _Nullable)formItemsGet:(long)index;
- (void)post:(id<ItemsFormPostDelegate> _Nullable)delegate;
- (BOOL)postSync:(NSError* _Nullable* _Nullable)error;
@end

@interface ItemsInfo : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long id_;
@property (nonatomic) NSString* _Nonnull name;
@property (nonatomic) NSString* _Nonnull value;
@property (nonatomic) NSString* _Nonnull type;
@property (nonatomic) long itemsId;
@property (nonatomic) long title;
// skipped field Info.CreatedAt with unsupported type: time.Time

// skipped field Info.UpdatedAt with unsupported type: time.Time

// skipped field Info.Title_ with unsupported type: github.com/ProovGroup/weproov-sdk-go/translations.Translation

- (NSString* _Nonnull)getFormatedRow;
@end

@interface ItemsInfosParameters : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
// skipped field InfosParameters.List with unsupported type: []int

// skipped field InfosParameters.List_ with unsupported type: []github.com/ProovGroup/weproov-sdk-go/translations.Translation

- (long)getListIdByPosition:(NSString* _Nullable)tr;
- (long)getListPosition:(long)pose;
- (NSString* _Nonnull)getListTr:(long)id_;
- (long)listCount;
@end

@interface ItemsList : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull find;
@property (nonatomic) long offset;
@property (nonatomic) long limit;
@property (nonatomic) BOOL haveMore;
// skipped field List.Result with unsupported type: []github.com/ProovGroup/weproov-sdk-go/items.Struct

- (long)count;
- (ItemsStruct* _Nullable)get:(long)num;
- (void)next:(id<ItemsListDelegate> _Nullable)delegate;
@end

@interface ItemsProcess : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long id_;
@property (nonatomic) NSString* _Nonnull name;
@property (nonatomic) long s3pictureId;
// skipped field Process.Picture_ with unsupported type: github.com/ProovGroup/weproov-sdk-go/items.s3picture

// skipped field Process.Infos with unsupported type: interface{}

@property (nonatomic) NSString* _Nonnull type;
@property (nonatomic) long itemsId;
@property (nonatomic) long title;
// skipped field Process.Damages with unsupported type: []github.com/ProovGroup/weproov-sdk-go/items.Damage

// skipped field Process.CreatedAt with unsupported type: time.Time

// skipped field Process.UpdatedAt with unsupported type: time.Time

// skipped field Process.Title_ with unsupported type: github.com/ProovGroup/weproov-sdk-go/translations.Translation

- (NSData* _Nullable)getData;
@end

@interface ItemsProcessInfos : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long choice;
@property (nonatomic) long index;
@property (nonatomic) NSString* _Nonnull description;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double left;
@property (nonatomic) double top;
@end

@interface ItemsStruct : NSObject <goSeqRefInterface, PulldownloadDownloadable> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long id_;
@property (nonatomic) NSString* _Nonnull identifieur;
@property (nonatomic) NSString* _Nonnull name;
@property (nonatomic) NSString* _Nonnull value;
@property (nonatomic) NSString* _Nonnull valueNorme;
@property (nonatomic) NSString* _Nonnull refStr;
@property (nonatomic) long title;
@property (nonatomic) long ownerId;
// skipped field Struct.Geoloc with unsupported type: github.com/ProovGroup/weproov-sdk-go/geoloc.Struct

@property (nonatomic) long categoryId;
@property (nonatomic) long s3pictureId;
// skipped field Struct.CreatedAt with unsupported type: time.Time

// skipped field Struct.UpdatedAt with unsupported type: time.Time

// skipped field Struct.Title_ with unsupported type: github.com/ProovGroup/weproov-sdk-go/translations.Translation

// skipped field Struct.Preview with unsupported type: github.com/ProovGroup/weproov-sdk-go/items.s3picture

// skipped field Struct.Infos with unsupported type: []github.com/ProovGroup/weproov-sdk-go/items.Info

// skipped field Struct.Checklists with unsupported type: []github.com/ProovGroup/weproov-sdk-go/items.Checklist

// skipped field Struct.Supports with unsupported type: []github.com/ProovGroup/weproov-sdk-go/items.Support

// skipped field Struct.Process with unsupported type: []github.com/ProovGroup/weproov-sdk-go/items.Process

/**
 * 	renvoy la version downloadable
 */
- (id<PulldownloadDownloadable> _Nullable)asDownloadable;
/**
 * 	permet de preparer la structure pulldownload pour le telechargement
	des images
 */
- (PulldownloadStruct* _Nullable)download:(id<PulldownloadManagerDelegate> _Nullable)delegate;
/**
 * 	Permer de recuperer la totaliter des informations de l items
	de facons asynchrone
 */
- (void)getFull:(id<ItemsFullDelegate> _Nullable)delegate;
/**
 * 	Permer de recuperer la totaliter des informations de l items
	de facons synchrone
 */
- (ItemsStruct* _Nullable)getFullSync:(NSError* _Nullable* _Nullable)error;
/**
 * 	Retourn une infos par raport a son index dans le tableau
 */
- (ItemsInfo* _Nullable)getInfo:(long)num;
/**
 * 	Permet de faire passer la date du framework au app
 */
- (int64_t)getLastUpdateUnix;
/**
 * 	Permet de telecharger la preview d'une image
 */
- (void)getPreviewThumb:(id<S3imageThumbDelegate> _Nullable)delegate;
/**
 * 	Renvoy la traduction du champs qui a ete utiliser pour
	l'identification du bien
 */
- (NSString* _Nonnull)getTr;
/**
 * 	Retourn le nombre d'infos actuellement dans l'item
 */
- (long)infoCount;
/**
 * 	check si le path s3 corespond a celui qui est passer en parametre
 */
- (BOOL)previewIs:(NSString* _Nullable)path;
@end

@interface ItemsSupport : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) long id_;
@property (nonatomic) NSString* _Nonnull name;
@property (nonatomic) long s3pictureId;
// skipped field Support.Picture_ with unsupported type: github.com/ProovGroup/weproov-sdk-go/items.s3picture

@property (nonatomic) NSString* _Nonnull type;
@property (nonatomic) long itemsId;
@property (nonatomic) long title;
// skipped field Support.CreatedAt with unsupported type: time.Time

// skipped field Support.UpdatedAt with unsupported type: time.Time

// skipped field Support.Title_ with unsupported type: github.com/ProovGroup/weproov-sdk-go/translations.Translation

- (NSData* _Nullable)getData;
@end

FOUNDATION_EXPORT void ItemsFormGet(NSString* _Nullable formType, id<ItemsFormGetDelegate> _Nullable delegate);

FOUNDATION_EXPORT ItemsFormStruct* _Nullable ItemsFormGetSync(NSString* _Nullable formType, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT void ItemsGetList(NSString* _Nullable find, long offset, long limit, id<ItemsListDelegate> _Nullable delegate);

FOUNDATION_EXPORT ItemsList* _Nullable ItemsGetListSync(NSString* _Nullable find, long offset, long limit, NSError* _Nullable* _Nullable error);

@class ItemsFormGetDelegate;

@class ItemsFormPostDelegate;

@class ItemsFullDelegate;

@class ItemsListDelegate;

@interface ItemsFormGetDelegate : NSObject <goSeqRefInterface, ItemsFormGetDelegate> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)formGetError:(NSError* _Nullable)err;
- (void)formGetSuccess:(ItemsFormStruct* _Nullable)form;
@end

@interface ItemsFormPostDelegate : NSObject <goSeqRefInterface, ItemsFormPostDelegate> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)formPostError:(NSError* _Nullable)err;
- (void)formPostSuccess;
@end

@interface ItemsFullDelegate : NSObject <goSeqRefInterface, ItemsFullDelegate> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onFullError:(NSError* _Nullable)err;
- (void)onFullSuccess:(ItemsStruct* _Nullable)item;
@end

@interface ItemsListDelegate : NSObject <goSeqRefInterface, ItemsListDelegate> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onItemsFindError:(NSError* _Nullable)err;
- (void)onItemsFindsuccess:(ItemsList* _Nullable)list;
@end

#endif