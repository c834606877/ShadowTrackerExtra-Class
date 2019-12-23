//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TWTRTweetContentView, UIFont;

@protocol TWTRTweetContentViewLayout <NSObject>
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forContentView:(TWTRTweetContentView *)arg2;
- (_Bool)allowsMediaCornerRounding;
- (unsigned long long)tweetViewStyle;
- (void)setShowingMedia:(_Bool)arg1;
- (void)applyConstraintsForContentView:(TWTRTweetContentView *)arg1;
- (UIFont *)fontForTweetLabel;
@end

