//
//  UITextField+DJTextField.h
//  CategoryBaseDemo
//
//  Created by Jone on 2017/6/28.
//  Copyright © 2017年 河南东京Web俱乐部. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (DJTextField)
/*
 *【设置占位文字的颜色】
 * @param placeholderColor  占位文字的颜色 属性
 * 通过这个属性名，就可以修改textField内部的占位文字颜色
 */
@property UIColor *placeholderColor;

@property (nonatomic, assign) CGFloat padding;


@end
