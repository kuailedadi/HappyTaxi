//
//  AppDelegate.h
//  HappyTaxi
//
//  Created by administrator on 12-10-11.
//  Copyright (c) 2012年 administrator. All rights reserved.
//

#import <UIKit/UIKit.h>
//<登陆功能>
//<注册功能>
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
