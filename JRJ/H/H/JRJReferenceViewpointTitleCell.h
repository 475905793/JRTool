//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJReference, UILabel;

@interface JRJReferenceViewpointTitleCell : JRJTableViewCell
{
    JRJReference *_reference;
    UILabel *_titleLabel;
}

+ (double)cellHeight;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JRJReference *reference; // @synthesize reference=_reference;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

