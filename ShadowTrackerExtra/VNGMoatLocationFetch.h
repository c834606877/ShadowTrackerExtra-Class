//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface VNGMoatLocationFetch : NSObject
{
    NSDate *_start;
    CDUnknownBlockType _fetchCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType fetchCompletion; // @synthesize fetchCompletion=_fetchCompletion;
@property(retain, nonatomic) NSDate *start; // @synthesize start=_start;
- (void).cxx_destruct;

@end

