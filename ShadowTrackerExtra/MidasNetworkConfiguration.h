//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MidasNetworkConfiguration : NSObject
{
    long long _normalTimeout;
    long long _provideTimeout;
}

@property(nonatomic) long long provideTimeout; // @synthesize provideTimeout=_provideTimeout;
@property(nonatomic) long long normalTimeout; // @synthesize normalTimeout=_normalTimeout;
- (void)update:(id)arg1;
- (id)initWithOfferID:(id)arg1;

@end
