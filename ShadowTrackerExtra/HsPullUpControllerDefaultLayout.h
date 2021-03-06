//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HsPullUpControllerLayout-Protocol.h"

@class NSSet, NSString;

@interface HsPullUpControllerDefaultLayout : NSObject <HsPullUpControllerLayout>
{
}

- (double)insetFor:(long long)arg1;
@property(readonly, nonatomic) long long initialPosition;
- (double)backdropAlphaFor:(long long)arg1;
- (id)prepareLayout:(id)arg1 in:(id)arg2;
@property(readonly, nonatomic) NSSet *supportedPositions;
@property(readonly, nonatomic) double bottomInteractionBuffer;
@property(readonly, nonatomic) double topInteractionBuffer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

