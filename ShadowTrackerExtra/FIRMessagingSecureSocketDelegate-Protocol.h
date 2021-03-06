//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FIRMessagingSecureSocket, NSData, NSString;

@protocol FIRMessagingSecureSocketDelegate <NSObject>
- (void)didDisconnectWithSecureSocket:(FIRMessagingSecureSocket *)arg1;
- (void)secureSocketDidConnect:(FIRMessagingSecureSocket *)arg1;
- (void)secureSocket:(FIRMessagingSecureSocket *)arg1 didSendProtoWithTag:(BOOL)arg2 rmqId:(NSString *)arg3;
- (void)secureSocket:(FIRMessagingSecureSocket *)arg1 didReceiveData:(NSData *)arg2 withTag:(BOOL)arg3;
@end

