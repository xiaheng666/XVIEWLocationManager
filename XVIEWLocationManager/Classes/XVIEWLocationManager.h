//
//  XVIEWLocationManager.h
//  XVIEWLocationManager
//
//  Created by yyj on 2019/1/4.
//  Copyright © 2019 zd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XVIEWLocationManager : NSObject

/**
 *  单例
 */
+ (instancetype)sharedLocationManager;

/**
 *  注册应用
 @param param    {data:@{"appid":""}, callback:""}
 */
- (void)registerApp:(NSDictionary *)param;

/**
 *  定位
 @param param  {data:"",callback:""}
 */
- (void) location:(NSDictionary *)param;

/**
 *  持续定位
 @param param  {data:"",callback:""}
 */
- (void) lastLocation:(NSDictionary *)param;

/**
 *  关闭定位
 @param param  {data:"",callback:""}
 */
- (void) stopLocation:(NSDictionary *)param;

@end
