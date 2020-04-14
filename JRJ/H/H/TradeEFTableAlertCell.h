//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIImageView, UILabel, UITextField, UIView;

@interface TradeEFTableAlertCell : UITableViewCell <UITextFieldDelegate>
{
    CDUnknownBlockType _customBlock;
    UIView *_textfieldBgView;
    UILabel *_titleLbl;
    UIImageView *_selectImgView;
    UITextField *_textfield;
    NSLayoutConstraint *_textFieldBgViewH;
}

@property(nonatomic) __weak NSLayoutConstraint *textFieldBgViewH; // @synthesize textFieldBgViewH=_textFieldBgViewH;
@property(nonatomic) __weak UITextField *textfield; // @synthesize textfield=_textfield;
@property(nonatomic) __weak UIImageView *selectImgView; // @synthesize selectImgView=_selectImgView;
@property(nonatomic) __weak UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(nonatomic) __weak UIView *textfieldBgView; // @synthesize textfieldBgView=_textfieldBgView;
@property(copy, nonatomic) CDUnknownBlockType customBlock; // @synthesize customBlock=_customBlock;
- (void).cxx_destruct;
- (void)configCellWithModel:(id)arg1 index:(long long)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

