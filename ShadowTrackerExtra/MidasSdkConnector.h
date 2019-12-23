//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MidasSdkConnector : NSObject
{
    id <MidasSdkConnDelegate> _sdkConn;
}

@property(retain, nonatomic) id <MidasSdkConnDelegate> sdkConn; // @synthesize sdkConn=_sdkConn;
- (void)reprovideWithCallback:(struct MidasReprovideCallback *)arg1;
- (void)getInfoWithType:(id)arg1 withReq:(struct APMidasBasePayRequest *)arg2 callback:(struct MidasGetInfoCallback *)arg3;
- (void)getIntroPriceWithChannel:(id)arg1 withProductIds:(id)arg2 callback:(struct MidasGetIntroPriceCallback *)arg3;
- (void)getProductInfoWithChannel:(id)arg1 withProductIds:(id)arg2 callback:(struct MidasGetProductCallback *)arg3;
- (void)payWithReq:(struct APMidasBasePayRequest *)arg1 callback:(struct MidasPayCallback *)arg2 viewController:(id)arg3;
- (void)initWithEnv:(id)arg1 withIdc:(id)arg2 withIdcInfo:(id)arg3 withReq:(struct APMidasInitRequest *)arg4 callback:(struct MidasInitCallback *)arg5;
- (void)initWithEnv:(id)arg1 withIdc:(id)arg2 withReq:(struct APMidasInitRequest *)arg3 callback:(struct MidasInitCallback *)arg4;
- (void)enableLog:(_Bool)arg1;
- (id)init;

@end

