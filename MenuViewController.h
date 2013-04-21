//
//  MenuViewController.h
//  KensRestaurant
//
//  Created by Ken on 4/18/13.
//  Copyright (c) 2013 restaurant. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MenuItemCell.h"
#import "SubMenuViewController.h"
#import "CommonFunctions.h"
@interface MenuViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {
    NSURLConnection *connection;
    NSMutableData *receivedData;
}
@property (strong, nonatomic) IBOutlet UITableView *tableView;
@end
