/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import <Foundation/NSObject.h>
#import "VMUMemoryView.h"


@interface VMUMemoryView_Swapped : NSObject <VMUMemoryView> {
	VMURange _addressRange;
	unsigned long _cursor;
	char* _data;
}
-(instancetype)initWithAddressRange:(VMURange)addressRange data:(char*)data;
// in a protocol: -(VMURange)addressRange;
// in a protocol: -(unsigned long long)cursor;
// in a protocol: -(void)setCursor:(unsigned long long)cursor;
// in a protocol: -(void)advanceCursor:(unsigned long long)cursor;
// in a protocol: -(void)rewindCursor:(unsigned long long)cursor;
// in a protocol: -(BOOL)isCursorPointerAligned;
// in a protocol: -(void)pointerAlignCursor;
// in a protocol: -(BOOL)int8;
// in a protocol: -(short)int16;
// in a protocol: -(int)int32;
// in a protocol: -(long long)int64;
// in a protocol: -(unsigned char)uint8;
// in a protocol: -(unsigned short)uint16;
// in a protocol: -(unsigned)uint32;
// in a protocol: -(unsigned long long)uint64;
-(id)readBytes:(unsigned long)bytes;
// in a protocol: -(id)arrayOfInt8:(unsigned long)int8;
// in a protocol: -(id)arrayOfInt16:(unsigned long)int16;
// in a protocol: -(id)arrayOfInt32:(unsigned long)int32;
// in a protocol: -(id)arrayOfInt64:(unsigned long)int64;
// in a protocol: -(id)arrayOfUInt8:(unsigned long)uint8;
// in a protocol: -(id)arrayOfUInt16:(unsigned long)uint16;
// in a protocol: -(id)arrayOfUInt32:(unsigned long)uint32;
// in a protocol: -(id)arrayOfUInt64:(unsigned long)uint64;
// in a protocol: -(unsigned long long)ULEB128;
// in a protocol: -(long long)LEB128;
// in a protocol: -(nlist_64)nlist;
// in a protocol: -(nlist_64)nlist_64;
// in a protocol: -(dyld_image_info_64)dyldImageInfo;
// in a protocol: -(dyld_image_info_64)dyldImageInfo64;
// in a protocol: -(BOOL)charAtOffset:(unsigned long long)offset;
// in a protocol: -(id)stringWithEncoding:(unsigned)encoding offset:(unsigned long long)offset;
// in a protocol: -(id)stringWithEncoding:(unsigned)encoding size:(unsigned long)size;
// in a protocol: -(id)stringWithEncoding:(unsigned)encoding;
// in a protocol: -(id)description;
@end

