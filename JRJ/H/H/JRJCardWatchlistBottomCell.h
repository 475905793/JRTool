//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJCardCell.h"

@class JRJWatchlistItem, UIImageView, UILabel;

@interface JRJCardWatchlistBottomCell : JRJCardCell
{
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    JRJWatchlistItem *_item;
    CDUnknownBlockType _avatarTapBlock;
}

+ (double)cellHeight;
@property(copy, nonatomic) CDUnknownBlockType avatarTapBlock; // @synthesize avatarTapBlock=_avatarTapBlock;
@property(retain, nonatomic) JRJWatchlistItem *item; // @synthesize item=_item;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)avatarPressed:(id)arg1;
- (void)awakeFromNib;

@end

