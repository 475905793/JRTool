//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJRCLabelProxy, NSLayoutConstraint, RCLabel, UIImageView, UILabel, UIView;

@interface JRJStockComAnswerCell : JRJTableViewCell
{
    UILabel *_TimeLabel;
    RCLabel *_questionLbl;
    NSLayoutConstraint *_question_H;
    RCLabel *_answerLbl;
    NSLayoutConstraint *_answer_H;
    UIView *_adviserInfoBG;
    UIImageView *_adviserIcon;
    UILabel *_adviserName;
    id _currentModel;
    JRJRCLabelProxy *_rcLabelProxy;
}

+ (double)adviserQuestionHeight:(id)arg1;
+ (double)cellHeightWithModel:(id)arg1;
@property(retain, nonatomic) JRJRCLabelProxy *rcLabelProxy; // @synthesize rcLabelProxy=_rcLabelProxy;
@property(retain, nonatomic) id currentModel; // @synthesize currentModel=_currentModel;
@property(nonatomic) __weak UILabel *adviserName; // @synthesize adviserName=_adviserName;
@property(nonatomic) __weak UIImageView *adviserIcon; // @synthesize adviserIcon=_adviserIcon;
@property(nonatomic) __weak UIView *adviserInfoBG; // @synthesize adviserInfoBG=_adviserInfoBG;
@property(nonatomic) __weak NSLayoutConstraint *answer_H; // @synthesize answer_H=_answer_H;
@property(nonatomic) __weak RCLabel *answerLbl; // @synthesize answerLbl=_answerLbl;
@property(nonatomic) __weak NSLayoutConstraint *question_H; // @synthesize question_H=_question_H;
@property(nonatomic) __weak RCLabel *questionLbl; // @synthesize questionLbl=_questionLbl;
@property(nonatomic) __weak UILabel *TimeLabel; // @synthesize TimeLabel=_TimeLabel;
- (void).cxx_destruct;
- (void)addRcLabelProxy;
- (void)userInfoClick:(id)arg1;
- (void)updateAdviserQuestionAnswerWithModel:(id)arg1;
- (void)updateCellWithMainModel:(id)arg1;
- (void)updateCellWithSource:(id)arg1;
- (void)awakeFromNib;

@end

