//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKProductsRequestDelegate.h"

@class NSString, SKProductsRequest;

@interface GADProductsRequest : NSObject <SKProductsRequestDelegate>
{
    SKProductsRequest *_request;
    CDUnknownBlockType _completionHandler;
    GADProductsRequest *_retainCycle;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasCompleted
}

- (void).cxx_destruct;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)completedWithValidProducts:(id)arg1 invalidProductIDs:(id)arg2 error:(id)arg3;
- (void)startWithProductIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

