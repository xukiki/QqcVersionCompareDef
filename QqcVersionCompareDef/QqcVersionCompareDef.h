//
//  QqcVersionCompareDef.h
//  QqcBaseFramework
//
//  Created by qiuqinchuan on 15/2/4.
//  Copyright (c) 2015年 Qqc. All rights reserved.
//

#ifndef QqcBaseFramework_QqcVersionCompareDef_h
#define QqcBaseFramework_QqcVersionCompareDef_h


//主版本号比较
#define mainversion_equal_to_qqc(v)([[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"] compare:v options:NSNumericSearch]==NSOrderedSame)
#define mainversion_greater_than_qqc(v)([[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"] compare:v options:NSNumericSearch]==NSOrderedDescending)
#define mainversion_greater_than_or_equal_to_qqc(v)([[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"] compare:v options:NSNumericSearch]!=NSOrderedAscending)
#define mainversion_less_than_qqc(v)([[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"] compare:v options:NSNumericSearch]==NSOrderedAscending)
#define mainversion_less_than_or_equal_to_qqc(v)([[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"] compare:v options:NSNumericSearch]!=NSOrderedDescending)


//building版本号比较
#define buildingversion_equal_to_qqc(v)([[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"] compare:v options:NSNumericSearch]==NSOrderedSame)
#define buildingversion_greater_than_qqc(v)([[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"] compare:v options:NSNumericSearch]==NSOrderedDescending)
#define buildingversion_greater_than_or_equal_to_qqc(v)([[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"] compare:v options:NSNumericSearch]!=NSOrderedAscending)
#define buildingversion_less_than_qqc(v)([[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"] compare:v options:NSNumericSearch]==NSOrderedAscending)
#define buildingversion_less_than_or_equal_to_qqc(v)([[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"] compare:v options:NSNumericSearch]!=NSOrderedDescending)



#endif
