//
//  UIColor+DJColor.h
//  CategoryBaseDemo
//
//  Created by Jone on 2017/5/24.
//  Copyright © 2017年 河南东京Web俱乐部. All rights reserved.
//

#import <UIKit/UIKit.h>
#define DJ_RGBA_Color(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]

typedef NS_ENUM(NSInteger, DJ_ColorType) {
    DJ_ColorTypeRed   = 1,
    DJ_ColorTypeGreen = 2,
    DJ_ColorTypeBlue  = 3,
    DJ_ColorTypeAlpha = 4
};

@interface UIColor (DJColor)
/**
 *  随机颜色
 */
+ (UIColor *)DJ_randomColor;

/**
 *  16进制颜色
 */
+ (UIColor *)DJ_colorWithHexString:(NSString *)color;

/**
 *  rgbValue颜色
 */
+ (UIColor *)DJ_colorWithRGBValue:(int)rgbValue;


- (CGColorSpaceModel)DJ_colorSpaceModel;
- (CGFloat)DJ_red;
- (CGFloat)DJ_green;
- (CGFloat)DJ_blue;
- (CGFloat)DJ_alpha;

- (UIColor *)DJ_reverseColor;
- (NSString *)DJ_printDetail;

- (UIColor *)DJ_up:(DJ_ColorType)type num:(NSInteger)num;
- (UIColor *)DJ_down:(DJ_ColorType)type num:(NSInteger)num;


@end
