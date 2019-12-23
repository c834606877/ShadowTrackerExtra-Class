//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBAdDataModel : NSObject
{
    NSString *_requestId;
    NSString *_inlineClientToken;
    long long _iconType;
}

@property(readonly, nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(readonly, copy, nonatomic) NSString *inlineClientToken; // @synthesize inlineClientToken=_inlineClientToken;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)setIconType:(long long)arg1;
- (id)initWithMetadata:(id)arg1;
- (id)init;

@end

