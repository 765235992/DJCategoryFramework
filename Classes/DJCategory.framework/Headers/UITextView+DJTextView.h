//
//  UITextView+DJTextView.h
//  CategoryBaseDemo
//
//  Created by Jone on 2017/6/28.
//  Copyright © 2017年 河南东京Web俱乐部. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (DJTextView)

@property (assign, nonatomic) NSInteger DJ_maxLength;

@property (nonatomic, strong) UITextView *DJ_placeHolderTextView;

- (void)DJ_addPlaceHolder:(NSString *)placeHolder;

@end
