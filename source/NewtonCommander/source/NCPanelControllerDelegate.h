//
//  NCPanelControllerDelegate.h
//  Newton Commander
//
#import <Foundation/Foundation.h>

@protocol NCPanelControllerDelegate <NSObject>

@optional
-(void)tabKeyPressed:(id)sender;
-(void)switchToNextTab:(id)sender;
-(void)switchToPrevTab:(id)sender;
-(void)closeTab:(id)sender;
-(void)clickToActivatePanel:(id)sender;
-(void)workingDirDidChange:(id)sender;
-(void)tabViewItemsDidChange:(id)sender;
-(void)activateTableView:(id)sender;

@end
