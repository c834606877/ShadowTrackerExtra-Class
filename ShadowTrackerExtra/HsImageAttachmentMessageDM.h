//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HsAttachmentMessageDM.h"

@class NSString, NSURL;

@interface HsImageAttachmentMessageDM : HsAttachmentMessageDM
{
    NSURL *_thumbnailURL;
    NSString *_thumbnailLocalName;
}

@property(retain, nonatomic) NSString *thumbnailLocalName; // @synthesize thumbnailLocalName=_thumbnailLocalName;
@property(retain, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
- (void).cxx_destruct;
- (id)attachmentDisplayImage;
- (_Bool)isUISupported;
- (void)merge:(id)arg1;
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 isAdminMessage:(_Bool)arg4 imageRemoteURL:(id)arg5 imageLocalName:(id)arg6 fileExtension:(id)arg7 thumbnailURL:(id)arg8 contentType:(id)arg9 size:(long long)arg10 isSecureAttachment:(_Bool)arg11 messageType:(unsigned long long)arg12;

@end

