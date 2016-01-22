//
//  ColorWheel.h
//  FunFact
//
//  Created by LiuHeqian on 1/22/16.
//  Copyright © 2016 LiuHeqian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong,nonatomic) NSArray *colors;

-(UIColor *)randomColor;

@end
