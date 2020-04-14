//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseCell.h"

@class UIImageView, UILabel;

@interface AttentionListCell : JRJBaseCell
{
    UIImageView *_headImage;
    UILabel *_lblName;
    UIImageView *_vImageView;
    UILabel *_lblInfo;
    UILabel *_lblCompany;
    UILabel *_lblSignedDate;
    UILabel *_lblHasSigned;
}

@property(nonatomic) __weak UILabel *lblHasSigned; // @synthesize lblHasSigned=_lblHasSigned;
@property(nonatomic) __weak UILabel *lblSignedDate; // @synthesize lblSignedDate=_lblSignedDate;
@property(nonatomic) __weak UILabel *lblCompany; // @synthesize lblCompany=_lblCompany;
@property(nonatomic) __weak UILabel *lblInfo; // @synthesize lblInfo=_lblInfo;
@property(nonatomic) __weak UIImageView *vImageView; // @synthesize vImageView=_vImageView;
@property(nonatomic) __weak UILabel *lblName; // @synthesize lblName=_lblName;
@property(nonatomic) __weak UIImageView *headImage; // @synthesize headImage=_headImage;
- (void).cxx_destruct;
- (void)loadCellViewData:(id)arg1;
- (void)awakeFromNib;

@end

