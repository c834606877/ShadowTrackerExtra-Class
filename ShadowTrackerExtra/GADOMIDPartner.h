//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GADOMIDPartner : NSObject
{
    NSString *_name;
    NSString *_versionString;
}

@property(readonly, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)toJSON;
- (id)initWithName:(id)arg1 versionString:(id)arg2;

@end

