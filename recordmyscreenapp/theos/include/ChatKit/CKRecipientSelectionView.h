/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"
#import <UIKit/UIView.h>
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "CKOverlayViewProtocol.h"

@class UITableView, NSArray, ComposeRecipientView, UIScroller, SearchShadowView;

@interface CKRecipientSelectionView : UIView <UITableViewDataSource, UITableViewDelegate, CKOverlayViewProtocol> {
	ComposeRecipientView* _toField;
	UIScroller* _toFieldScrollingView;
	NSArray* _searchResults;
	UITableView* _searchResultsTable;
	SearchShadowView* _shadowView;
	BOOL _showingSearchField;
	id _delegate;
}
@property(assign, nonatomic) id delegate;
@property(readonly, assign, nonatomic, getter=isShowingSearchField) BOOL showingSearchField;
-(instancetype)initWithFrame:(CGRect)frame ABProperties:(id)properties;
-(void)dealloc;
-(BOOL)hasText;
-(id)recipients;
-(void)reset;
-(id)toField;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)composeRecipientView:(id)view textDidChange:(id)text;
-(void)composeRecipientView:(id)view requestDeleteRecipientAtIndex:(int)index;
-(void)composeRecipientViewDidFinishEnteringRecipient:(id)composeRecipientView;
-(id)composeRecipientView:(id)view composeRecipientForAddress:(id)address;
-(id)composeRecipientView:(id)view composeRecipientForRecord:(void*)record property:(int)property identifier:(int)identifier;
-(void)composeRecipientView:(id)view didChangeSize:(CGSize)size;
-(void)composeRecipientViewRequestAddRecipient:(id)recipient;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)composeRecipientView;
-(void)animationDidStop:(id)animation;
-(void)_updateContentSize;
-(void)reflow;
-(void)_hideSearchField:(BOOL)field;
-(void)_showSearchField:(BOOL)field;
-(void)_searchWithText:(id)text;
-(float)heightWithoutSeparator;
@end

