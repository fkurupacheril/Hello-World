//
//  ViewController.h
//  Hello World
//
//  Created by Francis Kurupacheril on 11/2/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {

    UILabel *textLabel;
}

@property (nonatomic, retain) 
IBOutlet UILabel *textLabel;

-(IBAction)changeTheTextOfTheLabel;

@end
