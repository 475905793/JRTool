//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface JRJReferenceDeatilRelatedCourseView : UIView
{
    NSString *_courseName;
    CDUnknownBlockType _didPressedRelatedCourseBlock;
    UILabel *_courseNameLabel;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *courseNameLabel; // @synthesize courseNameLabel=_courseNameLabel;
@property(copy, nonatomic) CDUnknownBlockType didPressedRelatedCourseBlock; // @synthesize didPressedRelatedCourseBlock=_didPressedRelatedCourseBlock;
@property(copy, nonatomic) NSString *courseName; // @synthesize courseName=_courseName;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
