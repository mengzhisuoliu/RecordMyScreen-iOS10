/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import "MessageLibrary.h"

@class NSMutableSet, NSDate, NSTimer;
@protocol MailboxPathProvider;

@interface MailMessageLibrary : MessageLibrary {
	NSDate* _lastUpdateDate;
	NSTimer* _commitTimer;
	double _beginTransactionTime;
	sqlite3* _writerDB;
	CFDictionaryRef _mailboxCache;
	NSMutableSet* _cachedDatabases;
	CFDictionaryRef _statementCachesByDB;
	double _dateDatabaseBecameLocked;
	pthread_mutex_t _dbLock;
	pthread_mutex_t _seqNumbersLock;
	pthread_mutex_t _priorityLock;
	BOOL _outstandingWritesExist;
	BOOL _writerDBIsBeingUsedAsReader;
	void* _ICUSearchContext;
	void* _CPSearchContext;
	id<MailboxPathProvider> _mailboxPathProvider;
	/*function-pointer*/ void* resetHandler;
	/*function-pointer*/ void* _busyHandler;
	void* _busyHandlerContext;
}
+(MailMessageLibrary*)defaultInstance;
// inherited: +(void)initialize;
+(void)_invalidateActiveAccountsClause;
// inherited: -(instancetype)initWithPath:(id)path;
-(void)setResetHandler:(/*function-pointer*/ void*)handler;
// inherited: -(void)dealloc;
-(void)renameOrRemoveDatabase;
-(void)queueCommitForCurrentThread;
-(void)scheduleCommitOnMainThread;
-(void)queueCommitOnMainThread;
-(void)maybeCommitTransaction;
-(void)synchronouslyCommitTransaction;
// inherited: -(void)commit;
// inherited: -(void)setFlags:(unsigned long)flags forMessage:(id)message;
// inherited: -(void)setFlagsForMessages:(id)messages mask:(unsigned long)mask;
// inherited: -(id)setFlagsFromDictionary:(id)dictionary forMessages:(id)messages;
// inherited: -(void)setNumberOfAttachments:(unsigned)attachments isSigned:(BOOL)aSigned isEncrypted:(BOOL)encrypted forMessage:(id)message;
// inherited: -(void)setMessage:(id)message isPartial:(BOOL)partial;
-(BOOL)initializeDatabase:(sqlite3*)database;
-(BOOL)_writeEmlxFile:(id)file withBodyData:(id)bodyData;
// inherited: -(id)addMessages:(id)messages withMailbox:(id)mailbox fetchBodies:(BOOL)bodies newMessagesByOldMessage:(id)message remoteIDs:(id)ids setFlags:(unsigned long long)flags clearFlags:(unsigned long long)flags7 messageFlagsForMessages:(id)messages8 copyFiles:(BOOL)files progressDelegate:(id)delegate addPOPUIDs:(BOOL)popuids dataSectionsByMessage:(id)message12;
// inherited: -(void)setThreadPriority:(int)priority;
// inherited: -(int)threadPriority;
// inherited: -(unsigned)updateSequenceNumber;
// inherited: -(unsigned)accessSequenceNumber;
-(void)_rebuildActiveAccountsClause;
-(void)setBusyHandler:(/*function-pointer*/ void*)handler context:(void*)context;
-(void)iterateStatement:(sqlite3_stmt*)statement db:(sqlite3*)db withProgressMonitor:(id)progressMonitor andRowHandler:(/*function-pointer*/ void*)handler context:(void*)context;
-(void)sendMessagesForStatement:(sqlite3_stmt*)statement db:(sqlite3*)db to:(id)to options:(unsigned)options timestamp:(double)timestamp;
-(void)sendMessagesMatchingQuery:(const char*)query to:(id)to options:(unsigned)options;
-(id)messagesMatchingQuery:(const char*)query options:(unsigned)options;
// inherited: -(id)messagesForMailbox:(id)mailbox olderThanNumberOfDays:(int)days;
// inherited: -(id)serverSearchResultMessagesForMailbox:(id)mailbox;
// inherited: -(id)dateOfOldestNonSearchResultMessageInMailbox:(id)mailbox;
// inherited: -(id)messagesWithSummariesForMailbox:(id)mailbox range:(NSRange)range;
-(unsigned)locationOfMessageID:(long long)messageID inMailbox:(id)mailbox;
// inherited: -(id)messagesWithoutSummariesForMailbox:(id)mailbox;
// inherited: -(id)messagesWithSummariesForMailbox:(id)mailbox fromRowID:(unsigned)rowID limit:(unsigned)limit;
// inherited: -(id)messagesWithoutSummariesForMailbox:(id)mailbox fromRowID:(unsigned)rowID limit:(unsigned)limit;
-(unsigned)integerForQuery:(char*)query withTextArgument:(id)textArgument;
// inherited: -(unsigned)unreadCountForMailbox:(id)mailbox;
// inherited: -(unsigned)deletedCountForMailbox:(id)mailbox;
// inherited: -(unsigned)nonDeletedCountForMailbox:(id)mailbox;
// inherited: -(unsigned)totalCountForMailbox:(id)mailbox;
// inherited: -(LibraryMessage*)oldestMessageInMailbox:(NSString*)mailbox;
// inherited: -(id)messageWithRemoteID:(id)remoteID inRemoteMailbox:(id)remoteMailbox;
// inherited: -(unsigned)maximumRemoteIDForMailbox:(id)mailbox;
// inherited: -(unsigned)minimumRemoteIDForMailbox:(id)mailbox;
// inherited: -(id)sequenceIdentifierForMailbox:(id)mailbox;
// inherited: -(void)setSequenceIdentifier:(id)identifier forMailbox:(id)mailbox;
// inherited: -(id)getDetailsForMessagesWithRemoteIDInRange:(NSRange)range fromMailbox:(id)mailbox;
// inherited: -(id)getDetailsForAllMessagesFromMailbox:(id)mailbox;
// inherited: -(LibraryMessage*)messageWithMessageID:(NSString*)messageID;
// inherited: -(id)messagesWithMessageIDHeader:(id)messageIDHeader;
// inherited: -(id)messageWithLibraryID:(unsigned)libraryID options:(unsigned)options;
// inherited: -(id)messageWithLibraryID:(unsigned)libraryID;
// inherited: -(id)urlForMailboxID:(unsigned)mailboxID;
-(NSString*)pathForMailboxURL:(NSString*)mailboxURL;
-(NSString*)mailboxURLForMessage:(MailMessage*)message;
// inherited: -(id)mailboxUidForMessage:(id)message;
// inherited: -(id)remoteStoreForMessage:(id)message;
// inherited: -(id)accountForMessage:(id)message;
// inherited: -(BOOL)shouldCancel;
-(void)messagesWereCompacted:(id)compacted mailboxes:(id)mailboxes;
// inherited: -(void)compactMessages:(id)messages permanently:(BOOL)permanently;
// inherited: -(void)compactMailbox:(id)mailbox;
// inherited: -(BOOL)renameMailboxes:(id)mailboxes to:(id)to;
// inherited: -(void)deleteMailboxes:(id)mailboxes;
// inherited: -(void)removeAllMessagesFromMailbox:(id)mailbox removeMailbox:(BOOL)mailbox2 andNotify:(BOOL)notify;
// inherited: -(id)messageWithMessageID:(id)messageID inMailbox:(id)mailbox;
-(id)dataPathForMessage:(id)message type:(int)type;
// inherited: -(id)dataPathForMessage:(id)message;
-(id)attachmentsDirectoryForLibraryID:(unsigned)libraryID mailboxID:(unsigned)anId;
// inherited: -(id)dataPathForMessage:(id)message part:(id)part;
// inherited: -(id)dataConsumerForMessage:(id)message part:(id)part;
// inherited: -(id)dataConsumerForMessage:(id)message part:(id)part incomplete:(BOOL)incomplete;
// inherited: -(id)dataConsumerForMessage:(id)message isPartial:(BOOL)partial;
// inherited: -(id)dataConsumerForMessage:(id)message;
// inherited: -(void)setData:(id)data forMessage:(id)message isPartial:(BOOL)partial;
-(void)_setMessageDataString:(id)string forKey:(const char*)key forMessage:(id)message;
// inherited: -(void)setSummary:(id)summary forMessage:(id)message;
// inherited: -(void)setMeetingData:(id)data forMessage:(id)message;
// inherited: -(id)loadMeetingDataForMessage:(id)message;
// inherited: -(void)setMeetingExternalID:(id)anId forMessage:(id)message;
// inherited: -(id)loadMeetingExternalIDForMessage:(id)message;
-(id)bodyDataAtPath:(id)path headerData:(id*)data;
// inherited: -(id)bodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id*)available isComplete:(BOOL*)complete;
// inherited: -(id)bodyDataForMessage:(id)message;
// inherited: -(id)fullBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id*)available;
// inherited: -(id)dataForMimePart:(id)mimePart isComplete:(BOOL*)complete;
// inherited: -(BOOL)isMessageContentsLocallyAvailable:(id)available;
// inherited: -(BOOL)hasCacheFileForMessage:(id)message directoryContents:(id)contents;
// inherited: -(BOOL)hasCacheFileForMessage:(id)message part:(id)part directoryContents:(id)contents;
-(id)queryForCriterion:(id)criterion options:(unsigned)options baseTable:(unsigned)table isSubquery:(BOOL)subquery range:(NSRange)range;
-(id)queryForCriterion:(id)criterion options:(unsigned)options baseTable:(unsigned)table isSubquery:(BOOL)subquery;
-(id)queryForCriterion:(id)criterion options:(unsigned)options baseTable:(unsigned)table;
-(id)queryForCriterion:(id)criterion options:(unsigned)options range:(NSRange)range;
-(id)queryForCriterion:(id)criterion options:(unsigned)options;
// inherited: -(void)sendMessagesMatchingCriterion:(id)criterion to:(id)to options:(unsigned)options range:(NSRange)range;
// inherited: -(void)sendMessagesMatchingCriterion:(id)criterion to:(id)to options:(unsigned)options;
-(void)iterateMessagesMatchingCriterion:(id)criterion withResultHandler:(id)resultHandler options:(unsigned)options withMonitor:(id)monitor;
// inherited: -(id)messagesMatchingCriterion:(id)criterion options:(unsigned)options range:(NSRange)range;
// inherited: -(id)messagesMatchingCriterion:(id)criterion options:(unsigned)options;
// inherited: -(id)filterContiguousMessages:(id)messages forCriterion:(id)criterion options:(unsigned)options;
-(void)setDatabasePath:(NSString*)path;
-(NSString*)defaultDatabasePath;
// inherited: -(BOOL)isBusy;
// inherited: -(void)setBusyTimeoutInterval:(double)interval;
// inherited: -(void)cleanOldDatabases;
// inherited: -(void)closeDatabaseConnections;
// inherited: -(void)deletePOPUID:(id)popuid inMailbox:(id)mailbox;
// inherited: -(id)UIDsToDeleteInMailbox:(id)mailbox;
// inherited: -(id)deletedUIDsInMailbox:(id)mailbox;
// inherited: -(id)allUIDsInMailbox:(id)mailbox;
// inherited: -(id)hiddenPOPUIDsInMailbox:(id)mailbox;
-(void)unlockDB:(sqlite3*)db;
-(void)closeDB:(sqlite3*)db;
-(void)checkInDB:(sqlite3*)db;
-(sqlite3*)_getWriterDBWithRetryCount:(int)retryCount;
-(sqlite3*)setupWriterDB;
-(sqlite3*)openNewHandleWithBigCache:(BOOL)bigCache;
// inherited: -(BOOL)outstandingWritesExist;
-(sqlite3*)getWriterDB;
-(sqlite3_stmt*)preparedStatement:(sqlite3*)statement pattern:(const char*)pattern;
-(int)handleSqliteError:(sqlite3*)error format:(id)format;
// inherited: -(void)lockDBForWriting;
-(void)_yieldDBToOtherProcess;
-(void)setMailboxPathProvider:(id)provider;
-(NSArray*)allMailboxURLStrings;
@end

