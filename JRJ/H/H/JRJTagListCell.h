//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YCBBaseTableViewCell.h"

@class JFTagListView, NSArray;

@interface JRJTagListCell : YCBBaseTableViewCell
{
    NSArray *_tagTitles;
    JFTagListView *_tagListV;
}

+ (double)heightForCellWithTags:(id)arg1;
@property(retain, nonatomic) JFTagListView *tagListV; // @synthesize tagListV=_tagListV;
@property(retain, nonatomic) NSArray *tagTitles; // @synthesize tagTitles=_tagTitles;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

