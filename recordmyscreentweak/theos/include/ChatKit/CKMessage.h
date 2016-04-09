/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>

@class NSString, NSCalendarDate, NSArray, CKConversation;

@interface CKMessage : NSObject {
	unsigned _height;
	NSArray* _messageParts;
	float _cachedPercentComplete;
	unsigned _dateLoaded : 1;
	unsigned _heightAndFlagsLoaded : 1;
	unsigned _failedSendCountLoaded : 1;
	unsigned _outgoing : 1;
	unsigned _outgoingLoaded : 1;
	unsigned _messagePartsLoaded : 1;
	unsigned _subjectLoaded : 1;
	double _date;
	NSCalendarDate* _calendarDate;
	int _failedSendCount;
	unsigned _flags;
	NSString* _text;
	NSString* _subject;
	int _groupID;
	CKConversation* _conversation;
}
@property(readonly, assign, nonatomic) NSArray* messageParts;
@property(assign, nonatomic) CKConversation* conversation;
-(instancetype)init;
-(int)messageCount;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
-(void)_resetData;
-(int)groupID;
-(double)_loadDate;
-(double)timeIntervalSince1970;
-(id)date;
-(void)markAsRead;
-(BOOL)isForward;
-(void)permanentlyRemoveMessage;
-(BOOL)_loadOutgoing;
-(void)_loadSubject;
-(id)_createParts;
-(void)loadParts;
-(void)setParts:(id)parts;
-(void)_loadText;
-(BOOL)isOutgoing;
-(id)previewText;
-(id)attachmentText:(BOOL)text;
-(NSString*)subject;
-(NSString*)text;
-(unsigned long)height;
-(void)_storeUIFlags:(unsigned long)flags;
-(void)_loadUIFlags;
-(void)setUIHeight:(unsigned long)height flags:(unsigned long)flags;
-(void)getUIHeight:(unsigned*)height flags:(unsigned*)flags;
-(int)totalMessageCount;
-(int)pendingCount;
-(BOOL)pending;
-(int)compare:(id)compare;
-(BOOL)failedSend;
-(BOOL)partiallyFailedSend;
-(int)sentCount;
-(BOOL)hasBeenSent;
-(BOOL)hasBeenRead;
-(BOOL)isPlaceholder;
-(void)_loadFailedSendCount;
-(int)failedSendCount;
-(BOOL)completelyFailedSend;
-(void)reloadFailedSendCount;
-(float)percentComplete;
-(CKEntity*)sender;
-(NSString*)address;
-(NSData*)alertImageData;
-(BOOL)isFirstDisplayablePart:(id)part;
-(BOOL)containsDisplayableMessageParts;
-(BOOL)isOnlyDisplayableMessagePart:(id)part;
-(void)deleteMessagePart:(id)part;
-(BOOL)smartForwardCapable;
@end

