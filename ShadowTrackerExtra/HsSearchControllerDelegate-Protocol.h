//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UISearchController, UITableView;

@protocol HsSearchControllerDelegate <NSObject>
- (NSArray *)searchMatchesAtIndex:(unsigned long long)arg1;
- (_Bool)hsSearchControllerShouldReloadTable:(UISearchController *)arg1;
- (void)hsSearchControllerDidLoadSearchResultsTableView:(UITableView *)arg1;
@end
