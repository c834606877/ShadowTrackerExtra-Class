//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HSUserDM, NSError;

@protocol HSSyncUserListener <NSObject>
- (void)syncStateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forUser:(HSUserDM *)arg3 withError:(NSError *)arg4;
@end

