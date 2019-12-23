//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSDDAbstractLogger.h"

#import "AWSDDLogger.h"

@class AWSDDLogFileInfo, NSFileHandle, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface AWSDDFileLogger : AWSDDAbstractLogger <AWSDDLogger>
{
    AWSDDLogFileInfo *_currentLogFileInfo;
    id <AWSDDLogFileManager> _logFileManager;
    NSFileHandle *_currentLogFileHandle;
    NSObject<OS_dispatch_source> *_currentLogFileVnode;
    NSObject<OS_dispatch_source> *_rollingTimer;
    unsigned long long _maximumFileSize;
    double _rollingFrequency;
    _Bool _doNotReuseLogFiles;
    _Bool _automaticallyAppendNewlineForCustomFormatters;
    id <AWSDDLogFileManager> logFileManager;
}

@property(nonatomic) _Bool automaticallyAppendNewlineForCustomFormatters; // @synthesize automaticallyAppendNewlineForCustomFormatters=_automaticallyAppendNewlineForCustomFormatters;
@property _Bool doNotReuseLogFiles; // @synthesize doNotReuseLogFiles=_doNotReuseLogFiles;
@property(readonly, nonatomic) id <AWSDDLogFileManager> logFileManager; // @synthesize logFileManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *loggerName;
- (void)willRemoveLogger;
- (_Bool)shouldArchiveRecentLogFileInfo:(id)arg1;
- (void)didLogMessage;
- (void)willLogMessage;
- (void)logMessage:(id)arg1;
- (id)currentLogFileHandle;
@property(readonly, nonatomic) AWSDDLogFileInfo *currentLogFileInfo;
- (void)maybeRollLogFileDueToSize;
- (void)maybeRollLogFileDueToAge;
- (void)rollLogFileNow;
- (void)rollLogFileWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)rollLogFile;
- (void)scheduleTimerToRollLogFileDueToAge;
@property double rollingFrequency;
@property unsigned long long maximumFileSize;
- (void)dealloc;
- (id)initWithLogFileManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <AWSDDLogFormatter> logFormatter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property(readonly) Class superclass;

@end

