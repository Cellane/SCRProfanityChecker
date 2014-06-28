//
//  SCRViewController.h
//  Example
//
//  Created by Max Kramer on 28/06/2014.
//  Copyright (c) 2014 Max Kramer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SCRViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic, weak) IBOutlet UITextField *textField;
@property (nonatomic, weak) IBOutlet UILabel *resultLabel;

@end
