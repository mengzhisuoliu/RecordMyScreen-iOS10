/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "SpringBoard-Structs.h"
#import <Availability2.h>

@class SBIconImageView, SBIconBadge, NSString, NSTimer, UIImageView, UIPushButton, SBIconLabel, CAAnimation;

@interface SBIcon : UIView {
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	UIImageView* _shadow;
#endif
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
	NSString* _filenameSafeDisplayIdentifier;
#endif
	SBIconImageView* _image;
	UIImageView* _reflection;
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
	UIView* _grayFilterView;
#endif
	SBIconBadge* _badge;
	id _badgeNumberOrString;
	SBIconLabel* _label;
	UIPushButton* _closeBox;
	unsigned _isShowingImages : 1;
	unsigned _drawsLabel : 1;
	unsigned _isHidden : 1;
	unsigned _isRevealable : 1;
	unsigned _inDock : 1;
	unsigned _isGrabbed : 1;
	unsigned _isGrabbing : 1;
	unsigned _highlighted : 1;
	unsigned _isJittering : 1;
	unsigned _allowJitter : 1;
	unsigned _touchDownInIcon : 1;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	unsigned _disableAutorotation : 1;
	unsigned _onWallpaper : 1;
#endif
	NSTimer* _delayedUnhighlightTimer;
	CGPoint _unjitterPoint;
	CGPoint _grabPoint;
	NSTimer* _grabTimer;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	UIImage* _cachedIconImages[3];
#endif
}
+(CGSize)defaultIconSize;
+(void)enqueueReusableIconImageView:(id)view;
+(id)dequeueReusableIconImageView;
+(CAAnimation*)_jitterPositionAnimation;
+(CAAnimation*)_jitterTransformAnimation;
-(instancetype)initWithDefaultSize;
// inherited: -(void)dealloc;
-(void)localeChanged;
-(void)showIconAnimationDidStop:(id)showIconAnimation didFinish:(id)finish icon:(id)icon;
-(void)setIsHidden:(BOOL)hidden animate:(BOOL)animate;
-(BOOL)isHidden;
-(void)setIsRevealable:(BOOL)revealable;
-(BOOL)isRevealable;
-(NSString*)displayName;
-(int)localizedCompareDisplayNames:(id)names;
-(NSString*)displayIdentifier;
-(id)tags;
-(BOOL)launchEnabled;
-(void)setDisplayedIcon:(id)icon;
-(UIImage*)reflectedIcon:(BOOL)icon;
-(BOOL)isShowingImages;
-(void)setShowsImages:(BOOL)images;
-(void)updateLabelOrigin;
-(BOOL)shouldEllipsizeLabel;
-(BOOL)shouldKernLabel;
-(void)setDrawsLabel:(BOOL)label;
-(void)updateLabelKerningAndEllipsing;
-(int)badgeValue;
-(void)setBadge:(NSString*)badge;
-(id)_automationID;
-(BOOL)pointMostlyInside:(CGPoint)inside withEvent:(UIEvent *)event;
-(id)darkenedIcon:(id)icon alpha:(CGFloat)alpha;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setHighlighted:(BOOL)highlighted delayUnhighlight:(BOOL)unhighlight;
-(void)_delayedUnhighlight;
-(void)setInDock:(BOOL)dock;
-(BOOL)isInDock;
-(void)setOrigin:(CGPoint)origin;
-(void)setIsJittering:(BOOL)jittering;
-(void)setAllowJitter:(BOOL)jitter;
-(BOOL)allowJitter;
-(void)removeAllIconAnimations;
-(void)setIconPosition:(CGPoint)position;
-(NSTimeInterval)grabDurationForEvent:(UIEvent *)event;
-(void)setIsGrabbed:(BOOL)grabbed;
-(BOOL)_shouldLockItemsInStoreDemoMode;
-(void)grabTimerFired;
-(void)cancelGrabTimer;
// inherited: -(void)touchesCancelled:(id)cancelled withEvent:(id)event;
// inherited: -(void)touchesBegan:(id)began withEvent:(id)event;
// inherited: -(void)touchesMoved:(id)moved withEvent:(id)event;
// inherited: -(void)touchesEnded:(id)ended withEvent:(id)event;
-(NSString*)representation;
-(void)launch;
-(BOOL)pointInside:(CGPoint)inside withEvent:(UIEvent *)event;
-(BOOL)allowsCloseBox;
-(void)hideCloseBoxAnimationDidStop:(id)hideCloseBoxAnimation didFinish:(id)finish closeBox:(id)box;
-(void)setIsShowingCloseBox:(BOOL)box;
-(BOOL)isShowingCloseBox;
-(void)closeBoxClicked:(id)sender;
-(void)completeUninstall;
// inherited: -(id)description;
-(NSString *)uninstallAlertTitle;
-(NSString *)uninstallAlertBody;
-(NSString *)uninstallAlertConfirmTitle;
-(NSString *)uninstallAlertCancelTitle;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
+(CGSize)defaultIconImageSize;
+(UIImage *)genericAppIcon:(int)icon;
-(UIImage *)generateIconImage:(int)image;
-(UIImage *)getIconImage:(int)image;
-(void)reloadIconImage;
-(NSString *)_shadowImageName;
-(void)_updateShadow;
-(void)setDisplaysOnWallpaper:(BOOL)wallpaper;
-(BOOL)showsReflection;
-(UIEdgeInsets)snapshotEdgeInsets;
-(void)setShadowsHidden:(BOOL)hidden;
-(void)_updateShadowFrameForShadow:(id)shadow;
-(void)_updateShadowFrame;
-(UIImageView *)createShadowImageView;
#endif
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
-(NSString*)filenameSafeDisplayIndentifier;
-(NSDate*)modificationDate:(BOOL)date;
-(UIImage*)icon;
-(UIImage*)smallIcon;
-(NSData *)_createIconImageDataForSmallIcon:(BOOL)smallIcon;
#endif
@end

