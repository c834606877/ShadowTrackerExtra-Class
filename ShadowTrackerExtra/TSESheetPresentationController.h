//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIView;

@interface TSESheetPresentationController : UIPresentationController
{
    _Bool _keyboardOnScreen;
    UIView *_dimmingView;
    double _keyboardHeight;
}

@property(nonatomic) _Bool keyboardOnScreen; // @synthesize keyboardOnScreen=_keyboardOnScreen;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (void).cxx_destruct;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillHide;
- (void)keyboardWillShow:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (void)layoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (double)horizontalPadding;
- (double)bottomPadding;
- (double)minimumTopPadding;
- (_Bool)shouldPresentInFullscreen;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end

