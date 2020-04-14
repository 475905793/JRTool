//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, NSString, UILabel, UIView;

@interface JRJTopicItemCell : UICollectionViewCell
{
    _Bool _hot;
    NSString *_topic;
    UIView *_vLine;
    UIView *_hLine;
    NSLayoutConstraint *_horizontalConstraint;
    UILabel *_topicLabel;
    UILabel *_hotLabel;
}

@property(nonatomic) __weak UILabel *hotLabel; // @synthesize hotLabel=_hotLabel;
@property(nonatomic) __weak UILabel *topicLabel; // @synthesize topicLabel=_topicLabel;
@property(nonatomic) __weak NSLayoutConstraint *horizontalConstraint; // @synthesize horizontalConstraint=_horizontalConstraint;
@property(nonatomic) __weak UIView *hLine; // @synthesize hLine=_hLine;
@property(nonatomic) __weak UIView *vLine; // @synthesize vLine=_vLine;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic, getter=isHot) _Bool hot; // @synthesize hot=_hot;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;

@end
