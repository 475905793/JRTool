//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJCourse, UIImageView, UILabel;

@interface JRJCourseMyListCell : JRJTableViewCell
{
    JRJCourse *_course;
    UILabel *_titleLabel;
    UILabel *_numLabel;
    UILabel *_statusLabel;
    UIImageView *_thumbImageView;
    UILabel *_expireLabel;
    UIImageView *_clockImageView;
    UILabel *_expireDateLabel;
}

+ (double)cellHeight;
@property(retain, nonatomic) UILabel *expireDateLabel; // @synthesize expireDateLabel=_expireDateLabel;
@property(retain, nonatomic) UIImageView *clockImageView; // @synthesize clockImageView=_clockImageView;
@property(retain, nonatomic) UILabel *expireLabel; // @synthesize expireLabel=_expireLabel;
@property(nonatomic) __weak UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) __weak UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JRJCourse *course; // @synthesize course=_course;
- (void).cxx_destruct;
- (void)commonInit;
- (void)awakeFromNib;

@end

