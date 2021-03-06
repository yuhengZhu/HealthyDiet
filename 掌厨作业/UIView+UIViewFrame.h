//
//  UIView+UIViewFrame.h
//  美食圈圈
//
//  Created by MS on 15-8-14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (UIViewFrame)

/**
 *  直接获得一个View的宽度
 */
@property(nonatomic, assign)CGFloat width;

/**
 *  直接获得一个View的高度
 */
@property(nonatomic, assign)CGFloat height;

/**
 *  直接设置View的x坐标
 */
@property(nonatomic, assign)CGFloat x;

/**
 *  直接设置View的y坐标
 */
@property(nonatomic, assign)CGFloat y;

@end
