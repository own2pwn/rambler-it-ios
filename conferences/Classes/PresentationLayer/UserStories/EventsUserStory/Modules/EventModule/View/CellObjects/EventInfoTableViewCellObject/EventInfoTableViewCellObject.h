//
//  EventInfoTableViewCellObject.h
//  Conferences
//
//  Created by Karpushin Artem on 07/11/15.
//  Copyright © 2015 Rambler. All rights reserved.
//

#import <Nimbus/NimbusModels.h>

@class PlainEvent;

@interface EventInfoTableViewCellObject : NIFormElement <NICellObject>

@property (strong, nonatomic, readonly) NSString *date;
@property (strong, nonatomic, readonly) NSString *eventTitle;
@property (strong, nonatomic, readonly) NSString *eventSubTitle;

+ (instancetype)objectWithElementID:(NSInteger)elementID event:(PlainEvent *)event;

@end