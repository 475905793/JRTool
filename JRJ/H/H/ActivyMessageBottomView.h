//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseXibView.h"

@class NSString, UIImageView, UILabel;

@interface ActivyMessageBottomView : BaseXibView
{
    NSString *_numReaded;
    NSString *_numFavour;
    UILabel *_commentNumLabel;
    UILabel *_favourNumLabel;
    UIImageView *_commentImageView;
    UIImageView *_favourImageView;
}

@property(nonatomic) __weak UIImageView *favourImageView; // @synthesize favourImageView=_favourImageView;
@property(nonatomic) __weak UIImageView *commentImageView; // @synthesize commentImageView=_commentImageView;
@property(nonatomic) __weak UILabel *favourNumLabel; // @synthesize favourNumLabel=_favourNumLabel;
@property(nonatomic) __weak UILabel *commentNumLabel; // @synthesize commentNumLabel=_commentNumLabel;
@property(copy, nonatomic) NSString *numFavour; // @synthesize numFavour=_numFavour;
@property(copy, nonatomic) NSString *numReaded; // @synthesize numReaded=_numReaded;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

