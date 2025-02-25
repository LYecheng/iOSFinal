//
//  FirstViewController.h
//  FinalSketch
//
//  Created by Yifan Xiao & Yecheng Li on 2/24/15.
//  Copyright (c) 2015 Yifan Xiao & Yecheng Li. All rights reserved.
//
#import <Dropbox/Dropbox.h>
#import <UIKit/UIKit.h>
#include "RNFrostedSidebar.h"

@interface FirstViewController : UIViewController<UITableViewDelegate, UITableViewDataSource, RNFrostedSidebarDelegate>

@property (nonatomic, strong) NSMutableArray *itemArray;
@property (nonatomic, strong) NSMutableArray *map;
@property (nonatomic, strong) NSMutableArray *timeline;
@property (nonatomic, strong) DBAccount *account;

@property (nonatomic, assign) BOOL loadingFiles;


@end

