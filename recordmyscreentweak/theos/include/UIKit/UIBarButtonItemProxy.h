/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>

@class UIImageView, UIBarButtonItem;

@interface UIBarButtonItemProxy : NSObject {
	UIBarButtonItem* _item;
	UIImageView* _view;
}
-(instancetype)initWithItem:(id)item inToolbar:(id)toolbar;
-(void)dealloc;
-(id)item;
-(id)view;
@end

