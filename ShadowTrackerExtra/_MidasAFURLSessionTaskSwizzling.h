//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _MidasAFURLSessionTaskSwizzling : NSObject
{
}

+ (void)swizzleResumeAndSuspendMethodForClass:(Class)arg1;
+ (void)load;
- (void)midas_af_suspend;
- (void)midas_af_resume;
- (long long)state;

@end

