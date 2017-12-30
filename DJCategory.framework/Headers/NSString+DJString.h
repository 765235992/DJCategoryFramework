//
//  NSString+DJString.h
//  CategoryBaseDemo
//
//  Created by Jone on 2017/5/24.
//  Copyright © 2017年 河南东京Web俱乐部. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (DJString)
@property (nonatomic, readonly) NSString *DJ_md5;
@property (nonatomic, readonly) NSString *DJ_sha1;
@property (nonatomic, readonly) NSString *DJ_sha224;
@property (nonatomic, readonly) NSString *DJ_sha256;
@property (nonatomic, readonly) NSString *DJ_sha384;
@property (nonatomic, readonly) NSString *DJ_sha512;

/*
 *  MD5加密
 */
+ (NSString *)DJ_md5ByString:(NSString *)aString;
+ (NSString *)DJ_sha1ByString:(NSString *)aString;
+ (NSString *)DJ_sha224ByString:(NSString *)aString;
+ (NSString *)DJ_sha256ByString:(NSString *)aString;
+ (NSString *)DJ_sha384ByString:(NSString *)aString;
+ (NSString *)DJ_sha512ByString:(NSString *)aString;
/**
 *  @brief
 *  Encoded 编码
 *  @return 编码结果
 */
- (NSString *)DJ_urlEncodedString;
/**
 *  @brief
 *  Encoded 解码
 *  @return 解码结果
 */
- (NSString *)DJ_urlDecodeString;
/**
 *  删除输入字符串的头尾的空白符号
 */
+ (NSString *)DJ_TrimBothSidesOfTheBlankSpace:(NSString *)string;
/**
 *  判断字符串是否为空
 */
+ (BOOL)DJ_isEmpty:(NSString *)string;
/**
 *  判断字符串是否Integer类型
 */
+ (BOOL)DJ_isUInteger:(NSString *)string;
/**
 *  @brief  判断是否含有emoji表情
 *  @param string 字符串
 */
+ (BOOL)DJ_stringContainsEmoji:(NSString *)string;
/**
 *  @brief  过滤emoji表情
 *  @param emojiStr 表情字符串
 */
+ (NSString *)DJ_converStrEmoji:(NSString *)emojiStr;

- (BOOL)DJ_isMatchesRegExp:(NSString *)regExp;

/**
 *  @brief 获取字符串的尺寸
 *  @param constrainedSize 最大尺寸
 */
- (CGSize)DJ_sizeWithFont:(UIFont *)font inScopeOfSize:(CGSize)constrainedSize;
/**
 *  计算字符串宽度(指当该字符串放在view时的自适应宽度)
 *
 *  @param size 填入预留的大小
 *  @param font 字体大小
 *  @param isBold 字体是否加粗
 *
 *  @return 返回CGRect
 */
- (CGRect)DJ_stringWidthRectWithSize:(CGSize)size fontOfSize:(CGFloat)font isBold:(BOOL)isBold;
/**
 *  @brief 根据字数的不同,返回UILabel中的text文字需要占用多少Size
 *  @param size 约束的尺寸
 *  @param font 文本字体
 *  @return 文本的实际尺寸
 */
- (CGSize)DJ_textSizeWithContentSize:(CGSize)size font:(UIFont *)font;

/**
 *  @brief  根据文本字数/文本宽度约束/文本字体 求得text的Size
 *  @param width 宽度约束
 *  @param font  文本字体
 *  @return 文本的实际高度
 */
- (CGFloat)DJ_textHeightWithContentWidth:(CGFloat)width font:(UIFont *)font;

/**
 *  @brief  根据文本字数/文本宽度约束/文本字体 求得text的Size
 *  @param height 宽度约束
 *  @param font  文本字体
 *  @return 文本的实际长度
 */
- (CGFloat)DJ_textWidthWithContentHeight:(CGFloat)height font:(UIFont *)font;



@end


