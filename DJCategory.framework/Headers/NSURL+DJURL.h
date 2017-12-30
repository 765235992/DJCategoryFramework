//
//  NSURL+DJURL.h
//  CategoryBaseDemo
//
//  Created by Jone on 2017/5/24.
//  Copyright © 2017年 河南东京Web俱乐部. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (DJURL)
/**
 *  返回请求的参数
 */
- (NSDictionary *)DJ_queryDictionary;

/**
 *  @return URL 返回完成的链接请求
 *  @param queryDictionary 请求参数
 *  @param sortedKeys 是否根据Key进行排序
 *  @warning 参数重叠会重新复制
 */
- (NSURL *)DJ_URLByAppendingQueryDictionary:(NSDictionary *)queryDictionary
                              withSortedKeys:(BOOL) sortedKeys;

- (NSURL *)DJ_URLByAppendingQueryDictionary:(NSDictionary*)queryDictionary;

/**
 *  @return 返回完成的链接请求
 *
 */
- (NSURL *)DJ_URLByReplacingQueryWithDictionary:(NSDictionary *)queryDictionary
                                  withSortedKeys:(BOOL) sortedKeys;

- (NSURL *)DJ_URLByReplacingQueryWithDictionary:(NSDictionary *)queryDictionary;

- (NSURL *)DJ_URLByRemovingQuery;

@end
#pragma mark -

@interface NSString (DJ_URLQuery)

- (NSDictionary *)DJ_URLQueryDictionary;

@end

#pragma mark -

@interface NSDictionary (DJ_URLQuery)

- (NSString *)DJ_URLQueryStringWithSortedKeys:(BOOL) sortedKeys;

- (NSString *)DJ_URLQueryString;

@end
