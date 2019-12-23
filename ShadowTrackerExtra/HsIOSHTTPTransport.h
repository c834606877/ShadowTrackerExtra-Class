//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsHTTPTransport.h"

@class HSReachability, NSString;

@interface HsIOSHTTPTransport : NSObject <HsHTTPTransport>
{
    HSReachability *_reachability;
}

@property(retain) HSReachability *reachability; // @synthesize reachability=_reachability;
- (void).cxx_destruct;
- (id)makeRequest:(id)arg1 withError:(id *)arg2;
- (id)upload:(id)arg1 withError:(id *)arg2;
- (id)makeDataTaskRequest:(id)arg1 withError:(id *)arg2;
- (id)makeBlockingDataTaskRequest:(id)arg1 withError:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
