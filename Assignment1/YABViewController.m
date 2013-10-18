//
//  YABViewController.m
//  Assignment1
//
//  Created by Ian Shafer on 10/17/13.
//  Copyright (c) 2013 Yabbly. All rights reserved.
//

#import "YABViewController.h"

@interface YABViewController ()

@end

@implementation YABViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)writeToLog:(id)sender
{
    NSLog(@"The button was pressed");
}

- (IBAction)writeSwitchStateToLog:(id)sender
{
    NSLog(@"The switch is %@", _logSwitch.isOn ? @"on" : @"off");
}

- (IBAction)maybeWriteSliderStateToLog:(id)sender
{
    if (_slider.value > 0.5f) {
        NSLog(@"The slider was slided %f", _slider.value);
    }
}

@end
