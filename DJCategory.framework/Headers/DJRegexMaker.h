//
//  DJRegexMaker.h
//  CategoryBaseDemo
//
//  Created by Jone on 2017/5/24.
//  Copyright © 2017年 河南东京Web俱乐部. All rights reserved.
//

#import <Foundation/Foundation.h>
//匹配数字
#define DJ_ERNumber                   @"[0-9]"
//匹配小写字母
#define DJ_ERLowerCase                @"[a-z]"
//匹配大写字母
#define DJ_ERCaps                     @"[A-Z]"
//匹配字母
#define DJ_ERLetter                   @"[A-Za-z]"
//匹配字母数字
#define DJ_ERNumberAndLetter          @"[A-Za-z0-9]"
//匹配字幕数字下划线
#define DJ_ERNumberLetterAndUnderLine @"\\w"
//任意匹配
#define ERAny                      @"."
//匹配数字，小数
#define ERFloat                    @"[0-9]+([.]{0,1}[0-9]+){0,1}"


@interface DJRegexMaker : NSObject
/**
 *  单例初始化
 */
+(instancetype) sharedMaker;

/**
 *  正则的头部，既以什么开始
 */
@property (nonatomic,weak) DJRegexMaker *begin;
/**
 *  追加正则约束（非头部，尾部）
 */
@property (nonatomic,weak) DJRegexMaker *addRule;
/**
 *  正则的尾部，既以什么结尾
 */
@property (nonatomic,weak) DJRegexMaker *end;
/**
 *  正则的组合，一般用在组合正则条件时
 */
@property (nonatomic,weak) DJRegexMaker *combo;

/**
 *  组合正则条件－开始
 */
-(DJRegexMaker*(^)(void))DJ_startCombo;
/**
 *  组合正则条件－结束
 */
-(DJRegexMaker*(^)(void))DJ_endCombo;



/**
 *  以上一个正则内容限制为结尾
 */
-(DJRegexMaker*(^)(void))DJ_endAsLastRule;



/**
 *  设置操作用字符串
 *
 *  @param operatingStr 操作用字符串
 */
-(void)DJ_setOperatingString:(NSMutableString *) operatingStr;
/**
 *  获取正则串
 *
 *
 *  @return 正则串
 */
-(NSString*)DJ_getRegex;



/**
 *  正则匹配类型的约束，单参，例如@"a",@"123",纯数字，纯字母等。
 */
-(DJRegexMaker*(^)(NSString* type))DJ_is;
/**
 *  正则匹配类型的约束，多参，例如@"a"或@"1"，纯数字或纯字母等其中之一。
 */
-(DJRegexMaker*(^)(NSString* type,...))DJ_maybe;


/**
 *  正则匹配字符长度(出现次数)设置
 */
-(DJRegexMaker*(^)(NSInteger length))DJ_length;
/**
 *  正则匹配字符长度(出现次数)范围设置
 */
-(DJRegexMaker*(^)(NSInteger min,NSInteger max))DJ_lengthRange;
/**
 *  正则匹配字符长度(出现次数)至少有多少
 */
-(DJRegexMaker*(^)(NSInteger min))DJ_atLest;
/**
 *  正则匹配字符长度(出现次数)最多有多少,注意从0开始
 */
-(DJRegexMaker*(^)(NSInteger max))DJ_atMost;
@end
