//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JRJVerticalBannerDataSource-Protocol.h"
#import "JRJVerticalBannerDelegate-Protocol.h"

@class JRJVerticalBanner, NSArray, NSString, UIImageView;

@interface JRJPortfolioHomePageFooterView : UIView <JRJVerticalBannerDelegate, JRJVerticalBannerDataSource>
{
    NSArray *_ads;
    CDUnknownBlockType _bannerClickedBlock;
    JRJVerticalBanner *_textBanner;
    UIImageView *_imageView;
}

@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak JRJVerticalBanner *textBanner; // @synthesize textBanner=_textBanner;
@property(copy, nonatomic) CDUnknownBlockType bannerClickedBlock; // @synthesize bannerClickedBlock=_bannerClickedBlock;
@property(retain, nonatomic) NSArray *ads; // @synthesize ads=_ads;
- (void).cxx_destruct;
- (void)banner:(id)arg1 didSelectIndex:(long long)arg2;
- (id)banner:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInBanner:(id)arg1;
- (void)loadNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

