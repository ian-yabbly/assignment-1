//
//  YABViewController.h
//  Assignment1
//
//  Created by Ian Shafer on 10/17/13.
//  Copyright (c) 2013 Yabbly. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YABViewController : UIViewController

@property (nonatomic, weak) IBOutlet UIButton *logButton;

- (IBAction)writeToLog:(id)sender;

@end
