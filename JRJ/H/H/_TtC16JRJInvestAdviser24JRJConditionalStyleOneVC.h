//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, UIButton, UILabel, UIPickerView, _TtC16JRJInvestAdviser26JRJSetConditionalItemModel;

@interface _TtC16JRJInvestAdviser24JRJConditionalStyleOneVC : JRJBaseViewController <UIPickerViewDelegate, UIPickerViewDataSource, UITextFieldDelegate>
{
    // Error parsing type: , name: okFunc
    // Error parsing type: , name: pickerView
    // Error parsing type: , name: pickerView2
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: closeBtn
    // Error parsing type: , name: okBtn
    // Error parsing type: , name: model
    // Error parsing type: , name: groupOptions
    // Error parsing type: , name: titleArray1
    // Error parsing type: , name: titleArray2
    // Error parsing type: , name: currentSelectRow
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)okBtnHandle:(id)arg1;
- (void)cancelBtnHandle:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)updateViewForModelWithModel:(id)arg1;
- (void)clickHandle:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, copy) NSArray *titleArray2;
@property(nonatomic, copy) NSArray *titleArray1;
@property(nonatomic, copy) NSArray *groupOptions;
@property(nonatomic, retain) _TtC16JRJInvestAdviser26JRJSetConditionalItemModel *model; // @synthesize model;
@property(nonatomic) __weak UIButton *okBtn; // @synthesize okBtn;
@property(nonatomic) __weak UIButton *closeBtn; // @synthesize closeBtn;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIPickerView *pickerView2; // @synthesize pickerView2;
@property(nonatomic) __weak UIPickerView *pickerView; // @synthesize pickerView;
@property(nonatomic, copy) CDUnknownBlockType okFunc;

@end
