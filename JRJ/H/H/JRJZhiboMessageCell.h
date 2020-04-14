//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JRJRCLabelProxy, JRJZhiboBubbleView, JRJZhiboMessage, MLLinkLabel, NSAttributedString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol JRJZhiboMessageCellDelegate;

@interface JRJZhiboMessageCell : UITableViewCell
{
    _Bool _isVIP;
    _Bool _supportsDoubleTapGesture;
    long long _messageType;
    JRJZhiboMessage *_message;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UILabel *_dateLabel;
    JRJZhiboBubbleView *_bubbleView;
    UIImageView *_bubbleArrowView;
    MLLinkLabel *_messageLabel;
    MLLinkLabel *_quoteLabel;
    MLLinkLabel *_showDetailLabel;
    NSAttributedString *_showDetailAttributedString;
    long long _ownerType;
    id <JRJZhiboMessageCellDelegate> _delegate;
    JRJRCLabelProxy *_rcLabelProxy;
    UIImageView *_topImageView;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
}

+ (id)offscreenLabel;
+ (double)bubbleMaxWidth;
+ (double)heightWithMessage:(id)arg1;
+ (id)dateformatter;
+ (Class)classWithMessage:(id)arg1;
+ (id)reuseIndentifierWithMessage:(id)arg1;
+ (void)registerIdentifiersForTable:(id)arg1;
+ (void)registerMessageCell:(Class)arg1 forType:(long long)arg2;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) JRJRCLabelProxy *rcLabelProxy; // @synthesize rcLabelProxy=_rcLabelProxy;
@property(nonatomic) __weak id <JRJZhiboMessageCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool supportsDoubleTapGesture; // @synthesize supportsDoubleTapGesture=_supportsDoubleTapGesture;
@property(nonatomic) _Bool isVIP; // @synthesize isVIP=_isVIP;
@property(nonatomic) long long ownerType; // @synthesize ownerType=_ownerType;
@property(retain, nonatomic) NSAttributedString *showDetailAttributedString; // @synthesize showDetailAttributedString=_showDetailAttributedString;
@property(retain, nonatomic) MLLinkLabel *showDetailLabel; // @synthesize showDetailLabel=_showDetailLabel;
@property(retain, nonatomic) MLLinkLabel *quoteLabel; // @synthesize quoteLabel=_quoteLabel;
@property(retain, nonatomic) MLLinkLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIImageView *bubbleArrowView; // @synthesize bubbleArrowView=_bubbleArrowView;
@property(retain, nonatomic) JRJZhiboBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) JRJZhiboMessage *message; // @synthesize message=_message;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (void)didPressAvatar:(id)arg1;
- (void)didDoubleTap:(id)arg1;
- (void)longPressHandler:(id)arg1;
- (void)makeConstraints;
- (void)setup;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)jrj_selectItemWithSelector:(SEL)arg1;
- (id)jrj_titleForSelector:(SEL)arg1;
- (id)menus;
- (void)p_unpin;
- (void)p_pin;
- (void)p_delete;
- (void)p_reply;
- (void)p_copy;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)showMenu;

@end
