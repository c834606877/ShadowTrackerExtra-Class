//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBAdUpdatableView.h"

@class FBAdBodyView, FBAdIconView, FBNativeAdBase, FBNativeAdViewAttributes, NSString, UIButton, UILabel;

@interface FBNativeAdDetailsView : UIView <FBAdUpdatableView>
{
    _Bool _loaded;
    _Bool _bodyTextEnabled;
    FBNativeAdBase *_nativeAdBase;
    FBNativeAdViewAttributes *_attributes;
    FBAdBodyView *_bodyView;
    FBAdIconView *_iconView;
    UIButton *_callToActionButton;
    UILabel *_bodyLabel;
    long long _nativeBannerAdViewType;
}

@property(nonatomic) long long nativeBannerAdViewType; // @synthesize nativeBannerAdViewType=_nativeBannerAdViewType;
@property(nonatomic, getter=isBodyTextEnabled) _Bool bodyTextEnabled; // @synthesize bodyTextEnabled=_bodyTextEnabled;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) __weak UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(nonatomic) __weak UIButton *callToActionButton; // @synthesize callToActionButton=_callToActionButton;
@property(nonatomic) __weak FBAdIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak FBAdBodyView *bodyView; // @synthesize bodyView=_bodyView;
@property(nonatomic) __weak FBNativeAdViewAttributes *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) __weak FBNativeAdBase *nativeAdBase; // @synthesize nativeAdBase=_nativeAdBase;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutNativeBanner;
- (void)layoutSubviews;
- (void)resetView;
- (void)updateView:(_Bool)arg1;
- (void)createView;
- (void)reinitializeView;
- (id)initWithFrame:(struct CGRect)arg1 nativeAdBase:(id)arg2 attributes:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

