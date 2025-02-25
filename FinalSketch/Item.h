//
//  Article.h
//  Splitting Up is Easy To Do
//
//  Created by Yifan Xiao & Yecheng Li on 2/20/15.
//  Copyright (c) 2015 Yifan Xiao & Yecheng Li. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface Item : NSObject<NSCoding>

@property (strong,nonatomic) NSString *title;
@property (strong,nonatomic) NSString *itemDescription;
@property (strong,nonatomic) NSString *date;
@property (strong,nonatomic) UIImage *image;
@property (strong,nonatomic) NSString *category;
@property (strong,nonatomic) UIImage *categoryPic;
@property (strong,nonatomic) CLLocation *location;
@property (strong,nonatomic) NSString *locationDescription;
@property (strong,nonatomic) NSNumber *price;

@end
