//
//  DJRegexManager.h
//  CategoryBaseDemo
//
//  Created by Jone on 2017/5/24.
//  Copyright © 2017年 河南东京Web俱乐部. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DJRegexMaker.h"

@interface DJRegexManager : NSObject
/**
 *  正则创建
 *
 *  @param makingHandler 正则创建处理block
 *
 *  @return 正则串
 */
+(NSString *)DJ_makeRegex:(void(^)(DJRegexMaker* regex)) makingHandler;


/**
 *  判断所传字符串是否匹配正则
 *
 *  @param matchParam 需要判断的字符串
 *  @param regex      正则
 *
 *  @return 是否匹配
 */
+(BOOL)DJ_isMatched:(NSString *) matchParam regex:(NSString*) regex;


//----------------------------常用正则
/**
 *  判断用户名或密码是否合法
 *  规则：字母开头，可以包含数字，字母，下划线，6－16位。
 *  其实不是很通用，各位可以根据具体实现来修改成自己需要的。：）
 */
+(BOOL)DJ_isUsernameOrPassword:(NSString *) userNameOrPassword;
/**
 *  判断手机号码是否合法
 */
+(BOOL)DJ_isCellPhoneNumber:(NSString *) cellphoneNumber;
/**
 *  判断身份证号是否合法
 */
+(BOOL)DJ_isIDNumber:(NSString *) idNumber;
/**
 *  判断是否是email,以qq邮箱为例，如果不满足需求，可以查看具体实现来修改。
 *  规则：邮箱名称以3-18位字母，数字，点，减号，下划线组成。
 *  感觉也不是很通用，每个邮箱的规则命名的规则都不一样，所以还是把实现代码拿出来修改比较合适。
 */
+(BOOL)DJ_isEmail:(NSString *) email;


//----------------------------不常用正则
/**
 *  判断是否是电话号码
 */
+(BOOL)DJ_isTelePhoneNumber:(NSString *) telephoneNumber;
/**
 *  判断是否是金额数, 例如:1.00 5.99 0.11
 *  判断金额应该还不错，如果不满足需要，到实现里修改下参数即可。
 */
+(BOOL)DJ_isMoney:(NSString *) number;
/**
 *  判断是否包含特殊字符（只要不是字母，数字，都是特殊字符）
 *  如果你要做一些例外操作打话，可以去实现修改相关代码。
 */
+(BOOL)DJ_ifContainSpecialChars:(NSString *) string;
/**
 *  判断是否是纯汉字
 */
+(BOOL)DJ_isChinese:(NSString *) string;
/**
 *  判断是否是url
 */
+(BOOL)DJ_isURL:(NSString *) url;
/**
 *  判断是否是qq号
 */
+(BOOL)DJ_isQQNumber:(NSString *) string;
/**
 *  判断是否是邮编
 */
+(BOOL)DJ_isPostcode:(NSString *) string;

@end
