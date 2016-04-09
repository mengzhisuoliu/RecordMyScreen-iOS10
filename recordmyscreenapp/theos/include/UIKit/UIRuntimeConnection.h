/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "NSCoding.h"
#import <Foundation/NSObject.h>

@class NSString;

@interface UIRuntimeConnection : NSObject <NSCoding> {
	id source;
	id destination;
	NSString* label;
}
-(nullable instancetype)initWithCoder:(NSCoder *)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)source;
-(void)setSource:(id)source;
-(id)destination;
-(void)setDestination:(id)destination;
-(id)label;
-(void)setLabel:(id)label;
-(void)connect;
-(void)connectForSimulator;
@end

