//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIButton;

@interface JRJThirdPartyLoginCell : UICollectionViewCell
{
    NSString *_iconName;
    CDUnknownBlockType _pressBlock;
    UIButton *_iconButton;
}

@property(nonatomic) __weak UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(copy, nonatomic) CDUnknownBlockType pressBlock; // @synthesize pressBlock=_pressBlock;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)awakeFromNib;

@end

