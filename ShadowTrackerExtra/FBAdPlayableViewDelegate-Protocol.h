//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAdPlayableView, NSError;

@protocol FBAdPlayableViewDelegate <NSObject>
- (void)playableViewDidTerminate:(FBAdPlayableView *)arg1;
- (void)playableView:(FBAdPlayableView *)arg1 didFailWithError:(NSError *)arg2;
- (void)playableViewWillClose:(FBAdPlayableView *)arg1;
- (void)playableViewClicked:(FBAdPlayableView *)arg1;
- (void)playableViewDidCompleteForcedView:(FBAdPlayableView *)arg1;
- (void)playableViewWillLogImpression:(FBAdPlayableView *)arg1;
@end

