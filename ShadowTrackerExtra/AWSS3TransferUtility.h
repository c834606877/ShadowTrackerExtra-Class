//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSService.h"

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class AWSS3PreSignedURLBuilder, AWSS3TransferUtilityConfiguration, AWSServiceConfiguration, AWSSynchronizedMutableDictionary, NSString, NSURLSession;

@interface AWSS3TransferUtility : AWSService <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    AWSServiceConfiguration *_configuration;
    AWSS3TransferUtilityConfiguration *_transferUtilityConfiguration;
    AWSS3PreSignedURLBuilder *_preSignedURLBuilder;
    NSURLSession *_session;
    NSString *_sessionIdentifier;
    NSString *_temporaryDirectoryPath;
    AWSSynchronizedMutableDictionary *_taskDictionary;
    CDUnknownBlockType _backgroundURLSessionCompletionHandler;
}

+ (void)interceptApplication:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)removeS3TransferUtilityForKey:(id)arg1;
+ (id)S3TransferUtilityForKey:(id)arg1;
+ (void)registerS3TransferUtilityWithConfiguration:(id)arg1 transferUtilityConfiguration:(id)arg2 forKey:(id)arg3;
+ (void)registerS3TransferUtilityWithConfiguration:(id)arg1 forKey:(id)arg2;
+ (id)defaultS3TransferUtility;
@property(copy, nonatomic) CDUnknownBlockType backgroundURLSessionCompletionHandler; // @synthesize backgroundURLSessionCompletionHandler=_backgroundURLSessionCompletionHandler;
@property(retain, nonatomic) AWSSynchronizedMutableDictionary *taskDictionary; // @synthesize taskDictionary=_taskDictionary;
@property(retain, nonatomic) NSString *temporaryDirectoryPath; // @synthesize temporaryDirectoryPath=_temporaryDirectoryPath;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) AWSS3PreSignedURLBuilder *preSignedURLBuilder; // @synthesize preSignedURLBuilder=_preSignedURLBuilder;
@property(retain, nonatomic) AWSS3TransferUtilityConfiguration *transferUtilityConfiguration; // @synthesize transferUtilityConfiguration=_transferUtilityConfiguration;
@property(retain, nonatomic) AWSServiceConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (id)getDownloadTask:(id)arg1;
- (id)getUploadTask:(id)arg1;
- (void)cleanUpTemporaryDirectory;
- (id)getDownloadTasks;
- (id)getUploadTasks;
- (id)getAllTasks;
- (void)enumerateToAssignBlocksForUploadTask:(CDUnknownBlockType)arg1 downloadTask:(CDUnknownBlockType)arg2;
- (id)internalDownloadToURL:(id)arg1 bucket:(id)arg2 key:(id)arg3 expression:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)downloadToURL:(id)arg1 bucket:(id)arg2 key:(id)arg3 expression:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)downloadDataFromBucket:(id)arg1 key:(id)arg2 expression:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)uploadFile:(id)arg1 bucket:(id)arg2 key:(id)arg3 contentType:(id)arg4 expression:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)uploadData:(id)arg1 bucket:(id)arg2 key:(id)arg3 contentType:(id)arg4 expression:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)initWithConfiguration:(id)arg1 transferUtilityConfiguration:(id)arg2 identifier:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

