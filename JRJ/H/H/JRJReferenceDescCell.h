//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YCBBaseTableViewCell.h"

@class UILabel;

@interface JRJReferenceDescCell : YCBBaseTableViewCell
{
    UILabel *_titleL;
    UILabel *_descL;
}

+ (double)cellHeightWithText:(id)arg1;
+ (double)labelHeight:(id)arg1;
@property(retain, nonatomic) UILabel *descL; // @synthesize descL=_descL;
@property(retain, nonatomic) UILabel *titleL; // @synthesize titleL=_titleL;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
