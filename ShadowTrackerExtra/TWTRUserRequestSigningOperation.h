//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TWTRRequestSigningOperation.h"

@interface TWTRUserRequestSigningOperation : TWTRRequestSigningOperation
{
    CDUnknownBlockType _sessionProvider;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType sessionProvider; // @synthesize sessionProvider=_sessionProvider;
- (void).cxx_destruct;
- (id)signRequest:(id)arg1;
- (id)initWithPackage:(id)arg1 sessionProvider:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 cancel:(CDUnknownBlockType)arg4;

@end

