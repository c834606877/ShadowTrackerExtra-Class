//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "UITextViewDelegate.h"

@class NSString;

@interface HsInteractiveTextView : UITextView <UITextViewDelegate>
{
    id <HsInteractiveTextViewDelegate> _URLDelegate;
}

+ (struct CGSize)exptectedSizeForText:(id)arg1 andWidth:(double)arg2;
@property(nonatomic) __weak id <HsInteractiveTextViewDelegate> URLDelegate; // @synthesize URLDelegate=_URLDelegate;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 andText:(id)arg2 withDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

