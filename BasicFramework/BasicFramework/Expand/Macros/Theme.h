//
//  Theme.h
//  BasicFramework
//
//  Created by Rainy on 16/8/18.
//  Copyright © 2016年 Rainy. All rights reserved.
//

#ifndef Theme_h
#define Theme_h

#pragma mark -  * * * * * * * * * * * * * * 主题 * * * * * * * * * * * * * *
/**
 *  默认页面背景色
 */

#define DMRGBColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]

#define kBackGroundColor UIColorFromRGBValue(0Xf5f7fa)
/**
 *  默认白色
 */
#define kWhiteColor UIColorFromRGBValue(0Xffffff)

//随即色
#define DMRandColor DMRGBColor(arc4random_uniform(255), arc4random_uniform(255), arc4random_uniform(255))


#define kCommonBgColor [UIColor colorWithRed:0.86f green:0.85f blue:0.80f alpha:1.00f]
//橘色
#define kOrangeColor [UIColor orangeColor]

/**
 *  分割线灰色等...
 */
#define kBackDefaultGrayColor UIColorFromRGBValue(0Xdbdfe8)
/**
 *  主题颜色
 */
#define kThemeColor UIColorFromRGBValue(0X0096f4)

/**
 控件基调色
 */


#define base_control_color kRGB(24, 24, 24)


/**
 *  主题辅助颜色（状态，提示等...）
 */
#define kMarkedColor UIColorFromRGBValue(0Xef5a50)
/**
 *  主要字体颜色
 */
#define kMainFontColor UIColorFromRGBValue(0X333333)
/**
 *  次要字体颜色
 */
#define kSecondaryFontColor UIColorFromRGBValue(0X999999)
/**
 *  辅助字体颜色
 */
#define kAuxiliaryFontColor UIColorFromRGBValue(0Xcccccc)
/**
 *  遮盖半透明色
 */
#define kCoverColor [UIColorFromRGBValue(0X000000)colorWithAlphaComponent:0.3]

/**
 *  导航栏title 按钮
 */
#define kMaxmumFontSize [UIFont systemFontOfSize:18]
/**
 *  底部菜单栏，部分小标签文字
 */
#define kMinimumFontSize [UIFont systemFontOfSize:10]
/**
 *  主要字体大小（key）
 */
#define kMainFontSize [UIFont systemFontOfSize:14]
/**
 *  辅助字体大小（value）
 */
#define kAuxiliaryFontSize [UIFont systemFontOfSize:12]


/***  普通字体 */
#define kFont(size) [UIFont systemFontOfSize:size]

/***  当前屏幕宽度 */
#define kScreenWidth  [[UIScreen mainScreen] bounds].size.width
/***  当前屏幕高度 */
#define kScreenHeight  [[UIScreen mainScreen] bounds].size.height



#pragma mark -  * * * * * * * * * * * * * * set Button * * * * * * * * * * * * * *
/**
 *  按钮的背景默认颜色
 */
#define kButtonBackColorForNormal UIColorFromRGBValue(0X0097f4)
/**
 *  按钮的背景点击颜色
 */
#define kButtonBackColorForSelect UIColorFromRGBValue(0X008ce3)
/**
 *  按钮的背景不可点击颜色
 */
#define kButtonBackColorForDisabled UIColorFromRGBValue(0X7fcaf9)
/**
 *  按钮的圆角
 */
#define kButtonCornerRad 5


//十六进制颜色
#define UIColorFromRGBValue(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define kRGB(R,G,B) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:1]
#define kRGB_alpha(R,G,B,A) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:A]


#endif /* Theme_h */
