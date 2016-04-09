/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIThreePartButton.h>
#import "ChatKit-Structs.h"

@class UIImageView, UITextLabel;

@interface MailToolbarButton : UIThreePartButton {
	UITextLabel* _titleLabel;
	UIImageView* _iconView;
	BOOL _isRed;
	BOOL _isMinibar;
}
-(instancetype)initAsRed:(BOOL)red;
-(void)dealloc;
-(void)setEnabled:(BOOL)enabled;
-(CGPoint)_offsetForMiniBarState:(BOOL)miniBarState;
-(void)updateForMiniBarState:(BOOL)miniBarState;
-(void)setTitle:(id)title;
-(void)layoutSubviews;
@end

