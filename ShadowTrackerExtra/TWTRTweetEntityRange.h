//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TWTRTweetEntity;

@interface TWTRTweetEntityRange : NSObject
{
    TWTRTweetEntity *_entity;
    struct _NSRange _textRange;
}

@property(readonly, nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;
@property(readonly, nonatomic) TWTRTweetEntity *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEntity:(id)arg1 textRange:(struct _NSRange)arg2;

@end

