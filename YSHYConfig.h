



/**
 *  第一部分,颜色部分
 */
#define YSHY_COLOR_normal(_R,_G,_B) [UIColor colorWithRed:_R / 255.0f green:_G / 255.0f blue:_B / 255.0f alpha:1]
#define YSHY_COLOR_alpha(_R,_G,_B,_A) [UIColor colorWithRed:_R / 255.0f green:_G / 255.0f blue:_B / 255.0f alpha:_A]
#define YSHY_COLOR_gray(_light,_alpha) [UIColor colorWithRed:_light green:_light blue:_light alpha:_alpha]
#define YSHY_COLOR_white [UIColor whiteColor]
#define YSHY_COLOR_clear [UIColor clearColor]
#define YSHY_COLOR_image(_imageName) [UIColor colorWithPatternImage:[UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForAuxiliaryExecutable:_imageName]]]

#define YSHY_ColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0x00FF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0x0000FF))/255.0 \
alpha:1.0]

#define YSHY_COLOR_RGB(_STR_) ([UIColor colorWithRed:[[NSString stringWithFormat:@"%lu", strtoul([[_STR_ substringWithRange:NSMakeRange(1, 2)] UTF8String], 0, 16)] intValue] / 255.0 green:[[NSString stringWithFormat:@"%lu", strtoul([[_STR_ substringWithRange:NSMakeRange(3, 2)] UTF8String], 0, 16)] intValue] / 255.0 blue:[[NSString stringWithFormat:@"%lu", strtoul([[_STR_ substringWithRange:NSMakeRange(5, 2)] UTF8String], 0, 16)] intValue] / 255.0 alpha:1.0])

/**
 *  第二部分,关于屏幕尺寸
 */

#define CONTENTSIZEX [[UIScreen mainScreen] bounds].size.width
#define CONTENTSIZEY [[UIScreen mainScreen] bounds].size.height

#define YSHY_SCREEN_width [[UIScreen mainScreen] bounds].size.width
#define YSHY_SCREEN_height [[UIScreen mainScreen] bounds].size.height
#define YSHY_SCREEN_frame [[UIScreen mainScreen] bounds]
#define YSHY_SCREEN_size [[UIScreen mainScreen] bounds].size
#define YSHY_SCREEN_4 [[UIScreen mainScreen] bounds].size.height > 500 ? YES : NO

/**
 *  第三部分,关于系统
 */
#define YSHY_IOS7 ([[[UIDevice currentDevice] systemVersion] compare:@"7.0"] != NSOrderedAscending)
#define YSHY_AppDelegate (AppDelegate *)[[UIApplication sharedApplication] delegate]
#define YSHY_RootController [[[UIApplication sharedApplication] delegate] window].rootViewController
#define YSHY_UserDefaults [NSUserDefaults standardUserDefaults]
#define YSHY_FileManager [NSFileManager defaultManager]

/**
 *  第四部分,关于视图尺寸
 */
#define YSHY_VIEW_size(_view) _view.frame.size
#define YSHY_VIEW_centerX(_view) _view.center.x
#define YSHY_VIEW_centerY(_view) _view.center.y
#define YSHY_VIEW_width(_view) _view.frame.size.width
#define YSHY_VIEW_height(_view) _view.frame.size.height

/**
 *  第五部分,关于文件缓存管理
 */
#define YSHY_Caches_Temp [NSHomeDirectory() stringByAppendingPathComponent:@"/Library/Caches/Temp"]
#define YSHY_Caches_Temp_Voice [NSHomeDirectory() stringByAppendingPathComponent:@"/Library/Caches/Temp/VoiceNoteCache"]
#define YSHY_Caches_Temp_VidioCahe [NSHomeDirectory() stringByAppendingPathComponent:@"/Library/Caches/Temp/VideoCache"]
#define YSHY_Caches_Temp_UserData [NSHomeDirectory() stringByAppendingPathComponent:@"/Library/Caches/Temp/UserData"]
#define YSHY_Documents_Dicrectory [NSString stringWithFormat:@"%@/Documents",NSHomeDirectory()]
#define YSHY_FileManager [NSFileManager defaultManager]

/**
 *  第六部分 字体大小
 **/
#define YSHY_Font_Sys(_size) [UIFont systemFontOfSize:_size]
#define YSHY_Font_Bold(_size) [UIFont boldSystemFontOfSize:_size]

/**
 *  第七部分,关于简单方法
 */
#define YSHY_IMAGE(_name) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForAuxiliaryExecutable:_name]]

#define YSHY_CGRM(_x,_y,_w,_h) CGRectMake(_x, _y, _w, _h)
#define YSHY_CGPM(_x,_y) CGPointMake(_x, _y)
#define YSHY_CGSM(_w,_h) CGSizeMake(_w, _h)


/*自定义*/
#define BASE_COLOR YSHY_COLOR_normal(3, 169, 224)
#define BASE_BACK_COLOR YSHY_COLOR_normal(230, 230, 230)

#define COLOR_ONE @[YSHY_COLOR_normal(30, 151, 241),YSHY_COLOR_normal(251, 98, 21),YSHY_COLOR_normal(122, 39, 254),YSHY_COLOR_normal(21,121, 105)]
#define COLOR_TWO @[YSHY_COLOR_normal(226, 245, 255),YSHY_COLOR_normal(255, 235, 218),YSHY_COLOR_normal(245, 238, 255),YSHY_COLOR_normal(220, 243, 240)]
#define COLOR_THREE @[YSHY_COLOR_normal(87, 192, 255),YSHY_COLOR_normal(253, 173, 113),YSHY_COLOR_normal(186, 147, 254),YSHY_COLOR_normal(58, 159, 146)]

#define LOGIN_BY_CARD_METH 0
#define LOGIN_BY_IDCARD_MRTH 1
#define CHANGE_PASS_WORD_METH 2


