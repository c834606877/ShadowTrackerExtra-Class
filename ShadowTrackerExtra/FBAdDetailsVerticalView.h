//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBAdLabel, UIImageView;

@interface FBAdDetailsVerticalView : UIView
{
    UIImageView *_iconView;
    FBAdLabel *_subtitleLabel;
    FBAdLabel *_titleLabel;
    unsigned long long _iconStyle;
}

@property(nonatomic) unsigned long long iconStyle; // @synthesize iconStyle=_iconStyle;
@property(nonatomic) __weak FBAdLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak FBAdLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setupIconViewWithIconUrl:(id)arg1;
- (void)setupTitleViewWithText:(id)arg1 fontSize:(double)arg2;
- (void)setupSubtitleViewWithText:(id)arg1 fontSize:(double)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 iconURL:(id)arg3 iconStyle:(unsigned long long)arg4;
- (id)init;

@end

