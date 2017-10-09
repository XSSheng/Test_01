//
//  XXReporter.h
//  XuSDK
//
//  Created by xiaoxu on 16/6/14.
//  Copyright © 2016年 rc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#define CYReporterVersion @"1.3.0.0"


typedef NS_ENUM(NSInteger, CYReportMode)
{
    CYReportModeFollowTimeInterval,
    
    CYReportModeFollowLogCount,
    
    CYReportModeFollowLogSize,
    
    CYReportModeFollowConstant
};

@interface XXReporter : NSObject


+ (instancetype)shareReporter;

+ (NSString *)getIdfv;

/**
 * App启动时调用改方法，打印启动日志
 */
+ (void)startWithAppID:(NSString *)appid withIdfa:(NSString *)idva channelID:(NSString *)channelid;


/**
 * 设置uid方法，只在登陆成功处调用此方法
 */
+ (void)setUserID:(NSString *)uid;

/**
 * 登出操作，将uid置为空
 */
+ (void)userLogOut;

/**
 * 添加程序崩溃日志收集方法
 */
+ (void)crashLog;

/**
 * 是否开启日志测试接口（此方法用于正式环境和测试环境接口的切换）
 */
+ (void)isOpenTestLog:(BOOL)isOpen;

/**
 * 客户端埋点eventID
 */
+ (void)clientEventWithEventID:(NSString *)eventID expandDic:(NSMutableDictionary *)dic;

/**
 * 集成圈选功能的方法
 */
+ (void)openCircleFunctionWithURL:(NSURL *)url;

@end

@interface UIView(CYAttributes)
/**
 * 如果不想采集某些view的点击行为数据或ID，将该属性设置为YES，SDK将不会收集
 */
@property (nonatomic,assign) BOOL CYAttributesDonotTrack;

@end

