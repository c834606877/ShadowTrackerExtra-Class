//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIImage, UIImageView;

@interface HsBrandingView : UIView
{
    _Bool _initialSetupDone;
    UIImageView *_brandingImageView;
    UIImage *_brandingImage;
    NSLayoutConstraint *_topPaddingConstraint;
    NSLayoutConstraint *_leadingPaddingConstraint;
    NSLayoutConstraint *_bottomPaddingConstraint;
    NSLayoutConstraint *_trailingPaddingConstraint;
    UIView *_nonClearBackgroundView;
    struct UIEdgeInsets _contentInset;
}

+ (id)ofType:(long long)arg1;
@property(nonatomic) _Bool initialSetupDone; // @synthesize initialSetupDone=_initialSetupDone;
@property(nonatomic) __weak UIView *nonClearBackgroundView; // @synthesize nonClearBackgroundView=_nonClearBackgroundView;
@property(retain, nonatomic) NSLayoutConstraint *trailingPaddingConstraint; // @synthesize trailingPaddingConstraint=_trailingPaddingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomPaddingConstraint; // @synthesize bottomPaddingConstraint=_bottomPaddingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingPaddingConstraint; // @synthesize leadingPaddingConstraint=_leadingPaddingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topPaddingConstraint; // @synthesize topPaddingConstraint=_topPaddingConstraint;
@property(retain, nonatomic) UIImage *brandingImage; // @synthesize brandingImage=_brandingImage;
@property(retain, nonatomic) UIImageView *brandingImageView; // @synthesize brandingImageView=_brandingImageView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)dealloc;
- (id)sizedForTableFooter;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setBrandingImageViewTintColorForBackgroundColor:(id)arg1;
- (void)setBrightnessAwareBrandingLogo;
- (void)initConstraintsForImageView;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
