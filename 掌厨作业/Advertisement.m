//
//  Advertisement.m
//  掌厨作业
//
//  Created by MS on 15-9-3.
//  Copyright (c) 2015年 ZYH. All rights reserved.
//

#import "Advertisement.h"

@implementation Advertisement

- (id)initWithDict:(NSDictionary *)dict {
    if (self = [super init]) {
     
        [self setValuesForKeysWithDictionary:dict];
        
    }
    return self;
}

- (void)setValue:(id)value forUndefinedKey:(NSString *)key {
    if ([key isEqualToString:@"id"]) {
        _ID = value;
    }
}

@end
