//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor;

@interface FBAdInfoButton : UIButton
{
    _Bool _renderAsAudienceNetworkLogo;
    UIColor *_iconColor;
}

@property(nonatomic) _Bool renderAsAudienceNetworkLogo; // @synthesize renderAsAudienceNetworkLogo=_renderAsAudienceNetworkLogo;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
- (void).cxx_destruct;
- (void)drawAudienceNetworkLogoInRect:(struct CGRect)arg1 iconColor:(id)arg2;
- (void)drawInfoIconInRect:(struct CGRect)arg1 iconColor:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;

@end

