//
//  NSDate+DJDate.h
//  CategoryBaseDemo
//
//  Created by Jone on 2017/5/24.
//  Copyright © 2017年 河南东京Web俱乐部. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (DJDate)
/*
 *  获取当前时间时间戳
 */
+ (NSInteger)getNowTimestamp;
/**
 *  时间戳转化为时间类型
 */
+ (NSDate *)dateWithTimeStamp:(NSString *)timeStamp;
/*
 *  时间戳转换为定义格式时间类型
 *  timeStamp 时间戳
 *  formatterString formatter(yyyy-MM-dd、HH:mm等等)
 */
+ (NSDateFormatter *)dateFormatterWithTimeStamp:(NSString *)timeStamp andFormatterString:(NSString *)formatterString;
/*
 *  格式化日期
 *  formatter(yyyy-MM-dd、HH:mm等等)
 */
+ (NSString *)DJ_getFormatterDateWithFormatter:(NSString *)formatter fromUTCDateString:(NSString *)utcDateString;
/*
 *  时间戳
 *  formatter(yyyy-MM-dd、HH:mm等等)
 */
+ (NSString *)DJ_getFormatterDateWithFormatter:(NSString *)formatter fromUnixTimetampString:(NSString *)unixTimetampString;
/*
 *  取秒差
 */
+ (NSString *)DJ_GetUTCFormateDateWithTimeStamp:(NSString *)timeStamp;
@end

