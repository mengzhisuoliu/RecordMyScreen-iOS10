/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <Foundation/NSObject.h>

@class AYOperation;

@interface _AYOperationEndWaiter : NSObject {
	AYOperation* _operation;
	BOOL _finished;
}
-(instancetype)initWithOperation:(id)operation;
// inherited: -(void)dealloc;
-(void)wait;
-(void)operationEnded:(id)ended;
@end

