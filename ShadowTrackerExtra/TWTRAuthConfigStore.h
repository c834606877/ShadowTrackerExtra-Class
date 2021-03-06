//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TWTRAuthConfigStore : NSObject
{
    NSString *_nameSpace;
}

@property(readonly, copy, nonatomic) NSString *nameSpace; // @synthesize nameSpace=_nameSpace;
- (void).cxx_destruct;
- (void)persistAuthConfig:(id)arg1;
- (id)authConfigQuery;
- (id)nameSpacedAccountKey;
- (id)nameSpacedServiceKey;
- (void)forgetAuthConfig;
- (id)lastSavedAuthConfig;
- (void)saveAuthConfig:(id)arg1;
- (id)initWithNameSpace:(id)arg1;

@end

