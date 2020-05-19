//
//  SLZombieFinder.h
//  DarkMode
//
//  Created by wsl on 2020/5/8.
//  Copyright © 2020 https://github.com/wsl2ls   ----- . All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

///zombie/野指针对象嗅探器     来源：https://github.com/sindrilin/LXDZombieSniffer.git
@interface SLZombieFinder : NSObject

///启动zombie嗅探
+ (void)startSniffer;

///关闭zombie嗅探
+ (void)closeSniffer;

 ///添加嗅探白名单类
+ (void)appendIgnoreClass: (Class)cls;

@end

NS_ASSUME_NONNULL_END