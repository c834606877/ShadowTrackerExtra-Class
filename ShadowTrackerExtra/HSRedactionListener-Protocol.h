//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HSUserDM, NSError;

@protocol HSRedactionListener <NSObject>
- (void)redactionStateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forUser:(HSUserDM *)arg3 withError:(NSError *)arg4;
@end

