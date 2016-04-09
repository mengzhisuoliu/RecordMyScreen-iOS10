/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ASSyncTaskCommand : NSObject {
	NSString* _serverID;
	int _type;
}
-(instancetype)initWithCommandType:(int)commandType serverID:(id)anId;
-(int)type;
-(id)serverID;
-(id)clientID;
-(void)appendApplicationDataForTask:(id)task toWBXMLData:(id)wbxmldata;
-(void)success;
-(void)appendCommandData:(id)data;
// inherited: -(void)dealloc;
@end

