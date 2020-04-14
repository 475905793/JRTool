//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseCell.h"

@class JRJCheckbox, UIButton, UILabel;

@interface StockEditCell : JRJBaseCell
{
    _Bool _isIndex;
    UILabel *_nameLabel;
    UILabel *_codeLabel;
    JRJCheckbox *_checkebox;
    long long _stockEditCellType;
    CDUnknownBlockType _addPreWarningBlock;
    CDUnknownBlockType _sendTopBlock;
    UIButton *_preWarningButton;
}

+ (double)cellHeight;
@property(nonatomic) __weak UIButton *preWarningButton; // @synthesize preWarningButton=_preWarningButton;
@property(copy, nonatomic) CDUnknownBlockType sendTopBlock; // @synthesize sendTopBlock=_sendTopBlock;
@property(copy, nonatomic) CDUnknownBlockType addPreWarningBlock; // @synthesize addPreWarningBlock=_addPreWarningBlock;
@property(nonatomic) _Bool isIndex; // @synthesize isIndex=_isIndex;
@property(nonatomic) long long stockEditCellType; // @synthesize stockEditCellType=_stockEditCellType;
@property(nonatomic) __weak JRJCheckbox *checkebox; // @synthesize checkebox=_checkebox;
@property(nonatomic) __weak UILabel *codeLabel; // @synthesize codeLabel=_codeLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)sendTop:(id)arg1;
- (void)addPreWarning:(id)arg1;
- (void)awakeFromNib;

@end

