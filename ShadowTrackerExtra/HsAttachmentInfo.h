//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HsAttachmentInfo : NSObject
{
    NSString *_contentType;
    NSString *_fileExtension;
    NSString *_remoteURLPath;
    NSString *_localFileName;
    unsigned long long _size;
}

@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *localFileName; // @synthesize localFileName=_localFileName;
@property(retain, nonatomic) NSString *remoteURLPath; // @synthesize remoteURLPath=_remoteURLPath;
@property(retain, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

