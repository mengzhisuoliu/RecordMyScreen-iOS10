/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MLSectionData : NSObject {
@private
	NSMutableArray* _titles;
	CFArrayRef _locations;
	unsigned _entityCount;
}
@property(readonly, assign, nonatomic) unsigned countOfSections;
+(id)sectionlessSectionDataForQuery:(id)query;
+(id)sectionDataWithLegacyCharacterArrayData:(CFArrayRef)legacyCharacterArrayData countOfEntities:(unsigned)entities;
-(instancetype)init;
-(id)description;
-(void)dealloc;
-(void)_ensureLoaded;
-(id)titleOfSectionAtIndex:(unsigned)index;
-(NSRange)rangeOfSectionAtIndex:(unsigned)index;
-(void)_appendTitle:(id)title sectionLength:(unsigned)length;
@end

