//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@interface AWSS3RequestPaymentConfiguration : AWSModel
{
    long long _payer;
}

+ (id)payerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long payer; // @synthesize payer=_payer;

@end

