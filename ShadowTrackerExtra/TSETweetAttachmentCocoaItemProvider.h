//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSETweetAttachment-Protocol.h"

@class NSItemProvider, NSString;

@interface TSETweetAttachmentCocoaItemProvider : NSObject <TSETweetAttachment>
{
    NSString *_title;
    NSItemProvider *_itemProvider;
}

@property(readonly, copy, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 itemProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

