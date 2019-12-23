//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface FNFGLProgram : NSObject
{
    NSMutableArray *_attributes;
    unsigned int _program;
    unsigned int _vertexShader;
    unsigned int _fragmentShader;
    _Bool _initialized;
    NSString *_vertexShaderLog;
    NSString *_fragmentShaderLog;
    NSString *_programLog;
}

@property(readonly, copy, nonatomic) NSString *programLog; // @synthesize programLog=_programLog;
@property(readonly, copy, nonatomic) NSString *fragmentShaderLog; // @synthesize fragmentShaderLog=_fragmentShaderLog;
@property(readonly, copy, nonatomic) NSString *vertexShaderLog; // @synthesize vertexShaderLog=_vertexShaderLog;
@property(readonly, nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
- (void).cxx_destruct;
- (void)use;
- (int)uniformIndex:(const char *)arg1;
- (unsigned int)addAttribute:(id)arg1;
- (_Bool)validate;
- (_Bool)link;
- (id)initWithVertexShader:(const char *)arg1 fragmentShader:(const char *)arg2;

@end

