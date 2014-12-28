//
//  RWViewController.h
//  ShowTracker
//
//  Created by Joshua on 3/1/14.
//  Copyright (c) 2014 Ray Wenderlich. All rights reserved.
//  

#import <UIKit/UIKit.h>
#import <AFNetworking/AFNetworking.h>
#import "TraktAPIClient.h"
#import <AFNetworking/UIKit+AFNetworking.h>
#import <Nimbus/NIAttributedLabel.h>
#import <SAMCategories/UIScreen+SAMAdditions.h>



@interface ViewController : UIViewController <UIScrollViewDelegate>
@property (nonatomic, weak) IBOutlet UIScrollView *showsScrollView;
@property (nonatomic, weak) IBOutlet UIPageControl *showsPageControl;
- (IBAction)pageChanged:(id)sender;

@property (nonatomic, strong) NSArray *jsonResponse;
@property (nonatomic) BOOL pageControlUsed;
@property (nonatomic) NSInteger previousPage;


@end
