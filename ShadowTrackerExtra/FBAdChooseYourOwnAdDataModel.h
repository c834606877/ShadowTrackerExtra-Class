//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBAdDataModel.h"

@class FBAdChooseYourOwnAdConfig, NSArray;

@interface FBAdChooseYourOwnAdDataModel : FBAdDataModel
{
    FBAdChooseYourOwnAdConfig *_config;
    NSArray *_choosableAds;
}

@property(copy, nonatomic) NSArray *choosableAds; // @synthesize choosableAds=_choosableAds;
@property(readonly, nonatomic) FBAdChooseYourOwnAdConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)cacheKeysForCreatives;
- (_Bool)isValid;
- (id)initWithMetadata:(id)arg1;

@end

