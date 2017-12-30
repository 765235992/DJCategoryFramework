//
//  NSDictionary+DJDictionary.h
//  CategoryBaseDemo
//
//  Created by Jone on 2017/5/24.
//  Copyright © 2017年 河南东京Web俱乐部. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (DJDictionary)
/**
 *  是否包含特定的Key
 */
- (BOOL)DJ_containsSpecificKey:(NSString *)akey;

/*
 *  获取特定key的value
 */
- (id)DJ_objectForSpecificKey:(id)aKey;

@end
