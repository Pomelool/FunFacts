//
//  FactBook.h
//  FunFact
//
//  Created by LiuHeqian on 1/21/16.
//  Copyright © 2016 LiuHeqian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong,nonatomic) NSArray *facts;

-(NSString *)randomFact;

@end
