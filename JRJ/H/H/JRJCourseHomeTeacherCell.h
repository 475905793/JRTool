//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJCourse, UIImageView, UILabel, UIView;

@interface JRJCourseHomeTeacherCell : JRJTableViewCell
{
    JRJCourse *_course;
    CDUnknownBlockType _avatarTappedBlock;
    UILabel *_nameLabel;
    UIImageView *_avatarImageView;
    UILabel *_descLabel;
    UIView *_bgView;
}

@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(copy, nonatomic) CDUnknownBlockType avatarTappedBlock; // @synthesize avatarTappedBlock=_avatarTappedBlock;
@property(retain, nonatomic) JRJCourse *course; // @synthesize course=_course;
- (void).cxx_destruct;
- (void)avatarTapped:(id)arg1;
- (void)awakeFromNib;

@end

