//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TSEAutoCompletionTableViewController;

@protocol TSEAutoCompletionTableViewControllerDelegate <NSObject>
- (void)autoCompletionTableViewController:(TSEAutoCompletionTableViewController *)arg1 wantsToUpdateText:(NSString *)arg2 proposedCursorLocation:(long long)arg3;
- (void)autoCompletionTableViewController:(TSEAutoCompletionTableViewController *)arg1 wantsAutoCompletionResultsVisible:(_Bool)arg2;
@end
