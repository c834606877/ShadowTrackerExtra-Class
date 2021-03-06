//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, TWTRBirdView, TWTRProfileView, TWTRRetweetView, TWTRTimestampLabel, TWTRTweet, TWTRTweetPresenter, TWTRTweetViewMetrics, TWTRUser, TWTRVerifiedView, UIColor, UILabel;
@protocol TWTRProfileHeaderViewDelegate;

@interface TWTRProfileHeaderView : UIView
{
    _Bool _calculationOnly;
    _Bool _showsTimestamp;
    _Bool _showsTwitterLogo;
    _Bool _showProfileThumbnail;
    id <TWTRProfileHeaderViewDelegate> _delegate;
    TWTRProfileView *_profileThumbnail;
    UILabel *_fullname;
    UILabel *_userName;
    TWTRTimestampLabel *_timestamp;
    TWTRBirdView *_twitterLogo;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
    UIColor *_backgroundColor;
    TWTRTweet *_tweet;
    TWTRTweet *_tweetToDisplay;
    TWTRUser *_user;
    unsigned long long _style;
    TWTRTweetViewMetrics *_metrics;
    TWTRTweetPresenter *_tweetPresenter;
    TWTRRetweetView *_retweetView;
    TWTRVerifiedView *_verified;
    NSLayoutConstraint *_retweetHeightConstraint;
    NSLayoutConstraint *_retweetBottomConstraint;
    NSLayoutConstraint *_displayThumbnailEdgeConstraint;
    NSLayoutConstraint *_hideThumbnailEdgeConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *hideThumbnailEdgeConstraint; // @synthesize hideThumbnailEdgeConstraint=_hideThumbnailEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *displayThumbnailEdgeConstraint; // @synthesize displayThumbnailEdgeConstraint=_displayThumbnailEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *retweetBottomConstraint; // @synthesize retweetBottomConstraint=_retweetBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *retweetHeightConstraint; // @synthesize retweetHeightConstraint=_retweetHeightConstraint;
@property(retain, nonatomic) TWTRVerifiedView *verified; // @synthesize verified=_verified;
@property(retain, nonatomic) TWTRRetweetView *retweetView; // @synthesize retweetView=_retweetView;
@property(retain, nonatomic) TWTRTweetPresenter *tweetPresenter; // @synthesize tweetPresenter=_tweetPresenter;
@property(retain, nonatomic) TWTRTweetViewMetrics *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) TWTRUser *user; // @synthesize user=_user;
@property(retain, nonatomic) TWTRTweet *tweetToDisplay; // @synthesize tweetToDisplay=_tweetToDisplay;
@property(retain, nonatomic) TWTRTweet *tweet; // @synthesize tweet=_tweet;
@property(nonatomic) _Bool showProfileThumbnail; // @synthesize showProfileThumbnail=_showProfileThumbnail;
@property(nonatomic) _Bool showsTwitterLogo; // @synthesize showsTwitterLogo=_showsTwitterLogo;
@property(nonatomic) _Bool showsTimestamp; // @synthesize showsTimestamp=_showsTimestamp;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(retain, nonatomic) TWTRBirdView *twitterLogo; // @synthesize twitterLogo=_twitterLogo;
@property(readonly, nonatomic) TWTRTimestampLabel *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) UILabel *userName; // @synthesize userName=_userName;
@property(readonly, nonatomic) UILabel *fullname; // @synthesize fullname=_fullname;
@property(readonly, nonatomic) TWTRProfileView *profileThumbnail; // @synthesize profileThumbnail=_profileThumbnail;
@property(nonatomic) __weak id <TWTRProfileHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool calculationOnly; // @synthesize calculationOnly=_calculationOnly;
- (void).cxx_destruct;
- (void)profileTapped;
- (void)loadProfileThumbnail;
- (void)prepareForReuse;
- (void)updateConstraintConstants;
- (void)setupRegularConstraints;
- (void)setupCompactConstraints;
- (void)setupConstraints;
- (id)autoLayoutViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)shouldDisplayVerifiedBadge;
- (void)configureWithTweet:(id)arg1;
- (void)setupGestureRecognizers;
- (id)initWithStyle:(unsigned long long)arg1;

@end

