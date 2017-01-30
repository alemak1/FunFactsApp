//
//  FactBook.h
//  FunFacts
//
//  Created by Aleksander Makedonski on 1/30/17.
//  Copyright © 2017 Changzhou Panda. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray* facts;

- (NSString *) randomFact;

@end
