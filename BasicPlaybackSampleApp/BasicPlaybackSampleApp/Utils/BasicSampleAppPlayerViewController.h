/**
 * @class      BasicSampleAppPlayerViewController BasicSampleAppPlayerViewController.h "BasicSampleAppPlayerViewController.h"
 * @brief      An abstract ViewController which is used as the outlet for all Player nibs
 * @details    An abstract ViewController which is used as the outlet for all Player nibs.  Subclass this whenever you develop a new player.
 *             When creating a new PlayerViewControler, use this as your superclass.
 *             When creating a new nib, use this class as your owner
 * @date       12/12/14
 * @copyright  Copyright (c) 2014 Ooyala, Inc. All rights reserved.
 */

#import <UIKit/UIKit.h>
#import "BasicPlayerSelectionOption.h"
#import "OOOoyalaPlayerViewController.h"

@interface BasicSampleAppPlayerViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource>

@property (weak, nonatomic) IBOutlet UIView *playerView;
@property (weak, nonatomic) IBOutlet UIButton *button1;
@property (weak, nonatomic) IBOutlet UIButton *button2;

@property (weak, nonatomic) IBOutlet UILabel *switchLabel1;
@property (weak, nonatomic) IBOutlet UILabel *switchLabel2;
@property (weak, nonatomic) IBOutlet UISwitch *switch1;
@property (weak, nonatomic) IBOutlet UISwitch *switch2;

@property (strong, nonatomic) BasicPlayerSelectionOption *playerSelectionOption;

@property (strong, nonatomic) NSMutableArray *adsList;
@property (strong, nonatomic) NSMutableArray *adsEmbedcodeList;

@property (strong, nonatomic) IBOutlet UIPickerView *adsPicker;
@property (nonatomic) NSInteger selectedRow;

@property (strong, nonatomic) IBOutlet UIButton *playButton;
- (IBAction)playAdsEmbedCode:(UIButton *)sender;

@property (strong, nonatomic) OOOoyalaPlayerViewController *ooyalaPlayerViewController;

- (id)initWithPlayerSelectionOption:(BasicPlayerSelectionOption *)playerSelectionOption;

- (IBAction)onButtonClick:(id)sender;
@end

