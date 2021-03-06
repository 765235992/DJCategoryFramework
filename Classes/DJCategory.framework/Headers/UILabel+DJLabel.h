//
//  UILabel+DJLabel.h
//  CategoryBaseDemo
//
//  Created by Jone on 2017/5/24.
//  Copyright © 2017年 河南东京Web俱乐部. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (DJLabel)
#pragma mark - 获取每行显示的内容
/**
 *  改变句中每行内容
 */
-(NSArray *)DJ_GetSeparatedLinesFromLabel;
/**
 *  获取字体尺寸
 *  @param text 字体
 *  @param font 字体样式
 *  @param maxSize 最大字体
 */
- (CGSize)DJ_GetSizeWithText:(NSString *)text font:(UIFont *)font maxSize:(CGSize)maxSize;
/**
 *  获取字体高度
 *
 *  @param font 字体样式
 */
- (CGFloat)DJ_GetTextHeightWithFont:(UIFont *)font;
#pragma mark - 改变字段字体
/**
 *  改变句中所有的字体
 *
 *  @param textFont 改变的字体
 */
- (void)DJ_changeFontWithTextFont:(UIFont *)textFont;
/**
 *  改变句中某些字段的字体
 *
 *  @param textFont 改变的字体
 *  @param text     改变的字段
 */
- (void)DJ_changeFontWithTextFont:(UIFont *)textFont changeText:(NSString *)text;
/**
 *  改变句中一些字段的字体
 *
 *  @param textFont 改变的字体
 *  @param texts     改变的字段们
 */
- (void)DJ_changeFontWithTextFont:(UIFont *)textFont changeTexts:(NSArray <NSString *>*)texts;
#pragma mark - 改变字段间距
/**
 *  改变句中所有的间距
 *
 *  @param textSpace 改变的间距
 */
- (void)DJ_changeSpaceWithTextSpace:(CGFloat)textSpace;
/**
 *  改变句中某些字段的间距
 *
 *  @param textSpace 改变的间距
 *  @param text      改变的字段
 */
- (void)DJ_changeSpaceWithTextSpace:(CGFloat)textSpace changeText:(NSString *)text;

#pragma mark - 改变行间距
/**
 *  改变句中所有的行间距
 *
 *  @param textLineSpace 改变的行间距
 */
- (void)DJ_changeLineSpaceWithTextLineSpace:(CGFloat)textLineSpace;
#pragma mark - 段落样式
/**
 *  改变句中段落样式
 *
 *  @param paragraphStyle 段落样式
 */
- (void)DJ_changeParagraphStyleWithTextParagraphStyle:(NSParagraphStyle *)paragraphStyle;

#pragma mark - 改变字段颜色
/**
 *  改变句中所有字体颜色
 *
 *  @param textColor 改变的颜色
 */
- (void)DJ_changeColorWithTextColor:(UIColor *)textColor;
/**
 *  改变句中某些字段的字体颜色
 *
 *  @param textColor 改变的颜色
 *  @param text      改变的字段
 */
- (void)DJ_changeColorWithTextColor:(UIColor *)textColor changeText:(NSString *)text;

/**
 *  改变句中一些字段的字体颜色
 *
 *  @param textColor 改变的颜色
 *  @param texts     改变的字段们
 */
- (void)DJ_changeColorWithTextColor:(UIColor *)textColor changeTexts:(NSArray <NSString *>*)texts;

#pragma mark - 改变字段背景颜色
/**
 *  改变句中所有字段的背景颜色
 *
 *  @param bgTextColor 改变的背景颜色
 */
- (void)DJ_changeBgColorWithBgTextColor:(UIColor *)bgTextColor;
/**
 *  改变句中某些字段的背景颜色
 *
 *  @param bgTextColor 改变的背景颜色
 *  @param text        改变的字段
 */
- (void)DJ_changeBgColorWithBgTextColor:(UIColor *)bgTextColor changeText:(NSString *)text;

#pragma mark - 改变字段连笔字 value值为1或者0
/**
 *  改变句中所有字段连笔
 *
 *  @param textLigature 默认是1连笔 0不连笔
 */
- (void)DJ_changeLigatureWithTextLigature:(NSNumber *)textLigature;
/**
 *  改变句中某些字段连笔
 *
 *  @param textLigature 默认是1连笔 0不连笔
 *  @param text         改变的字段
 */
- (void)DJ_changeLigatureWithTextLigature:(NSNumber *)textLigature changeText:(NSString *)text;

#pragma mark - 改变字间距
/**
 *  改变所有字段间距
 *
 *  @param textKern 改变的间距大小
 */
- (void)DJ_changeKernWithTextKern:(NSNumber *)textKern;
/**
 *  改变句中某些字段间距
 *
 *  @param textKern 改变的间距大小
 *  @param text     改变的字段
 */
- (void)DJ_changeKernWithTextKern:(NSNumber *)textKern changeText:(NSString *)text;

#pragma mark - 改变字的删除线 textStrikethroughStyle 为NSUnderlineStyle
/**
 *  改变所有字段的删除线
 *
 *  @param textStrikethroughStyle 改变的删除线类型
 */
- (void)DJ_changeStrikethroughStyleWithTextStrikethroughStyle:(NSNumber *)textStrikethroughStyle;
/**
 *  改变句中某些字段的删除线
 *
 *  @param textStrikethroughStyle 改变的删除线类型
 *  @param text                   改变的字段
 */
- (void)DJ_changeStrikethroughStyleWithTextStrikethroughStyle:(NSNumber *)textStrikethroughStyle changeText:(NSString *)text;

#pragma mark - 改变字的删除线颜色
/**
 *  改变所有字段的删除线颜色
 *
 *  @param textStrikethroughColor 改变的删除线颜色
 */
- (void)DJ_changeStrikethroughColorWithTextStrikethroughColor:(UIColor *)textStrikethroughColor NS_AVAILABLE(10_0, 7_0);
/**
 *  改变句中某些字段的删除线颜色
 *
 *  @param textStrikethroughColor 改变的删除线颜色
 *  @param text                   改变的字段
 */
- (void)DJ_changeStrikethroughColorWithTextStrikethroughColor:(UIColor *)textStrikethroughColor changeText:(NSString *)text NS_AVAILABLE(10_0, 7_0);

#pragma mark - 改变字的下划线 textUnderlineStyle 为NSUnderlineStyle
/**
 *  改变所有字段的下划线
 *
 *  @param textUnderlineStyle 改变的下划线类型
 */
- (void)DJ_changeUnderlineStyleWithTextStrikethroughStyle:(NSNumber *)textUnderlineStyle;
/**
 *  改变句中某些字段的下划线
 *
 *  @param textUnderlineStyle 改变的下划线类型
 *  @param text               改变的字段
 */
- (void)DJ_changeUnderlineStyleWithTextStrikethroughStyle:(NSNumber *)textUnderlineStyle changeText:(NSString *)text;

#pragma mark - 改变字的下划线颜色
/**
 *  改变所有字段的下划线颜色
 *
 *  @param textUnderlineColor 改变的下划线颜色
 */
- (void)DJ_changeUnderlineColorWithTextStrikethroughColor:(UIColor *)textUnderlineColor NS_AVAILABLE(10_0, 7_0);
/**
 *  改变句中某些字段的下划线颜色
 *
 *  @param textUnderlineColor 改变的下划线颜色
 *  @param text               改变的字段
 */
- (void)DJ_changeUnderlineColorWithTextStrikethroughColor:(UIColor *)textUnderlineColor changeText:(NSString *)text NS_AVAILABLE(10_0, 7_0);

#pragma mark - 改变字的颜色
/**
 *  改变所有字段的颜色
 *
 *  @param textStrokeColor 改变的颜色
 */
- (void)DJ_changeStrokeColorWithTextStrikethroughColor:(UIColor *)textStrokeColor;
/**
 *  改变句中某些字段的描边
 *
 *  @param textStrokeColor 改变的颜色
 *  @param text            改变的字段
 */
- (void)DJ_changeStrokeColorWithTextStrikethroughColor:(UIColor *)textStrokeColor changeText:(NSString *)text;

#pragma mark - 改变字的描边
/**
 *  改变所有字段的描边
 *
 *  @param textStrokeWidth 改变的描边
 */
- (void)DJ_changeStrokeWidthWithTextStrikethroughWidth:(NSNumber *)textStrokeWidth;
/**
 *  改变句中某些字段的描边
 *
 *  @param textStrokeWidth 改变的描边
 *  @param text            改变的字段
 */
- (void)DJ_changeStrokeWidthWithTextStrikethroughWidth:(NSNumber *)textStrokeWidth changeText:(NSString *)text;

#pragma mark - 改变字的阴影
/**
 *  改变所有字段的阴影
 *
 *  @param textShadow 改变的阴影
 */
- (void)DJ_changeShadowWithTextShadow:(NSShadow *)textShadow;
/**
 *  改变句中某些字段的阴影
 *
 *  @param textShadow 改变的阴影
 *  @param text       改变的字段
 */
- (void)DJ_changeShadowWithTextShadow:(NSShadow *)textShadow changeText:(NSString *)text;

#pragma mark - 改变字的特殊效果
/**
 *  改变所有字段的特殊效果
 *
 *  @param textEffect 改变的特殊效果
 */
- (void)DJ_changeTextEffectWithTextEffect:(NSString *)textEffect NS_AVAILABLE(10_10, 7_0);
/**
 *  改变句中某些字段的特殊效果
 *
 *  @param textEffect 改变的特殊效果
 *  @param text       改变的字段
 */
- (void)DJ_changeTextEffectWithTextEffect:(NSString *)textEffect changeText:(NSString *)text NS_AVAILABLE(10_10, 7_0);

#pragma mark - 改变字的文本附件
/**
 *  改变所有字段的文本附件
 *
 *  @param textAttachment 改变的文本附件
 */
- (void)DJ_changeAttachmentWithTextAttachment:(NSTextAttachment *)textAttachment NS_AVAILABLE(10_0, 7_0);
/**
 *  改变句中某些字段的文本附件
 *
 *  @param textAttachment 改变的文本附件
 *  @param text           改变的字段
 */
- (void)DJ_changeAttachmentWithTextAttachment:(NSTextAttachment *)textAttachment changeText:(NSString *)text NS_AVAILABLE(10_0, 7_0);

#pragma mark - 改变字的链接
/**
 *  改变所有字段的链接
 *
 *  @param textLink 改变的链接
 */
- (void)DJ_changeLinkWithTextLink:(NSString *)textLink NS_AVAILABLE(10_0, 7_0);
/**
 *  改变句中某些字段的链接
 *
 *  @param textLink 改变的链接
 *  @param text     改变的字段
 */
- (void)DJ_changeLinkWithTextLink:(NSString *)textLink changeText:(NSString *)text NS_AVAILABLE(10_0, 7_0);

#pragma mark - 改变字的基准线偏移 value>0坐标往上偏移 value<0坐标往下偏移
/**
 *  改变所有字段的基准线偏移
 *
 *  @param textBaselineOffset 改变的偏移大小
 */
- (void)DJ_changeBaselineOffsetWithTextBaselineOffset:(NSNumber *)textBaselineOffset NS_AVAILABLE(10_0, 7_0);
/**
 *  改变句中某些字段的基准线偏移
 *
 *  @param textBaselineOffset 改变的偏移大小
 *  @param text               改变的字段
 */
- (void)DJ_changeBaselineOffsetWithTextBaselineOffset:(NSNumber *)textBaselineOffset changeText:(NSString *)text NS_AVAILABLE(10_0, 7_0);

#pragma mark - 改变字的倾斜 value>0向右倾斜 value<0向左倾斜
/**
 *  改变所有字段的倾斜
 *
 *  @param textObliqueness 改变的倾斜大小
 */
- (void)DJ_changeObliquenessWithTextObliqueness:(NSNumber *)textObliqueness NS_AVAILABLE(10_0, 7_0);
/**
 *  改变句中某些字段的倾斜
 *
 *  @param textObliqueness 改变的倾斜大小
 *  @param text            改变的字段
 */
- (void)DJ_changeObliquenessWithTextObliqueness:(NSNumber *)textObliqueness changeText:(NSString *)text NS_AVAILABLE(10_0, 7_0);

#pragma mark - 改变字粗细 0就是不变 >0加粗 <0加细
/**
 *  改变所有字段的粗细
 *
 *  @param textExpansion 改变的粗细大小
 */
- (void)DJ_changeExpansionsWithTextExpansion:(NSNumber *)textExpansion NS_AVAILABLE(10_0, 7_0);
/**
 *  改变句中某些字段的粗细
 *
 *  @param textExpansion 改变的粗细大小
 *  @param text          改变的字段
 */
- (void)DJ_changeExpansionsWithTextExpansion:(NSNumber *)textExpansion changeText:(NSString *)text NS_AVAILABLE(10_0, 7_0);

#pragma mark - 改变字方向 NSWritingDirection
/**
 *  设置文字书写方向
 *
 *  @param textWritingDirection 改变的书写方向
 *  @param text                 改变的字段
 */
- (void)DJ_changeWritingDirectionWithTextExpansion:(NSArray *)textWritingDirection changeText:(NSString *)text NS_AVAILABLE(10_0, 7_0);

#pragma mark - 改变字的水平或者竖直 1竖直 0水平
/**
 *  设置文字排版方向
 *
 *  @param textVerticalGlyphForm 改变的排版方向
 *  @param text                  改变的字段
 */
- (void)DJ_changeVerticalGlyphFormWithTextVerticalGlyphForm:(NSNumber *)textVerticalGlyphForm changeText:(NSString *)text;

#pragma mark - 改变字的两端对齐
/**
 *  改变字段两端对齐
 *
 *  @param textCTKern 改变的对齐
 */
- (void)DJ_changeCTKernWithTextCTKern:(NSNumber *)textCTKern;

@end



