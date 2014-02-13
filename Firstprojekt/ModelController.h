//
//  ModelController.h
//  Firstprojekt
//
//  Created by Alex Yakshin on 13/02/14.
//  Copyright (c) 2014 Alex Yakshin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
