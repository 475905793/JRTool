//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJPassportFormViewController.h"

@class JRJFormLinkCell, JRJFormTextFieldCell;
@protocol JRJUpdateMobileViewControllerDelegate;

@interface JRJEditMobileViewController : JRJPassportFormViewController
{
    id <JRJUpdateMobileViewControllerDelegate> _delegate;
    JRJFormTextFieldCell *_codeCell;
    JRJFormLinkCell *_customerServiceCell;
}

@property(retain, nonatomic) JRJFormLinkCell *customerServiceCell; // @synthesize customerServiceCell=_customerServiceCell;
@property(retain, nonatomic) JRJFormTextFieldCell *codeCell; // @synthesize codeCell=_codeCell;
@property(nonatomic) __weak id <JRJUpdateMobileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)submitButtonTapped:(id)arg1;
- (id)mobileNumberToSendCode;
- (void)stateChanged;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

