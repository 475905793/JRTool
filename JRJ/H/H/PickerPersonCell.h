//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewBaseCell.h"

@class HeaderImageView, UIImageView, UILabel;

@interface PickerPersonCell : KKTableViewBaseCell
{
    UIImageView *_pickerIconView;
    HeaderImageView *_headerImageView;
    UILabel *_nameLabel;
    UIImageView *_idImageView;
    UIImageView *_statusImageView;
    UIImageView *_signImageView;
    _Bool _isPicked;
    _Bool _canPicked;
    long long _relationStatus;
}

@property(retain, nonatomic) HeaderImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) _Bool isPicked; // @synthesize isPicked=_isPicked;
@property(nonatomic) _Bool canPicked; // @synthesize canPicked=_canPicked;
- (void).cxx_destruct;
- (void)updateCellWithSource:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

