//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, UIView;

@protocol GADOMIDNodeProcessor <NSObject>
@property(nonatomic) __weak id <GADOMIDNodeProcessor> processorForChildren;
- (NSArray *)orderedChildrenForView:(UIView *)arg1;
- (NSArray *)childrenForView:(UIView *)arg1;
- (NSMutableDictionary *)stateForView:(UIView *)arg1;
@end

