//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADVideoController, UIImage;
@protocol GADMediaContentDisplaying;

@interface GADMediaContent : NSObject
{
    UIImage *_mainImage;
    id <GADMediaContentDisplaying> _internalMediaContent;
    GADVideoController *_videoController;
    _Bool _hasVideoContent;
}

@property(retain, nonatomic) id <GADMediaContentDisplaying> internalMediaContent; // @synthesize internalMediaContent=_internalMediaContent;
@property(readonly, nonatomic) _Bool hasVideoContent; // @synthesize hasVideoContent=_hasVideoContent;
@property(readonly, nonatomic) GADVideoController *videoController; // @synthesize videoController=_videoController;
@property(retain, nonatomic) UIImage *mainImage; // @synthesize mainImage=_mainImage;
- (void).cxx_destruct;
@property(readonly, nonatomic) double aspectRatio;

@end

