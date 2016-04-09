/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIControl.h>

@class UILabel, UIColor, UIToolbarButtonBadge, UISelectionIndicatorView;

@interface UIToolbarButton : UIControl {
	CGRect _hitRect;
	UIView* _info;
	UILabel* _label;
	UIToolbarButtonBadge* _badge;
	UISelectionIndicatorView* _selectedIndicator;
	int _barStyle;
	int _style;
	UIEdgeInsets _glowAdjust;
	BOOL _onState;
	BOOL _barHeight;
	BOOL _badgeAnimated;
	BOOL _bezel;
	float _width;
	float _labelHeight;
	UIEdgeInsets _infoInsets;
	UIColor* _tintColor;
}
+(id)_defaultLabelFont;
+(id)_defaultLabelColor;
+(id)_pushButtonWithBarStyle:(int)barStyle withStyle:(int)style withTintColor:(id)tintColor;
+(void)_adjustPushButton:(id)button withBarStyle:(int)barStyle withStyle:(int)style withTintColor:(id)tintColor;
-(instancetype)initWithImage:(id)image selectedImage:(id)image2 label:(id)label labelHeight:(float)height withBarStyle:(int)barStyle withStyle:(int)style withInsets:(UIEdgeInsets)insets possibleTitles:(id)titles withTintColor:(id)tintColor bezel:(BOOL)bezel imageInsets:(UIEdgeInsets)insets11 glowInsets:(UIEdgeInsets)insets12;
-(void)dealloc;
-(void)setSizesToFitImage:(BOOL)fitImage;
-(void)_sizeView:(id)view toPossibleTitles:(id)possibleTitles selectedTitle:(id)title;
-(void)setImage:(id)image;
-(void)_setButtonBarHitRect:(CGRect)rect;
-(CGRect)_buttonBarHitRect;
-(void)_showSelectedIndicator:(BOOL)indicator changeSelection:(BOOL)selection;
-(void)_setSelected:(BOOL)selected;
-(void)_positionBadge;
-(void)setFrame:(CGRect)frame;
-(void)_setBadgeValue:(id)value;
-(void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;
-(void)_setBadgeAnimated:(BOOL)animated;
-(void)_setInfoWidth:(float)width;
-(void)setEnabled:(BOOL)enabled;
-(BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)setHighlighted:(BOOL)highlighted;
-(void)_adjustPushButton:(BOOL)button;
-(void)layoutSubviews;
-(BOOL)_isBordered;
-(void)_setOn:(BOOL)on;
-(BOOL)_isOn;
-(void)_animateImage:(float)image withButtonBar:(id)buttonBar target:(id)target didFinishSelector:(SEL)selector;
-(void)_animateImage:(float)image withButtonBar:(id)buttonBar;
-(void)_setBarHeight:(float)height;
-(BOOL)_useBarHeight;
-(void)setTintColor:(id)color;
-(void)_adjustPushButtonWithBarStyle:(int)barStyle withTintColor:(id)tintColor;
@end

