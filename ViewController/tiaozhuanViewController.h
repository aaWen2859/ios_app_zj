//
//  tiaozhuanViewController.h
//  zhongce
//
//  Created by Apple on 16/6/14.
//  Copyright © 2016年 fuwenwen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface tiaozhuanViewController : UIViewController<UIWebViewDelegate,UITableViewDelegate>

{
    UIWebView *UiWebView;
    
    
}

@property(copy,nonatomic)NSString*requestID;

@end
