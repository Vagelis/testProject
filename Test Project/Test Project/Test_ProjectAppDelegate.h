//
//  Test_ProjectAppDelegate.h
//  Test Project
//
//  Created by EYAGGELOS LIASKAS on 22/06/2011.
//  Copyright 2011 Desquared. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Test_ProjectViewController;

@interface Test_ProjectAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet Test_ProjectViewController *viewController;

@end
