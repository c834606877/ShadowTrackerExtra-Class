//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivityItemProvider.h"

@class TWTRTweet;

@interface TWTRTweetShareItemProvider : UIActivityItemProvider
{
    TWTRTweet *_tweet;
}

@property(retain, nonatomic) TWTRTweet *tweet; // @synthesize tweet=_tweet;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)item;
- (id)initWithTweet:(id)arg1;

@end

