//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdStoriesPageView, NSError;

@protocol FBAdStoriesPageViewDelegate <NSObject>
- (void)pageView:(FBAdStoriesPageView *)arg1 didChangeCurrentTime:(CDStruct_1b6d18a9)arg2;
- (void)pageViewDidEndDisplayingPage:(FBAdStoriesPageView *)arg1;
- (void)pageView:(FBAdStoriesPageView *)arg1 didFailToPrepareContentWithError:(NSError *)arg2;
- (void)pageViewDidPrepareContent:(FBAdStoriesPageView *)arg1;
@end

