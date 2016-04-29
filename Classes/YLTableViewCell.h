//
//  YLTableViewCell.h
//  YLTableView
//
//  Created by Mason Glidden on 6/10/14.
//  Copyright (c) 2014 Yelp. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 Defines required methods that a UITableViewCell subclass must implement to work with a YLTableViewDataSource
 */
@protocol YLTableViewCell <NSObject>

/**
 Apply a cell model to a cell.  Subclasses should implement this to decide how they display a model's content.
 */
- (void)setModel:(nullable id)model;

@optional
/**
 Estimated height for a cell, called within tableView:estimatedHeightForRowAtIndexPath
 */
+ (CGFloat)estimatedRowHeight;

@end