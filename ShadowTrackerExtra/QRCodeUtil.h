//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QRCodeUtil : NSObject
{
    struct CGRect mScanRect;
    double mImageSize;
    NSString *mLevel;
    int mOnColor;
    int mOffColor;
    int mScanTag;
}

- (void).cxx_destruct;
- (id)GetCachePath;
- (id)NewQRImageName;
- (_Bool)writeToFile:(id)arg1:(id)arg2;
- (id)generateQRImage:(id)arg1;
- (id)generateQRImage:(id)arg1:(id)arg2;
- (void)initData:(int)arg1:(id)arg2;
- (id)init;

@end

