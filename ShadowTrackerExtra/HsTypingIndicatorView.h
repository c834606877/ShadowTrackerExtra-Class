//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface HsTypingIndicatorView : UIView
{
    UIColor *_startColor;
    UIColor *_endColor;
    long long _dotsCount;
    double _animationDuration;
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) long long dotsCount; // @synthesize dotsCount=_dotsCount;
@property(retain, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property(retain, nonatomic) UIColor *startColor; // @synthesize startColor=_startColor;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 startColor:(id)arg2 endColor:(id)arg3 dotsCount:(long long)arg4 animationDuration:(double)arg5;

@end

