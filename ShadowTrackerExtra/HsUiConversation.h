//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface HsUiConversation : NSObject
{
    _Bool _redacted;
    NSNumber *_sdkId;
    unsigned long long _index;
    NSString *_publishId;
    unsigned long long _conversationType;
    unsigned long long _conversationState;
}

@property(readonly) _Bool redacted; // @synthesize redacted=_redacted;
@property(readonly) unsigned long long conversationState; // @synthesize conversationState=_conversationState;
@property(readonly) unsigned long long conversationType; // @synthesize conversationType=_conversationType;
@property(readonly) NSString *publishId; // @synthesize publishId=_publishId;
@property(readonly) unsigned long long index; // @synthesize index=_index;
@property(readonly) NSNumber *sdkId; // @synthesize sdkId=_sdkId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToUiConversation:(id)arg1;
- (id)initWithConversation:(id)arg1 index:(unsigned long long)arg2;

@end
