//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FIRInstanceIDTokenOperation.h"

@interface FIRInstanceIDTokenFetchOperation : FIRInstanceIDTokenOperation
{
}

- (id)parseFetchTokenResponse:(id)arg1;
- (void)handleResponseWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)performTokenOperation;
- (id)initWithAuthorizedEntity:(id)arg1 scope:(id)arg2 options:(id)arg3 checkinPreferences:(id)arg4 keyPair:(id)arg5;

@end

