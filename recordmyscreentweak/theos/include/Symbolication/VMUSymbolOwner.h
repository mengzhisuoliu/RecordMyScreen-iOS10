/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUSymbolOwner.h"
#import "Symbolication-Structs.h"
#import <Foundation/NSObject.h>
#import "NSCopying.h"

@class NSDictionary, NSString, NSArray, VMUArchitecture, VMUSymbol, VMUSourceInfo;
@protocol VMUMemory;

@interface VMUSymbolOwner : NSObject <NSCopying> {
	NSString* _name;
	NSDictionary* _signature;
	id<VMUMemory> _textMemory;
	NSArray* _regions;
	NSArray* _symbols;
	NSArray* _sourceInfos;
	unsigned _flags;
}
+(id)symbolOwnerWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags;
-(instancetype)initWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags;
-(NSString*)name;
-(NSDictionary*)signature;
-(NSString*)path;
-(VMUArchitecture*)architecture;
-(BOOL)containsAddress:(unsigned long long)address;
-(NSArray*)regions;	// NSArray of VMURegion's
-(id)regionsForName:(id)name;
-(id)regionForAddress:(unsigned long long)address;
-(VMUSymbol*)symbolForAddress:(unsigned long long)address;
-(id)symbolsForName:(id)name;
-(VMUSymbol*)symbolForName:(id)name;
-(id)symbolsForMangledName:(id)mangledName;
-(VMUSourceInfo*)sourceInfoForAddress:(unsigned long long)address;
-(NSArray*)symbols;	// NSArray of VMUSymbol's
-(NSArray*)sourceInfos;	// NSArray of VMUSourceInfo's
-(id)symbolsInAddressRange:(VMURange)addressRange;
-(id)sourceInfosInAddressRange:(VMURange)addressRange;
-(unsigned)flags;
-(BOOL)isMachO;
-(BOOL)isProtected;
-(BOOL)isPEF;
-(BOOL)isCommpage;
-(BOOL)isAOut;
-(BOOL)isDylib;
-(BOOL)isDyld;
-(BOOL)isBundle;
-(BOOL)isDsym;
-(BOOL)isEqualToSymbolOwner:(id)symbolOwner;
// inherited: -(id)description;
// inherited: -(void)dealloc;
// in a protocol: -(id)copyWithZone:(NSZone*)zone;
@end

@interface VMUSymbolOwner (Private)
-(BOOL)isLazy;
-(id)symbolOwnerByAddingContentsOfOwner:(id)owner;
-(void)slideToSegmentAddresses:(id)segmentAddresses;
-(id)programTextForAddress:(unsigned long long)address;
-(id)programTextForAddressRange:(VMURange)addressRange;
-(unsigned long long)size;
-(BOOL)validate;
@end

