//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface LineSDKAccessToken : NSObject
{
    NSString *_accessToken;
    double _expiresIn;
    NSString *_channelID;
    NSString *_refreshToken;
    NSDate *_tokenRequestedDate;
}

@property(retain, nonatomic) NSDate *tokenRequestedDate; // @synthesize tokenRequestedDate=_tokenRequestedDate;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(nonatomic) double expiresIn; // @synthesize expiresIn=_expiresIn;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (_Bool)isEqualToAccessToken:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)estimatedExpiredDate;
- (id)initWithDictionary:(id)arg1 channelID:(id)arg2 currentRefreshToken:(id)arg3 tokenRequestedDate:(id)arg4 error:(id *)arg5;
- (id)initWithChannelID:(id)arg1 accessToken:(id)arg2 refreshToken:(id)arg3 tokenRequestedDate:(id)arg4 expiresIn:(double)arg5;

@end
