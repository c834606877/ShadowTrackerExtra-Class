//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BLYRegisterInfo : NSObject
{
    unsigned long long _category;
    NSString *_name;
    unsigned long long _content;
}

@property(nonatomic) unsigned long long content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

