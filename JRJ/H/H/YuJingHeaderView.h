//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseXibView.h"

@class UIButton;

@interface YuJingHeaderView : BaseXibView
{
    CDUnknownBlockType _addButtonBlock;
    CDUnknownBlockType _segMentChangeBlock;
    UIButton *_addPreWarningButton;
}

@property(retain, nonatomic) UIButton *addPreWarningButton; // @synthesize addPreWarningButton=_addPreWarningButton;
@property(copy, nonatomic) CDUnknownBlockType segMentChangeBlock; // @synthesize segMentChangeBlock=_segMentChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType addButtonBlock; // @synthesize addButtonBlock=_addButtonBlock;
- (void).cxx_destruct;
- (void)addButtonClicked:(id)arg1;
- (void)awakeFromNib;

@end
