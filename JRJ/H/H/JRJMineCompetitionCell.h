//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseCell.h"

@class UIButton;

@interface JRJMineCompetitionCell : JRJBaseCell
{
    UIButton *_jjdsBtn;
    UIButton *_cgdsBtn;
    CDUnknownBlockType _jjdsClickBlock;
    CDUnknownBlockType _cgdsClickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cgdsClickBlock; // @synthesize cgdsClickBlock=_cgdsClickBlock;
@property(copy, nonatomic) CDUnknownBlockType jjdsClickBlock; // @synthesize jjdsClickBlock=_jjdsClickBlock;
@property(nonatomic) __weak UIButton *cgdsBtn; // @synthesize cgdsBtn=_cgdsBtn;
@property(nonatomic) __weak UIButton *jjdsBtn; // @synthesize jjdsBtn=_jjdsBtn;
- (void).cxx_destruct;
- (void)clickJjdsBtn:(id)arg1;
- (void)clickCgdsBtn:(id)arg1;
- (void)awakeFromNib;

@end
