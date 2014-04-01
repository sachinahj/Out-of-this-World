//
//  SAAddSpaceObjectViewController.h
//  Out of this World
//
//  Created by Sachin Ahuja on 3/16/14.
//  Copyright (c) 2014 Sachin Ahuja. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SAAddSpaceObjectViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UITextField *nicknameTextField;
@property (strong, nonatomic) IBOutlet UITextField *diameterTextField;
@property (strong, nonatomic) IBOutlet UITextField *temperatureTextField;
@property (strong, nonatomic) IBOutlet UITextField *numberOfMoonsTextField;
@property (strong, nonatomic) IBOutlet UITextField *interestingFactTextField;

- (IBAction)cancelButtonPressed:(UIButton *)sender;
- (IBAction)addButtonPressed:(UIButton *)sender;
@end
