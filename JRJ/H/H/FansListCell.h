//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseCell.h"

@class UIImageView, UILabel;

@interface FansListCell : JRJBaseCell
{
    UIImageView *_headImage;
    UILabel *_lblName;
    UIImageView *_imgSign;
    UILabel *_lblJobAndAddress;
    UIImageView *_imgV;
}

@property(retain, nonatomic) UIImageView *imgV; // @synthesize imgV=_imgV;
@property(nonatomic) __weak UILabel *lblJobAndAddress; // @synthesize lblJobAndAddress=_lblJobAndAddress;
@property(nonatomic) __weak UIImageView *imgSign; // @synthesize imgSign=_imgSign;
@property(nonatomic) __weak UILabel *lblName; // @synthesize lblName=_lblName;
@property(nonatomic) __weak UIImageView *headImage; // @synthesize headImage=_headImage;
- (void).cxx_destruct;
- (void)loadCellViewData:(id)arg1;
- (void)awakeFromNib;

@end

