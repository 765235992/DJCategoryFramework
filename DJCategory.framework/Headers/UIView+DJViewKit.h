//
//  UIView+DJViewKit.h
//  CategoryBaseDemo
//
//  Created by Jone on 2017/5/24.
//  Copyright © 2017年 河南东京Web俱乐部. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (DJViewKit)
@property (nonatomic, assign) CGFloat DJ_x;
@property (nonatomic, assign) CGFloat DJ_y;
@property (nonatomic, assign) CGFloat DJ_width;
@property (nonatomic, assign) CGFloat DJ_height;
@property (nonatomic, assign, readonly) CGFloat DJ_maxX;
@property (nonatomic, assign, readonly) CGFloat DJ_maxY;
- (void)DJ_DrawLineOfDashByCAShapeLayerWithLineLength:(int)lineLength lineSpacing:(int)lineSpacing lineColor:(UIColor *)lineColor lineDirection:(BOOL)isHorizonal;
@end
