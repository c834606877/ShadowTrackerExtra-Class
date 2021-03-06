//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol UICoordinateSpace;

@interface GADWindowScene : NSObject
{
    long long _activationState;
    id <UICoordinateSpace> _coordinateSpace;
    NSArray *_windows;
}

@property(readonly, nonatomic) NSArray *windows; // @synthesize windows=_windows;
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(nonatomic) long long activationState; // @synthesize activationState=_activationState;
- (void).cxx_destruct;

@end

