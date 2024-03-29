//
//  BSQueryViewController.h
//  BookSystem
//
//  Created by Dream on 11-5-24.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BSDataProvider.h"
#import "BSQueryView.h"
#import "BSGogoView.h"
#import "BSChuckView.h"
#import "BSQueryCell.h"
#import "BSPrintQueryView.h"

@interface BSQueryViewController : UIViewController <UITableViewDelegate,UITableViewDataSource,QueryViewDelegate,GogoViewDelegate,ChuckViewDelegate,PrintQueryViewDelegate>{
    UIButton *btnQuery,*btnGogo,*btnPrint,*btnChuck,*btnBack;
    
    UITableView *tvOrder;
    
    UILabel *lblTitle;

    NSDictionary *dicOrder,*dictQuery;
    
    UIView *vHeader;
    
    int dGogoCount,dChuckCount;
    
    BSChuckView *vChuck;
    BSQueryView *vQuery;
    BSGogoView *vGogo;
    BSPrintQueryView *vPrint;
    
    NSString *strTable;
    
    NSString *strUser,*strPwd;
    
    int dTable;
    NSMutableArray *arySelectedFood;

}
@property (nonatomic,copy) NSString *strTable;
@property (nonatomic,copy) NSString *strUser,*strPwd;

- (void)dismissViews;

@property (nonatomic,retain) NSDictionary *dicOrder,*dicQuery;;
@property (nonatomic,retain) NSMutableArray *arySelectedFood;
@end
