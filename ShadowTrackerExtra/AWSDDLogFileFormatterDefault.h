//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWSDDLogFormatter-Protocol.h"

@class NSDateFormatter, NSString;

@interface AWSDDLogFileFormatterDefault : NSObject <AWSDDLogFormatter>
{
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (id)formatLogMessage:(id)arg1;
- (id)initWithDateFormatter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

