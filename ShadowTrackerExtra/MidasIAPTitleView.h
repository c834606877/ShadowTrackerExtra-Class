//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface MidasIAPTitleView : UIView
{
    id <MidasIAPTitleViewDelegate> _delegate;
    UIButton *_backButton;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UIView *_divider;
}

@property(nonatomic) __weak UIView *divider; // @synthesize divider=_divider;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak id <MidasIAPTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClose:(id)arg1;
- (void)onBack:(id)arg1;
- (id)initFromNib;

@end

