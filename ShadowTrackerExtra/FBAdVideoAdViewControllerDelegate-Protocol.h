//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAdVideoAdViewController, NSError, UIEvent;

@protocol FBAdVideoAdViewControllerDelegate <NSObject>
- (void)videoAdViewControllerSkipped:(FBAdVideoAdViewController *)arg1;
- (void)videoAdViewControllerWillClose:(FBAdVideoAdViewController *)arg1;
- (void)videoAdViewControllerWantsToProcessCTA:(FBAdVideoAdViewController *)arg1 withEvent:(UIEvent *)arg2;
- (void)videoAdViewControllerWantsToLogImpression:(FBAdVideoAdViewController *)arg1;
- (void)videoAdViewControllerComplete:(FBAdVideoAdViewController *)arg1;
- (void)videoAdViewController:(FBAdVideoAdViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)videoAdViewControllerDidLoad:(FBAdVideoAdViewController *)arg1;
@end

