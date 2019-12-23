//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GtalkErrorInfo, GtalkExtension, NSString;

@interface GtalkIqStanza : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long accountId; // @dynamic accountId;
@property(retain, nonatomic) GtalkErrorInfo *error; // @dynamic error;
@property(retain, nonatomic) GtalkExtension *extension; // @dynamic extension;
@property(copy, nonatomic) NSString *from; // @dynamic from;
@property(nonatomic) _Bool hasAccountId; // @dynamic hasAccountId;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasExtension; // @dynamic hasExtension;
@property(nonatomic) _Bool hasFrom; // @dynamic hasFrom;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasLastStreamIdReceived; // @dynamic hasLastStreamIdReceived;
@property(nonatomic) _Bool hasPersistentId; // @dynamic hasPersistentId;
@property(nonatomic) _Bool hasRmqId; // @dynamic hasRmqId;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasStreamId; // @dynamic hasStreamId;
@property(nonatomic) _Bool hasTo; // @dynamic hasTo;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int lastStreamIdReceived; // @dynamic lastStreamIdReceived;
@property(copy, nonatomic) NSString *persistentId; // @dynamic persistentId;
@property(nonatomic) long long rmqId; // @dynamic rmqId;
@property(nonatomic) long long status; // @dynamic status;
@property(nonatomic) int streamId; // @dynamic streamId;
@property(copy, nonatomic) NSString *to; // @dynamic to;
@property(nonatomic) int type; // @dynamic type;

@end

