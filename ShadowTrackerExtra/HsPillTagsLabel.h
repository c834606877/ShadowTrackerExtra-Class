//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSArray;

@interface HsPillTagsLabel : UILabel
{
    double _maxAvailableAdjustedWidth;
    NSArray *_options;
    id <HsPillTagsLabelDelegate> _delegate;
    NSArray *_accessibilityElements;
}

@property(retain, nonatomic) NSArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(nonatomic) __weak id <HsPillTagsLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(nonatomic) double maxAvailableAdjustedWidth; // @synthesize maxAvailableAdjustedWidth=_maxAvailableAdjustedWidth;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementsAtIndexes:(id)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)setUpAccessibilityRectsForElements;
- (void)addToAccessibilityWithElements:(id)arg1;
- (id)createAccessibilityElementWithText:(id)arg1;
- (void)tap:(id)arg1;
- (void)setupGesture;
- (void)setup;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

