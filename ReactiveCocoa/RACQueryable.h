//
//  RACQueryable.h
//  ReactiveCocoa
//
//  Created by Josh Abernathy on 3/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol RACQueryable <NSObject>

- (id<RACQueryable>)where:(BOOL (^)(id x))predicate;
- (id<RACQueryable>)select:(id (^)(id x))block;
- (id<RACQueryable>)throttle:(NSTimeInterval)interval;
+ (id<RACQueryable>)combineLatest:(NSArray *)observables;
- (void)toProperty:(id<RACQueryable>)property;

@end
