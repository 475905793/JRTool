//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "IModelCell-Protocol.h"

@class EaseImageView, NSIndexPath, NSLayoutConstraint, NSString, UIColor, UIFont, UILabel;
@protocol EaseUserCellDelegate, IUserModel;

@interface EaseUserCell : UITableViewCell <IModelCell>
{
    _Bool _showAvatar;
    id <EaseUserCellDelegate> _delegate;
    EaseImageView *_avatarView;
    UILabel *_titleLabel;
    id <IUserModel> _model;
    NSIndexPath *_indexPath;
    UIFont *_titleLabelFont;
    UIColor *_titleLabelColor;
    NSLayoutConstraint *_titleWithAvatarLeftConstraint;
    NSLayoutConstraint *_titleWithoutAvatarLeftConstraint;
}

+ (double)cellHeightWithModel:(id)arg1;
+ (id)cellIdentifierWithModel:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSLayoutConstraint *titleWithoutAvatarLeftConstraint; // @synthesize titleWithoutAvatarLeftConstraint=_titleWithoutAvatarLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleWithAvatarLeftConstraint; // @synthesize titleWithAvatarLeftConstraint=_titleWithAvatarLeftConstraint;
@property(retain, nonatomic) UIColor *titleLabelColor; // @synthesize titleLabelColor=_titleLabelColor;
@property(retain, nonatomic) UIFont *titleLabelFont; // @synthesize titleLabelFont=_titleLabelFont;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool showAvatar; // @synthesize showAvatar=_showAvatar;
@property(retain, nonatomic) id <IUserModel> model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) EaseImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak id <EaseUserCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)headerLongPress:(id)arg1;
- (void)_setupTitleLabelConstraints;
- (void)_setupAvatarViewConstraints;
- (void)_setupSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

