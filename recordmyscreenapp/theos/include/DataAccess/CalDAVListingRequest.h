/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DAVKit/DAVRequest.h>

@class CalDAVListingReader;

@interface CalDAVListingRequest : DAVRequest {
	CalDAVListingReader* _responseReader;
}
+(id)nodeWithName:(id)name;
+(id)nodeWithName:(id)name attributes:(id)attributes;
+(id)icsStringFromDate:(id)date;
-(instancetype)initWithSession:(id)session URI:(id)uri startDate:(id)date endDate:(id)date4;
// inherited: -(void)dealloc;
-(id)filenamesToETags;
// inherited: -(id)error;
@end

