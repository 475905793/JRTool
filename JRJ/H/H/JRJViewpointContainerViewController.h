//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

@class NSMutableArray, NSString;

@interface JRJViewpointContainerViewController : JRJBaseViewController
{
    NSString *_catId;
    NSMutableArray *_columns;
}

@property(retain, nonatomic) NSMutableArray *columns; // @synthesize columns=_columns;
@property(copy, nonatomic) NSString *catId; // @synthesize catId=_catId;
- (void).cxx_destruct;
- (void)showPageController;
- (void)fetchColumns;
- (void)viewDidLoad;
- (id)initWithSelectedCatId:(id)arg1;

@end

