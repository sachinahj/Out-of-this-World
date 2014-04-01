//
//  SASpaceImageViewController.h
//  Out of this World
//
//  Created by Sachin Ahuja on 3/9/14.
//  Copyright (c) 2014 Sachin Ahuja. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SASpaceObject.h"

@interface SASpaceImageViewController : UIViewController
<UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) SASpaceObject *spaceObject;

@end
