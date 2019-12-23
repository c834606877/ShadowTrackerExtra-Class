//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ILogDelegate.h"

@class NSMutableArray, NSString;

@interface IAPPayHelper : NSObject <ILogDelegate>
{
    NSMutableArray *_delegaters;
    NSMutableArray *_extendKeyValues;
    _Bool registered;
    id <IAPPayDelegate> Delegate;
    id <IAPGetProductListDelegate> GetProductDelagate;
}

+ (void)setIsEnLog:(_Bool)arg1;
+ (id)getVersion;
+ (void)hideLoading:(_Bool)arg1;
+ (void)setLocal:(id)arg1;
+ (_Bool)judgeIsCanPay;
+ (void)setProcess:(id)arg1;
+ (id)getIntanceIapHelp;
@property(readonly, nonatomic) _Bool registered; // @synthesize registered;
@property(nonatomic) __weak id <IAPGetProductListDelegate> GetProductDelagate; // @synthesize GetProductDelagate;
@property(nonatomic) __weak id <IAPPayDelegate> Delegate; // @synthesize Delegate;
- (void).cxx_destruct;
- (id)_constructExtendKeyValues;
- (void)_appendKeyValue2Extend:(id)arg1 value:(id)arg2;
- (_Bool)checkMainThreadAndRegister:(_Bool)arg1;
- (void)logwithMessage:(id)arg1;
- (void)restoreCompletedTransactions:(id)arg1 withOpenid:(id)arg2 withOpenKey:(id)arg3 withSessionId:(id)arg4 withSessionType:(id)arg5 withPf:(id)arg6 withPfkey:(id)arg7 withZoneId:(id)arg8 withVarItem:(id)arg9;
- (void)setParentViewController:(id)arg1;
- (void)uploadDeviceInfo:(id)arg1;
- (void)LaunchGoodsList:(id)arg1 withOpenid:(id)arg2 withOpenKey:(id)arg3 withSessionId:(id)arg4 withSessionType:(id)arg5 withPf:(id)arg6 withPfkey:(id)arg7 withZoneId:(id)arg8 withVarItem:(id)arg9 withIsDepositGameCoin:(unsigned char)arg10 withProductType:(unsigned long long)arg11;
- (_Bool)registerPay:(id)arg1 withOpenid:(id)arg2 withOpenKey:(id)arg3 withSessionId:(id)arg4 withSessionType:(id)arg5 withPf:(id)arg6 withPfkey:(id)arg7 withEnv:(id)arg8 withExtra:(id)arg9;
- (void)pay:(id)arg1 withOpenid:(id)arg2 withOpenKey:(id)arg3 withSessionId:(id)arg4 withSessionType:(id)arg5 withPf:(id)arg6 withPfkey:(id)arg7 withPayItem:(id)arg8 withProductId:(id)arg9 withIsDepositGameCoin:(unsigned char)arg10 withProductType:(unsigned long long)arg11 withZoneId:(id)arg12 withVarItem:(id)arg13 withDrmInfo:(id)arg14;
- (void)pay:(id)arg1 withOpenid:(id)arg2 withOpenKey:(id)arg3 withSessionId:(id)arg4 withSessionType:(id)arg5 withPf:(id)arg6 withPfkey:(id)arg7 withPayItem:(id)arg8 withProductId:(id)arg9 withIsDepositGameCoin:(unsigned char)arg10 withProductType:(unsigned long long)arg11 withZoneId:(id)arg12 withVarItem:(id)arg13;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
