//
//  testProjectAppDelegate.h
//  testProject
//
//  Created by EYAGGELOS LIASKAS on 22/06/2011.
//  Copyright 2011 Desquared. All rights reserved.
//

#import <UIKit/UIKit.h>

@class testProjectViewController;

@interface testProjectAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet testProjectViewController *viewController;

@end
