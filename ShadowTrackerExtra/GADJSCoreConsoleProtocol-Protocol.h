//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSString;

@protocol GADJSCoreConsoleProtocol <JSExport>
- (void)logErrorMessage:(NSString *)arg1;
- (void)logMessage:(NSString *)arg1;

@optional
- (void)logErrorMessage:(NSString *)arg1 __JS_EXPORT_AS__error:(id)arg2;
- (void)logMessage:(NSString *)arg1 __JS_EXPORT_AS__log:(id)arg2;
@end

