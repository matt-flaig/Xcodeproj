//
//  DetailViewController.h
//  Objc_iOS_Native
//
//  Created by Marius Rackwitz on 20.07.14.
//
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
