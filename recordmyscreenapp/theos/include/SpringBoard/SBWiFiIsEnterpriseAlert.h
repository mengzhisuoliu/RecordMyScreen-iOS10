/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"
#import <Availability2.h>


@interface SBWiFiIsEnterpriseAlert : SBAlertItem {
	id _delegate;
}
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
// inherited: -(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@property(assign, nonatomic) id delegate;
#else
-(void)setDelegate:(id)delegate;
#endif
// inherited: -(void)dismiss;
@end

