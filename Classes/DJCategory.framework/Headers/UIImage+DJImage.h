//
//  UIImage+DJImage.h
//  CategoryBaseDemo
//
//  Created by Jone on 2017/5/24.
//  Copyright © 2017年 河南东京Web俱乐部. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (DJImage)
/*
 *【根据传入的图片,生成一张带有边框的圆形图片】
 */
- (instancetype)DJ_circleImageWithBorder:(CGFloat)borderW color:(UIColor *)borderColor;
/**
 * 将UIColor变换为UIImage
 *
 **/
+ (UIImage *)DJ_createImageWithColor:(UIColor *)color;

/**
 * 将UIColor变换为UIImage
 *
 *  imageSize图片宽高
 *
 **/
+ (UIImage *)DJ_createImageWithColor:(UIColor *)color andSize:(CGSize)imageSize;

/**
 * 图片尺寸修改
 *
 *  size 新的图片宽高
 *
 *  image 原始图片
 *
 **/
+ (UIImage *)DJ_originImage:(UIImage *)image scaleToSize:(CGSize)size;

@end
