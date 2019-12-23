//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APMScreen, NSObject<OS_dispatch_queue>, UIViewController;

@interface APMScreenViewReporter : NSObject
{
    UIViewController *_currentViewController;
    id <APMScreenViewReporterDelegate> _firebasePerfDelegate;
    APMScreen *_currentScreen;
    APMScreen *_previousScreen;
    _Bool _allowScreenParameters;
    _Bool _allowPostScreenDidChangeNotification;
    _Bool _allowScreenViewEvent;
    _Bool _isAppActive;
    long long _currentScreenInstanceID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)notCalled;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)handleApplicationWillResignActive:(id)arg1;
- (void)handleApplicationDidBecomeActive:(id)arg1;
- (void)handleWindowDidResign:(id)arg1;
- (void)logViewScreenEventWithPreviousScreen:(id)arg1 newScreen:(id)arg2;
- (void)postScreenDidChangeNotificationWithPreviousScreen:(id)arg1 newScreen:(id)arg2;
- (void)setCurrentViewController:(id)arg1;
- (id)firebasePerfDelegate;
- (void)setFirebasePerfDelegate:(id)arg1;
- (void)viewControllerDidDisappear:(id)arg1;
- (void)viewControllerDidAppear:(id)arg1;
- (id)screenParameters;
- (void)setScreenName:(id)arg1 screenClass:(id)arg2;
- (void)getScreenName:(id *)arg1 screenClass:(id *)arg2;
- (_Bool)isAppActive;
- (void)dealloc;
- (id)init;

@end

