//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBDisplayAdAdapter, NSError, NSString;

@protocol FBDisplayAdAdapterDelegate <NSObject>
- (void)adapterWillLogImpression:(FBDisplayAdAdapter *)arg1;
- (void)adapter:(FBDisplayAdAdapter *)arg1 didFailWithError:(NSError *)arg2;
- (void)adapterDidLoad:(FBDisplayAdAdapter *)arg1;
- (void)adapterDidClick:(FBDisplayAdAdapter *)arg1 url:(NSString *)arg2 playerHandles:(_Bool)arg3;

@optional
- (void)adapterServerRewardFailed:(FBDisplayAdAdapter *)arg1;
- (void)adapterServerRewardSuccess:(FBDisplayAdAdapter *)arg1;
- (void)adapterVideoDidComplete:(FBDisplayAdAdapter *)arg1;
- (void)adapterDidUnload:(FBDisplayAdAdapter *)arg1;
- (void)adapterWillUnload:(FBDisplayAdAdapter *)arg1;
- (void)adapterDidFinishHandlingClick:(FBDisplayAdAdapter *)arg1;
@end

