//
//
typedef NS_ENUM(NSInteger, NetworkResponseStatus) {
    NetworkResponseStatusSuccess = 200,//操作成功
    NetworkResponseStatusFailure = 300,//操作失败
    NetworkResponseStatusWaiting = 502,//等待处理
    NetworkResponseStatusDoing = 500,//处理中
    NetworkResponseStatusWaitingResult=501,//等待结果
    NetworkResponseStatusOrderNotExist=404,//订单不存在
    NetworkResponseStatusWatingPay=201,//等待付款
    NetworkResponseStatusWatingSendGoods=202,//等待发货
    NetworkResponseStatusRefunded=204,//已退款
    NetworkResponseStatusTransactionClosed=205//交易关闭
};


typedef NS_ENUM(NSUInteger, RequestMethod) {
    RequestMethodPost=1,
    RequestMethodGet
    
};

/**
 *  获取Window
 */
#define kWindow [UIApplication sharedApplication].keyWindow
/**
 *  获取mainScreen的bounds
 */
#define kScreenBounds [[UIScreen mainScreen] bounds]
/**
 *  版本号
 *
 *  @param  CFBundleShortVersionString
 *
 *  @return kVersion
 */
#define kVersion [NSString stringWithFormat:@"%@",[[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"]]
/**
 *  当前网络状态
 */
#define kNetworkType [[AppSingle Shared]getValueInMyLocalStoreForKey:kReachability]
/**
 *  用户惟一标示
 */
#define USER_ID [[AppSingle Shared]getValueInMyLocalStoreForKey:KEY_USER_ID]


/**
 *  持久化 KEY 值
 */
#define kReachability @"myReachability"
#define KEY_USER_ID @"USER_ID"
/**
 *  懒人简化书写宏
 */
#define APPSINGLE [AppSingle Shared]
#define kNotificationCenter [NSNotificationCenter defaultCenter]
#define kNetWorkManager [NetWorkManager sharedInstance]
#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;
/**
 *  请求提示文字
 */
#define Loading @"请稍后..."
#define Request_Failure @"失败"
#define Request_Success @"成功"
#define Request_NOMore @"已加载全部"
/**
 *  iPhone or iPad
 */
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_PAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
/**
 *  NSLog
 */
#if DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr,"\nfunction:%s line:%d content:%s\n", __FUNCTION__, __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define NSLog(FORMAT, ...) nil
#endif


/**
 *  弱指针
 */
#define WeakSelf(weakSelf)  __weak __typeof(&*self)weakSelf = self;



//登录状态
#define LoginStatus_Changed @"LoginStatus_Changed"



//NSCoding协议遵循
#define kObjectCodingAction  -(id)initWithCoder:(NSCoder *)aDecoder\
{\
self = [super init];\
if (self) {\
[self autoDecode:aDecoder];\
\
}\
return self;\
}\
-(void)encodeWithCoder:(NSCoder *)aCoder\
{\
[self autoEncodeWithCoder:aCoder];\
}\
-(void)setValue:(id)value forUndefinedKey:(NSString *)key\
{\
\
}

/**
 *  友盟三方登录支付宏
 */
//友盟appkey
#define UMENG_APPKEY  @"5798417367e58e15a6003b9a"
//QQ AppId
#define QQ_APPID  @"1105572618"
//QQ appKey
#define QQ_APPKEY @"P7YMniAmHEmtflPV"
//微信 AppId
#define WEIXIN_APPID @"wxe1a6b92abbb2ccc6"
//微信 appKey
#define WEIXIN_APPKEY @"edbea80d435d3f79fddacb1ba948225a"

//#define WEIXIN_APPID @"wxb4ba3c02aa476ea1"
////微信 appKey
//#define WEIXIN_APPKEY @"edbea80d435d3f79fddacb1ba948225a"

#define user_name_key @"user_name_key"

#define user_key_key @"user_key_key"
