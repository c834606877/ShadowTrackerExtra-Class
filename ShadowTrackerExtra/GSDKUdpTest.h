//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_source>;

@interface GSDKUdpTest : NSObject
{
    unsigned int _mTag;
    int _mLost;
    int _mPcntx00_num;
    int _mSocketfd;
    NSMutableArray *_mUdpDotsList;
    NSObject<OS_dispatch_source> *_timerSource;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(nonatomic) int mSocketfd; // @synthesize mSocketfd=_mSocketfd;
@property(retain, nonatomic) NSMutableArray *mUdpDotsList; // @synthesize mUdpDotsList=_mUdpDotsList;
@property(nonatomic) int mPcntx00_num; // @synthesize mPcntx00_num=_mPcntx00_num;
@property(nonatomic) int mLost; // @synthesize mLost=_mLost;
@property(nonatomic) unsigned int mTag; // @synthesize mTag=_mTag;
- (void).cxx_destruct;
- (int)Heavy:(id)arg1;
- (id)pingDots;
- (id)resultUDPTest_noCollect;
- (id)resultUDPTest;
- (void)dealloc;
- (int)sendData:(struct sockaddr_in)arg1 Data:(id)arg2;
- (int)sendV6Data:(struct sockaddr_in6)arg1 Data:(id)arg2;
- (id)getSendData;
- (void)startUdpTest:(id)arg1 Sport:(int)arg2 Pcntx00:(int)arg3 Frequency:(double)arg4;
- (void)stopUDPTimer;
- (void)stopSpeedTest;
- (int)getV6SpeedSock;
- (int)getSpeedSock;

@end

