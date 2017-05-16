//
//  AppDelegate.h
//  GuangZhouAR
//
//  Created by wJunes on 2017/5/16.
//  Copyright © 2017年 Junes. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SampleGLResourceHandler.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (weak, nonatomic) id<SampleGLResourceHandler> glResourceHandler;


@end

