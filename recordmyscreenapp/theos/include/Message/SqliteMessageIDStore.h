/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import <Foundation/NSObject.h>

@class NSString, MailMessageLibrary;

@interface SqliteMessageIDStore : NSObject {
	NSString* _url;
	int _mailboxRowid;
	MailMessageLibrary* _library;
}
-(instancetype)initWithLibrary:(id)library URLString:(id)string;
-(void)_loadMailboxRowidIfNecessary:(sqlite3*)necessary;
-(id)knownMessageIDsFromSet:(id)set;
-(id)messageIDsAddedBeforeDate:(double)date;
-(void)deleteUIDsNotInArray:(id)array;
-(unsigned)numberOfMessageIDs;
-(void)deleteAllUIDs;
-(unsigned long long)flagsForUID:(id)uid;
// inherited: -(void)dealloc;
@end

