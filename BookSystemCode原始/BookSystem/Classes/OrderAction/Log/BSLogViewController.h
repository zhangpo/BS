//
//  BSLogViewController.h
//  BookSystem
//
//  Created by Dream on 11-5-24.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BSDataProvider.h"
#import "BSSendView.h"
#import "BSCommonView.h"
#import "BSLogCell.h"
#import "BSSearchViewController.h"
#import "WhiteRaccoon.h"

@interface BSLogViewController : UIViewController <UITableViewDelegate,UITableViewDataSource,SendViewDelegate,BSLogCellDelegate,CommonViewDelegate,UISearchBarDelegate,BSSearchDelegate,UIActionSheetDelegate,WRRequestDelegate>{
    UIButton *btnTable,*btnSend,*btnCommon,*btnBack,*btnCache;
    
    UITableView *tvOrder;
    BSLogCell *cellEditing;
    
    UILabel *lblTitle;
    
    UIView *vHeader;
    
    BSSendView *vSend;
    BSCommonView *vCommon;
    
    NSArray *aryCommon;
    NSMutableArray *arySelectedFood;
    
    
    UILabel *lblCommon;
    

    UIView *footerView;
    
    
    UIPopoverController *popSearch,*popTemp;
    UISearchBar *barSearch;
    
    NSString *strUser;
    NSArray *aryUploading;
    CGFloat fEdittingCellPosition;
}
@property (nonatomic,retain) NSArray *aryCommon;
@property (nonatomic,copy) NSString *strUser;
@property (nonatomic,retain) NSMutableArray *arySelectedFood;
@property (nonatomic,retain) NSArray *aryUploading;
- (void)dismissViews;
@end
