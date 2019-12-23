//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface TSETweetURLAttachmentView : UIView
{
    UIImageView *_linkPreviewImageView;
    UIView *_labelsContainerView;
    UILabel *_linkTitleLabel;
    UILabel *_linkDomainLabel;
}

@property(readonly, nonatomic) UILabel *linkDomainLabel; // @synthesize linkDomainLabel=_linkDomainLabel;
@property(readonly, nonatomic) UILabel *linkTitleLabel; // @synthesize linkTitleLabel=_linkTitleLabel;
@property(readonly, nonatomic) UIView *labelsContainerView; // @synthesize labelsContainerView=_labelsContainerView;
@property(readonly, nonatomic) UIImageView *linkPreviewImageView; // @synthesize linkPreviewImageView=_linkPreviewImageView;
- (void).cxx_destruct;
- (void)setUpConstraints;
- (struct CGSize)intrinsicContentSize;
- (id)initWithURLAttachment:(id)arg1;

@end

