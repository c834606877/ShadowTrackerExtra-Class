//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBNativeAdView.h"

@class FBAdTemplateFooterView, FBAdTemplateHeaderView, FBNativeAdDetailsView, FBNativeAdHeaderView, NSNumber, UILabel;

@interface FBNativeAdTemplateView : FBNativeAdView
{
    NSNumber *_headerSize;
    NSNumber *_mediaViewSize;
    NSNumber *_detailsSize;
    UILabel *_headerTitleLabel;
    UILabel *_headerBodyLabel;
    FBNativeAdHeaderView *_headerView;
    FBNativeAdDetailsView *_detailsView;
    FBAdTemplateHeaderView *_templateHeaderView;
    FBAdTemplateFooterView *_templateFooterView;
}

+ (id)defaultAttributes;
@property(nonatomic) __weak FBAdTemplateFooterView *templateFooterView; // @synthesize templateFooterView=_templateFooterView;
@property(nonatomic) __weak FBAdTemplateHeaderView *templateHeaderView; // @synthesize templateHeaderView=_templateHeaderView;
@property(nonatomic) __weak FBNativeAdDetailsView *detailsView; // @synthesize detailsView=_detailsView;
@property(nonatomic) __weak FBNativeAdHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak UILabel *headerBodyLabel; // @synthesize headerBodyLabel=_headerBodyLabel;
@property(nonatomic) __weak UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) NSNumber *detailsSize; // @synthesize detailsSize=_detailsSize;
@property(retain, nonatomic) NSNumber *mediaViewSize; // @synthesize mediaViewSize=_mediaViewSize;
@property(retain, nonatomic) NSNumber *headerSize; // @synthesize headerSize=_headerSize;
- (void).cxx_destruct;
- (void)setBodyTextEnabled:(_Bool)arg1;
- (_Bool)isBodyTextEnabled;
- (void)updateView:(_Bool)arg1;
- (void)constructCallToActionButton;
- (void)constructIconView;
- (_Bool)shouldUseNewTemplateLayout;
- (void)constructBodyView;

@end

