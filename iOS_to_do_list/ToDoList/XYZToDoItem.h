//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by dpb15 on 6/12/14.
//  Copyright (c) 2014 David Branner. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;

@property BOOL completed;

@property (readonly) NSDate *creationDate;

@end
