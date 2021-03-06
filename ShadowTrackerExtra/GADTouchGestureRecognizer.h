//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSDate;

@interface GADTouchGestureRecognizer : UIGestureRecognizer
{
    NSDate *_lastTouchTimestamp;
    NSDate *_lastTouchBeginTimestamp;
}

@property(readonly, nonatomic) NSDate *lastTouchBeginTimestamp; // @synthesize lastTouchBeginTimestamp=_lastTouchBeginTimestamp;
@property(readonly, nonatomic) NSDate *lastTouchTimestamp; // @synthesize lastTouchTimestamp=_lastTouchTimestamp;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

