//
//  ViewController.h
//  FunFact
//
//  Created by LiuHeqian on 1/21/16.
//  Copyright © 2016 LiuHeqian. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ColorWheel;
@class FactBook;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;

@property (strong, nonatomic)  FactBook *factBook;

@property (strong, nonatomic) ColorWheel *colorWheel;
@property (weak, nonatomic) IBOutlet UIButton *funFactButton;

@end

