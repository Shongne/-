//
//  AppDelegate.h
//  日考微信
//
//  Created by 孙洪恩 on 2018/11/29.
//  Copyright © 2018 孙洪恩. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

