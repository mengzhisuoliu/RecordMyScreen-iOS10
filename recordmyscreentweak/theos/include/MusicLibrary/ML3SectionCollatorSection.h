/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3SectionCollator, NSString;

__attribute__((visibility("hidden")))
@interface ML3SectionCollatorSection : NSObject {
@private
	NSString* _header;
	unsigned short* _headerCharacters;
	unsigned _headerLength;
	ML3SectionCollator* _sectionCollator;
}
@property(copy, nonatomic) NSString* header;
@property(assign, nonatomic) ML3SectionCollator* sectionCollator;
-(instancetype)initWithHeader:(id)header sectionCollator:(id)collator;
-(void)dealloc;
-(long)compareToTransformedCharacters:(const unsigned short*)transformedCharacters length:(unsigned)length;
-(long)compareToCharacters:(const unsigned short*)characters length:(unsigned)length;
@end

