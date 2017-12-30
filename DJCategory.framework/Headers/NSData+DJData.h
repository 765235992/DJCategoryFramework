//
//  NSData+DJData.h
//  DJCategory
//
//  Created by Jone on 2017/11/21.
//  Copyright © 2017年 河南东京Web俱乐部. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (DJData)
-(NSData *)DJ_AES256ParmEncryptWithKey:(NSString *)key Encrypttext:(NSData *)text;   //加密
-(NSData *)DJ_AES256ParmDecryptWithKey:(NSString *)key Decrypttext:(NSData *)text;   //解密
-(NSString *)DJ_aes256_encrypt:(NSString *)key Encrypttext:(NSString *)text;
-(NSString *)DJ_aes256_decrypt:(NSString *)key Decrypttext:(NSString *)text;
@end
