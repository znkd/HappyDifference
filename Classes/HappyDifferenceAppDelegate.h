//
//  HappyDifferenceAppDelegate.h
//  HappyDifference
//
//  Created by zzyy on 11-10-29.
//  Copyright __MyCompanyName__ 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface HappyDifferenceAppDelegate : NSObject <UIApplicationDelegate> {
	//UIWindow			*window;
	//RootViewController	*viewController;
	//BOOL				paused;
}
+ (HappyDifferenceAppDelegate*) get;

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic,assign ) BOOL paused;

@property (nonatomic, retain) RootViewController *viewController;
@end
