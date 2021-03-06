//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TWTRAuthSession-Protocol.h"

@class NSString;

@interface TWTRTokenOnlyAuthSession : NSObject <TWTRAuthSession>
{
    NSString *_authToken;
    NSString *_authTokenSecret;
    NSString *_userID;
}

+ (id)authSessionWithToken:(id)arg1 secret:(id)arg2;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, copy, nonatomic) NSString *authTokenSecret; // @synthesize authTokenSecret=_authTokenSecret;
@property(readonly, copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1 secret:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

