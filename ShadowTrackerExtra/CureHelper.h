//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CureHelper : NSObject
{
    NSMutableArray *_ifsArray;
    NSMutableDictionary *_downloadDictionary;
    long long _downloadLengthPerTask;
    NSString *_ifs_save_path;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *ifs_save_path; // @synthesize ifs_save_path=_ifs_save_path;
@property(nonatomic) long long downloadLengthPerTask; // @synthesize downloadLengthPerTask=_downloadLengthPerTask;
@property(retain, nonatomic) NSMutableDictionary *downloadDictionary; // @synthesize downloadDictionary=_downloadDictionary;
@property(retain, nonatomic) NSMutableArray *ifsArray; // @synthesize ifsArray=_ifsArray;
- (void).cxx_destruct;
- (_Bool)RebuildIOSBGDownloadPath;
- (id)GetIOSBGDownloadRelativePath;
- (id)GetIOSBGDownloadPath;
- (id)GetIfsSavePath;
- (void)SetIfsSavePath:(id)arg1;
- (_Bool)GetCurrentDownloadDetail:(id *)arg1 withFileSize:(long long *)arg2 withGapsCnt:(long long *)arg3;
- (_Bool)GetOneTaskInfo:(id *)arg1 withGap:(id *)arg2;
- (_Bool)WriteCuresFile:(id)arg1 withCuresFile:(id)arg2 withOrgFilename:(id)arg3 withOffset:(long long)arg4 withLength:(long long)arg5;
- (_Bool)isBlankString:(id)arg1;
- (void)DumpDownloadTasksInfo;
- (id)GetDownloadGap:(struct CuResFile *)arg1;
- (void)RepairCuresGaps:(id)arg1 withGapArray:(id *)arg2;
- (_Bool)ParseCuresFiles:(_Bool)arg1;
- (_Bool)GetCuresFileList:(_Bool)arg1;
- (id)GetIfsArray;
- (long long)GetDownloadLengthPerTask;
- (void)SetDownloadLengthPerTask:(long long)arg1;
- (_Bool)PareseSessionIdentifier2:(id)arg1 hasSavePath:(id *)arg2;
- (_Bool)PareseSessionIdentifier:(id)arg1 hasTaskInfo:(id *)arg2 hasSavePath:(id *)arg3;
- (_Bool)PareseIdentifier:(id)arg1 hasFilename:(id *)arg2 hasOffset:(long long *)arg3 hasLength:(long long *)arg4 hasPath2Save:(id *)arg5 hasRelativePath:(id *)arg6 withTotalTask:(long long *)arg7;
- (void)dealloc;
- (id)init;

@end
