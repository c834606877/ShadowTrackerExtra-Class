//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PLCrashReportProcessorInfo;

@interface PLCrashReportBinaryImageInfo : NSObject
{
    PLCrashReportProcessorInfo *_processorInfo;
    unsigned long long _baseAddress;
    unsigned long long _imageSize;
    NSString *_imageName;
    _Bool _hasImageUUID;
    NSString *_imageUUID;
    unsigned int _version;
    unsigned int _compatibility;
}

@property(readonly, nonatomic) unsigned int compatibility; // @synthesize compatibility=_compatibility;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *imageUUID; // @synthesize imageUUID=_imageUUID;
@property(readonly, nonatomic) _Bool hasImageUUID; // @synthesize hasImageUUID=_hasImageUUID;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) unsigned long long imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) unsigned long long imageBaseAddress; // @synthesize imageBaseAddress=_baseAddress;
@property(readonly, nonatomic) PLCrashReportProcessorInfo *codeType; // @synthesize codeType=_processorInfo;
- (void)dealloc;
- (id)initWithCodeType:(id)arg1 baseAddress:(unsigned long long)arg2 size:(unsigned long long)arg3 name:(id)arg4 uuid:(id)arg5 version:(unsigned int)arg6 compatibility:(unsigned int)arg7;

@end

