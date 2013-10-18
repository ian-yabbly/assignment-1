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

@property (nonatomic, weak) IBOutlet UISwitch *logSwitch;

@property (nonatomic, weak) IBOutlet UISlider *slider;

- (IBAction)writeToLog:(id)sender;

- (IBAction)writeSwitchStateToLog:(id)sender;

- (IBAction)maybeWriteSliderStateToLog:(id)sender;

@end
