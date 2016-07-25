//
//  MainViewController.h
//  Caculator
//
//  Created by 创新创业中心 on 16/7/25.
//  Copyright © 2016年 UESTCACM QKTeam. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface MainViewController : UIViewController


@property(retain,nonatomic) UIButton *button;
@property(retain,nonatomic) UILabel *label;
@property(retain,nonatomic) NSMutableString *string;  
@property(assign,nonatomic) double num1,num2;
@property(assign,nonatomic) NSString *str;

@end