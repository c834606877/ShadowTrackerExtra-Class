//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface IMSDKAccountForOC : NSObject <NSCoding>
{
    int _accountType;
    NSString *_account;
    NSString *_uid;
    NSString *_token;
    NSString *_extraJson;
}

+ (_Bool)removeAccountForChannel:(id)arg1;
+ (id)loadFromChannel:(id)arg1;
+ (id)instanceFromCppClass:(struct IMSDKAccount)arg1;
@property(retain, nonatomic) NSString *extraJson; // @synthesize extraJson=_extraJson;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (_Bool)saveToChannel:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct IMSDKAccount)getCppClass;

@end

