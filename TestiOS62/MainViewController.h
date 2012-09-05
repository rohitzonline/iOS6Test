//
//  MainViewController.h
//  TestiOS62
//
//  Created by Rohit Gupta on 05/09/12.
//  Copyright (c) 2012 Rolocule Games. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

- (IBAction)showInfo:(id)sender;

@end
