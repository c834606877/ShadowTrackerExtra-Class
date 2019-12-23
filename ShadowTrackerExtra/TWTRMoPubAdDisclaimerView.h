//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface TWTRMoPubAdDisclaimerView : UIView
{
    UIImageView *_privacyInfoIcon;
    UILabel *_disclaimerLabel;
}

@property(readonly, nonatomic) UILabel *disclaimerLabel; // @synthesize disclaimerLabel=_disclaimerLabel;
@property(readonly, nonatomic) UIImageView *privacyInfoIcon; // @synthesize privacyInfoIcon=_privacyInfoIcon;
- (void).cxx_destruct;
- (void)prepareLayout;
- (void)setBackgroundColor:(id)arg1;
- (void)blockTapsOnDisclaimerLabel;
- (void)setUpAccessibility;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

