/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>
#import "Preferences-Structs.h"
#import "PSBaseView.h"

@class NSString, UINavigationBar, NSMutableSet, NSMutableArray, UIView;

@interface PSRootController : NSObject <PSBaseView> {
	UIView* _contentView;
	UINavigationBar* _navBar;
	NSMutableArray* _controllers;
	NSString* _title;
	NSString* _idStr;
	CGSize _size;
	NSString* _navBarRightButtonTitle;
	int _navBarRightButtonStyle;
	BOOL _navBarRightButtonDirty;
	NSMutableSet* _tasks;
	BOOL _deallocating;
	unsigned char _hasTelephony;
}
@property(readonly, retain) UIView* contentView;
@property(readonly, retain) NSMutableArray* controllers;
@property(readonly, assign) BOOL deallocating;
+(void)writePreference:(id)preference;
+(void)setPreferenceValue:(id)value specifier:(id)specifier;
+(id)readPreferenceValue:(id)value;
// in a protocol: +(BOOL)isOverlay;
// in a protocol: -(void)setPreferenceValue:(id)value specifier:(id)specifier;
// in a protocol: -(id)readPreferenceValue:(id)value;
-(id)lastController;
-(instancetype)initWithTitle:(id)title identifier:(id)identifier;
-(void)updateNavButtons;
-(void)setupRootListForSize:(CGSize)size;
-(BOOL)taskIsRunning:(id)running;
-(void)addTask:(id)task;
-(void)taskFinished:(id)finished;
-(BOOL)busy;
-(id)contentViewForTopController;
-(id)specifiers;
-(BOOL)navigationBar:(id)bar shouldPopItem:(id)item;
// in a protocol: -(instancetype)initForContentSize:(CGSize)contentSize;
// in a protocol: -(void)setParentController:(id)controller;
// in a protocol: -(id)view;
// in a protocol: -(id)navigationTitle;
// in a protocol: -(id)navigationItem;
// in a protocol: -(void)viewWillBecomeVisible:(void*)view;
// in a protocol: -(void)viewWillRedisplay;
// in a protocol: -(void)pushController:(id)controller;
// in a protocol: -(void)handleURL:(id)url;
// in a protocol: -(BOOL)popControllerWithAnimation:(BOOL)animation;
// in a protocol: -(BOOL)popController;
// in a protocol: -(void)pushNavigationItemWithTitle:(id)title;
// in a protocol: -(void)pushNavigationItem:(id)item;
// in a protocol: -(void)insertNavigationItem:(id)item atIndexFromEnd:(int)end;
// in a protocol: -(void)insertNavigationItem:(id)item atIndex:(int)index;
-(void)navigationBar:(id)bar pushedItem:(id)item;
-(void)navigationBar:(id)bar poppedItem:(id)item;
// in a protocol: -(void)popNavigationItem;
// in a protocol: -(void)popNavigationItemWithAnimation:(BOOL)animation;
// in a protocol: -(void)hideNavigationBarButtons;
// in a protocol: -(void)showLeftButton:(id)button withStyle:(int)style rightButton:(id)button3 withStyle:(int)style4;
// in a protocol: -(void)showNavigationBarButtons:(id)buttons :(id)arg2;
// in a protocol: -(void)setNavigationBarEnabled:(BOOL)enabled;
// in a protocol: -(void)setPrompt:(id)prompt;
-(void)navigationBar:(id)bar buttonClicked:(int)clicked;
// in a protocol: -(void)navigationBarButtonClicked:(int)clicked;
// in a protocol: -(void)suspend;
// in a protocol: -(void)didLock;
// in a protocol: -(void)willUnlock;
// in a protocol: -(void)didUnlock;
// in a protocol: -(void)didWake;
-(BOOL)hasTelephony;
// inherited: -(void)dealloc;
// in a protocol: -(id)parentController;
-(void)lazyLoadBundle:(id)bundle;
-(id)navigationBar;
// in a protocol: -(void)setRootController:(id)controller;
// in a protocol: -(id)rootController;
-(void)_pushController:(id)controller;
-(void)_insertController:(id)controller atIndex:(int)index;
-(void)_popController;
-(void)_removeController:(id)controller;
// in a protocol: -(void)viewDidBecomeVisible;
// in a protocol: -(void)viewTransitionCompleted;
-(void)popBackToTopController;
@end

