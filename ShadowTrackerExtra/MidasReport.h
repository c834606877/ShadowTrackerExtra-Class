//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MidasReport : NSObject
{
    _Bool _isErrorReport;
    NSString *_reportUploadingNumber;
    NSString *_sdkVersion;
    NSString *_identifier;
    NSString *_openIDOrUIN;
    NSString *_payFrom;
    NSString *_resultInfo;
    long long _errorCode;
    NSString *_errorInfo;
    NSString *_serviceCode;
    NSString *_action;
    NSString *_format;
    NSString *_offerID;
    NSString *_pf;
    NSString *_billNo;
    NSString *_orderUUID;
    NSString *_sessionID;
    NSString *_sessionType;
    NSString *_productID;
    NSString *_amount;
    long long _quantity;
    NSString *_aid;
    NSString *_processUUID;
}

+ (id)_platform;
@property(nonatomic) _Bool isErrorReport; // @synthesize isErrorReport=_isErrorReport;
@property(copy, nonatomic) NSString *processUUID; // @synthesize processUUID=_processUUID;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(copy, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *orderUUID; // @synthesize orderUUID=_orderUUID;
@property(copy, nonatomic) NSString *billNo; // @synthesize billNo=_billNo;
@property(copy, nonatomic) NSString *pf; // @synthesize pf=_pf;
@property(copy, nonatomic) NSString *offerID; // @synthesize offerID=_offerID;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *serviceCode; // @synthesize serviceCode=_serviceCode;
@property(copy, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *resultInfo; // @synthesize resultInfo=_resultInfo;
@property(copy, nonatomic) NSString *payFrom; // @synthesize payFrom=_payFrom;
@property(copy, nonatomic) NSString *openIDOrUIN; // @synthesize openIDOrUIN=_openIDOrUIN;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *reportUploadingNumber; // @synthesize reportUploadingNumber=_reportUploadingNumber;
- (void).cxx_destruct;
- (id)description;
- (id)convertToReportString;
- (_Bool)isReportValidated;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

