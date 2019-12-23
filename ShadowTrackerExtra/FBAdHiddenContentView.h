//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBAdCheckIcon, FBAdCloseButton, FBAdGearIcon, FBAdHideIcon, FBAdImage, FBAdPaddedLabel, FBAdShieldIcon, NSString, UIButton, UIImageView, UILabel;

@interface FBAdHiddenContentView : UIView
{
    long long _layoutType;
    CDUnknownBlockType _onDismiss;
    CDUnknownBlockType _onManageAdSettings;
    NSString *_reason;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    FBAdPaddedLabel *_reasonLabel;
    UIButton *_manageAdPreferencesButton;
    FBAdCloseButton *_closeButton;
    FBAdShieldIcon *_shieldIcon;
    FBAdGearIcon *_gearIcon;
    UIImageView *_logoImageView;
    FBAdImage *_logoImage;
    FBAdCheckIcon *_checkIcon;
    FBAdHideIcon *_hideIcon;
    long long _flowType;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long flowType; // @synthesize flowType=_flowType;
@property(retain, nonatomic) FBAdHideIcon *hideIcon; // @synthesize hideIcon=_hideIcon;
@property(retain, nonatomic) FBAdCheckIcon *checkIcon; // @synthesize checkIcon=_checkIcon;
@property(retain, nonatomic) FBAdImage *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) FBAdGearIcon *gearIcon; // @synthesize gearIcon=_gearIcon;
@property(retain, nonatomic) FBAdShieldIcon *shieldIcon; // @synthesize shieldIcon=_shieldIcon;
@property(retain, nonatomic) FBAdCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *manageAdPreferencesButton; // @synthesize manageAdPreferencesButton=_manageAdPreferencesButton;
@property(retain, nonatomic) FBAdPaddedLabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) CDUnknownBlockType onManageAdSettings; // @synthesize onManageAdSettings=_onManageAdSettings;
@property(copy, nonatomic) CDUnknownBlockType onDismiss; // @synthesize onDismiss=_onDismiss;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
- (void).cxx_destruct;
- (void)handleCloseButtonTap;
- (void)handleManageAdSettingsTap;
- (id)mainIcon;
- (void)verticallyAlignContent;
- (void)layoutFullscreen;
- (void)layoutOneline;
- (void)layoutMultiline;
- (void)layoutSubviews;
- (id)initWithReason:(id)arg1 logoImage:(id)arg2 flowType:(long long)arg3;

@end

