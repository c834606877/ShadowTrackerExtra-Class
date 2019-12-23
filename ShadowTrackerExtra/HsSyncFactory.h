//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsSyncController;

@interface HsSyncFactory : NSObject
{
    HsSyncController *_syncController;
    id <HsDataSyncCoordinator> _dataSyncCoordinator;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <HsDataSyncCoordinator> dataSyncCoordinator; // @synthesize dataSyncCoordinator=_dataSyncCoordinator;
@property(retain, nonatomic) HsSyncController *syncController; // @synthesize syncController=_syncController;
- (void).cxx_destruct;

@end
