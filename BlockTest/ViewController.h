//
//  ViewController.h
//  BlockTest
//
//  Created by xiafei on 2018/10/13.
//  Copyright © 2018年 com.xxx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

-(void)eat:(void(^)(NSString *))food;

- (void)mult:(NSInteger(^)(NSInteger))num;
@end

