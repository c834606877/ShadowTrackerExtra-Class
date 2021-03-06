//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableDictionary, UIView;
@protocol GADOMIDNodeProcessor;

@protocol GADOMIDNodeProcessor <NSObject>
@property(nonatomic) __weak id <GADOMIDNodeProcessor> processorForChildren;
- (NSArray *)orderedChildrenForView:(UIView *)arg1;
- (NSArray *)childrenForView:(UIView *)arg1;
- (NSMutableDictionary *)stateForView:(UIView *)arg1;
@end

