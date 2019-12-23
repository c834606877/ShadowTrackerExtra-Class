//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsAttachmentPreviewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, UIViewController;

@interface HSAttachmentHandler : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, HsAttachmentPreviewDelegate>
{
    _Bool _shouldPresentCustomPreviewController;
    _Bool _isGIFSupported;
    _Bool _shouldCompressSelectedAttachment;
    id <HsAttachmentHandlerDelegate> _delegate;
    unsigned long long _source;
    UIViewController *_presentingViewController;
}

@property __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property unsigned long long source; // @synthesize source=_source;
@property __weak id <HsAttachmentHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldCompressSelectedAttachment; // @synthesize shouldCompressSelectedAttachment=_shouldCompressSelectedAttachment;
@property(nonatomic) _Bool isGIFSupported; // @synthesize isGIFSupported=_isGIFSupported;
@property(nonatomic) _Bool shouldPresentCustomPreviewController; // @synthesize shouldPresentCustomPreviewController=_shouldPresentCustomPreviewController;
- (void).cxx_destruct;
- (void)showAlertForImageExceedingLimit;
- (void)showAlertForGIFNotSupported;
- (id)extensionFromAttachmentType:(unsigned long long)arg1;
- (unsigned long long)attachmentTypeFromMediaInfo:(id)arg1;
- (id)dataForImage:(id)arg1 withInfo:(id)arg2;
- (id)resizeImage:(id)arg1 OfType:(unsigned long long)arg2;
- (void)prepareImage:(id)arg1 ofType:(unsigned long long)arg2 withInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)imageSelectionFailed;
- (void)didSelectAttachmentWithInfo:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)presentAttachmentPickerOverViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1 source:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
