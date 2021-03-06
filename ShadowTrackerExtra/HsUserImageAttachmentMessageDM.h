//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HsImageAttachmentMessageDM.h"

@class NSString;

@interface HsUserImageAttachmentMessageDM : HsImageAttachmentMessageDM
{
    unsigned long long _state;
    NSString *_refersMessageId;
}

@property(retain, nonatomic) NSString *refersMessageId; // @synthesize refersMessageId=_refersMessageId;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)handleTapWithConversationListener:(id)arg1;
- (void)deleteAttachment;
- (id)attachmentDisplayImage;
- (void)checkAndReDownloadImage;
- (void)merge:(id)arg1;
- (void)updateState:(_Bool)arg1;
- (void)uploadImageWithUser:(id)arg1 conversationServerInfo:(id)arg2 shouldCompressImage:(_Bool)arg3 error:(id *)arg4;
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 imageRemoteURL:(id)arg4 imageLocalName:(id)arg5 fileExtension:(id)arg6 thumbnailURL:(id)arg7 contentType:(id)arg8 isSecureAttachment:(_Bool)arg9 size:(long long)arg10;

@end

