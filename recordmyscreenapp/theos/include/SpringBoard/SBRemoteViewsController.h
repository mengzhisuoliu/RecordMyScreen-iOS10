/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"

@class NSMutableDictionary;

@interface SBRemoteViewsController : NSObject {
	NSMutableDictionary* _registeredRemoteViewInfos;
	NSMutableDictionary* _unregisteredRemoteViewInfos;
}
+(id)sharedInstance;
// inherited: -(instancetype)init;
// inherited: -(void)dealloc;
-(void)unregisterProxyRemoteView:(id)view;
-(void)registerRemoteContextID:(unsigned)anId forIdentifier:(id)identifier size:(CGSize)size application:(id)application;
-(void)unregisterRemoteIdentifier:(id)identifier application:(id)application;
-(id)_createProxyRemoteViewForIdentifier:(id)identifier;
-(void)_sequesterProxyRemoteView:(id)view;
-(id)proxyRemoteViewForIdentifier:(id)identifier;
-(void)unregisterRemoteViewsForApplication:(id)application;
@end

