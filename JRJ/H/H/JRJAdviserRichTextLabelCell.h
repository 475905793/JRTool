//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YCBBaseTableViewCell.h"

#import "RTLabelDelegate-Protocol.h"

@class JRJRCLabelProxy, MLLinkLabel, NSAttributedString, NSString;

@interface JRJAdviserRichTextLabelCell : YCBBaseTableViewCell <RTLabelDelegate>
{
    CDUnknownBlockType _richTextLabelClickBlock;
    CDUnknownBlockType _stockNameBlock;
    CDUnknownBlockType _insertTypeBlock;
    NSAttributedString *_attributedContent;
    NSString *_content;
    JRJRCLabelProxy *_rcLabelProxy;
    MLLinkLabel *_messageLabel;
}

+ (double)heightWithIntro:(id)arg1;
@property(retain, nonatomic) MLLinkLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) JRJRCLabelProxy *rcLabelProxy; // @synthesize rcLabelProxy=_rcLabelProxy;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSAttributedString *attributedContent; // @synthesize attributedContent=_attributedContent;
@property(copy, nonatomic) CDUnknownBlockType insertTypeBlock; // @synthesize insertTypeBlock=_insertTypeBlock;
@property(copy, nonatomic) CDUnknownBlockType stockNameBlock; // @synthesize stockNameBlock=_stockNameBlock;
@property(copy, nonatomic) CDUnknownBlockType richTextLabelClickBlock; // @synthesize richTextLabelClickBlock=_richTextLabelClickBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

