//
//  DJCountDownDate.h
//  DJCategory
//
//  Created by Jone on 2017/11/26.
//  Copyright © 2017年 河南东京Web俱乐部. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DJCountDownDate : NSObject
///用NSDate日期倒计时
-(void)countDownWithStratDate:(NSDate *)startDate finishDate:(NSDate *)finishDate completeBlock:(void (^)(NSInteger day,NSInteger hour,NSInteger minute,NSInteger second))completeBlock;
///用时间戳倒计时
-(void)countDownWithStratTimeStamp:(NSString *)starTimeStamp finishTimeStamp:(NSString *)finishTimeStamp completeBlock:(void (^)(NSInteger day,NSInteger hour,NSInteger minute,NSInteger second))completeBlock;
///每秒走一次，回调block
-(void)countDownWithPER_SECBlock:(void (^)(void))PER_SECBlock;
-(void)destoryTimer;
-(NSDate *)dateWithTimeStamp:(NSString *)timeStamp;
@end

