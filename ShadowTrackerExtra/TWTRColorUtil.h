//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TWTRColorUtil : NSObject
{
}

+ (id)lighterColorForColor:(id)arg1 lightnessLevel:(double)arg2;
+ (id)darkerColorForColor:(id)arg1 lightnessLevel:(double)arg2;
+ (id)contrastingTextColorFromBackgroundColor:(id)arg1;
+ (id)logoColorFromBackgroundColor:(id)arg1;
+ (id)mediaBackgroundColorFromBackgroundColor:(id)arg1;
+ (id)secondaryTextColorFromPrimaryTextColor:(id)arg1 backgroundColor:(id)arg2 minAlpha:(double)arg3 maxAlpha:(double)arg4;
+ (id)secondaryTextColorFromPrimaryTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (_Bool)isOpaqueColor:(id)arg1;
+ (_Bool)isLightColor:(id)arg1 lightnessThreshold:(double)arg2;
+ (_Bool)isLightColor:(id)arg1;
+ (id)imageWithColor:(id)arg1;
+ (id)colorFromHex:(long long)arg1;
+ (long long)hexWithColor:(id)arg1;
+ (id)imagePlaceholderColor;
+ (id)textColor;
+ (id)darkGrayColor;
+ (id)mediumGrayColor;
+ (id)faintGrayColor;
+ (id)darkGrayTextColor;
+ (id)grayTextColor;
+ (id)darkBorderGrayColor;
+ (id)borderGrayColor;
+ (id)grayColor;
+ (id)mediumPurpleColor;
+ (id)deepPurpleColor;
+ (id)darkPurpleColor;
+ (id)darkRedColor;
+ (id)redColor;
+ (id)darkBlueColor;
+ (id)mediumBlueColor;
+ (id)lightBlueColor;
+ (id)blueTextColor;
+ (id)blueColor;
+ (id)whiteColor;
+ (id)blackColor;

@end

