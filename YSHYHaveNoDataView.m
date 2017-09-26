//
//  YSHYHaveNoDataView.m
//  移动物美
//
//  Created by 杨淑园 on 2017/1/10.
//  Copyright © 2017年 赵永生. All rights reserved.
//

#import "YSHYHaveNoDataView.h"

@implementation YSHYHaveNoDataView

-(instancetype)init
{
    if(self = [super init])
    {
        [self setBackgroundColor:BASE_BACK_COLOR_TWO];
        _imageView = [[UIImageView alloc]init];
        [self addSubview:_imageView];
        [_imageView makeConstraints:^(MASConstraintMaker *make) {
            make.centerX.equalTo(self.centerX);
            make.top.offset(78);
            make.height.offset(190);
            make.width.offset(200);
        }];
        
        _lab = [[UILabel alloc]init];
        [self addSubview:_lab];
        _lab.textAlignment = NSTextAlignmentCenter;
        _lab.textColor = WMH_COLOR_normal(215, 215, 215);
        _lab.font = WMH_Font_Sys(18);
        [_lab makeConstraints:^(MASConstraintMaker *make) {
            make.centerX.equalTo(self.centerX);
            make.top.equalTo(_imageView.bottom).offset(18);
            make.height.offset(30);
            make.width.equalTo(self);
        }];
    }
    
    return  self;
}

-(void)setDescrpStr:(NSString *)descrpStr
{
    _lab.text = descrpStr;
}


-(void)setImageName:(NSString *)imageName
{
    [_imageView setImage:[UIImage imageNamed:imageName]];
}

@end
