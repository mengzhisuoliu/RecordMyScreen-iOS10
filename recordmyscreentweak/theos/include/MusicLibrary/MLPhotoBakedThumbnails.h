/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>
#import "MLPhotoBakedThumbnails.h"
#import "MusicLibrary-Structs.h"

@class NSMutableData, NSMutableDictionary, NSMutableArray;

@interface MLPhotoBakedThumbnails : NSObject {
@private
	int _format;
	int _singleThumbnailImageLength;
	int _count;
	NSMutableData* _thumbnailData;
	NSMutableArray* _thumbnailImages;
	NSMutableDictionary* _options;
	BOOL _optionsAccessed;
	BOOL _missingHeader;
	CGSize _size;
}
@property(readonly, assign, nonatomic) CGRect imageRect;
@property(readonly, assign, nonatomic) unsigned bitmapInfo;
@property(readonly, assign, nonatomic) int bytesPerPixel;
@property(readonly, assign, nonatomic) int bitsPerComponent;
@property(readonly, assign, nonatomic) CGSize size;
@property(readonly, retain, nonatomic) NSMutableDictionary* options;
@property(readonly, assign, nonatomic) int format;
+(id)thumbnailsWithContentsOfFile:(id)file format:(int)format;
+(BOOL)saveBakedThumbnailsOfImages:(id)images toFile:(id)file format:(int)format orientation:(int*)orientation options:(id)options delegate:(id)delegate;
-(instancetype)initWithData:(id)data format:(int)format;
-(instancetype)initWithContentsOfFile:(id)file format:(int)format;
-(instancetype)initWithImages:(id)images format:(int)format orientation:(int*)orientation options:(id)options delegate:(id)delegate;
-(void)dealloc;
-(id)description;
-(id)serializedData;
-(BOOL)saveToFile:(id)file;
-(int)count;
-(id)thumbnailDataAtIndex:(int)index;
-(char*)thumbnailBytesAtIndex:(int)index;
-(CGImageRef)thumbnailImageAtIndex:(int)index;
-(BOOL)writeBorderedThumbnailOfImage:(CGImageRef)image toBuffer:(void*)buffer orientation:(int*)orientation format:(int)format formatInfo:(const BorderedFormatInfo*)info delegate:(id)delegate;
@end

@interface MLPhotoBakedThumbnails (Deprecated)
+(id)thumbnailsForAlbumVideo:(id)albumVideo format:(int)format;
+(BOOL)saveBakedThumbnailsOfAlbumVideoImages:(id)albumVideoImages toFile:(id)file format:(int)format orientation:(int*)orientation options:(id)options delegate:(id)delegate;
-(instancetype)initWithAlbumVideo:(id)albumVideo format:(int)format;
-(instancetype)initWithAlbumVideoImages:(id)albumVideoImages format:(int)format orientation:(int*)orientation options:(id)options delegate:(id)delegate;
-(BOOL)saveToAlbumVideoFile:(id)albumVideoFile;
@end

