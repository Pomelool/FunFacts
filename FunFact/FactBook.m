//
//  FactBook.m
//  FunFact
//
//  Created by LiuHeqian on 1/21/16.
//  Copyright © 2016 LiuHeqian. All rights reserved.
//

#import "FactBook.h"

@implementation FactBook

- (instancetype)init
{
    self = [super init];
    if (self) {
           _facts = [[NSArray alloc] initWithObjects:
                     @"Ants stretch when they wake up.",
                     @"Shit smells bad..",
                     @"Code is poetry!",
                     @"It is easy to use a water bottle to drink.",
                     @"Making app is a challenge.",
                     @"Somehow you always feel taht you know too little fun facts to show.",
                     @"It is so cold now in Boston because it is winter.",
                     @"I hate people studying when I am playing and people playing when I am studying",
                     @"I need one more to have 9 facts, so I add this.",
                     nil];
    }
    return self;
}

-(NSString *)randomFact
{
    int random = arc4random_uniform((int)self.facts.count);
    return [self.facts objectAtIndex:random];
}

@end
