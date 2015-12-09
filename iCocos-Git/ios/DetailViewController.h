//
//  DetailViewController.h
//  ios
//
//  Created by caolipeng on 15/12/9.
//  Copyright © 2015年 caolipeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

