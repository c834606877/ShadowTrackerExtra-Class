//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsImageAttachmentTableViewCell.h"

@class UIActivityIndicatorView;

@interface HsUserImageAttachmentTableViewCell : HsImageAttachmentTableViewCell
{
    UIActivityIndicatorView *_activityIndicator;
}

@property(nonatomic) __weak UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void).cxx_destruct;
- (void)applyTheming;
- (id)accessibilityLabel;
- (void)attachmentImageTapped;
- (void)updateWithDM:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

