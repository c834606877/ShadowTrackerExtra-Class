//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HsApiExecutorFactory : NSObject
{
    id <HsApiExecutor> _apiExecutor;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <HsApiExecutor> apiExecutor; // @synthesize apiExecutor=_apiExecutor;
- (void).cxx_destruct;
- (id)initPrivate;

@end

