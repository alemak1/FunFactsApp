//
//  ViewController.h
//  FunFacts
//
//  Created by Aleksander Makedonski on 1/30/17.
//  Copyright © 2017 Changzhou Panda. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (strong, nonatomic) FactBook* factBook;

@end

