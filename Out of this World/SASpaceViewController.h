//
//  SASpaceViewController.h
//  Out of this World
//
//  Created by Sachin Ahuja on 3/12/14.
//  Copyright (c) 2014 Sachin Ahuja. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SASpaceObject.h"


@interface SASpaceViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>


@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) SASpaceObject *spaceObject;
   
@end
