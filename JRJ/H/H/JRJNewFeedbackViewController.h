//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

#import "AddPhotoViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class AddPhotoView, JRJPassportValidator, MCPlaceHolderTextView, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UILabel, UITextField, UIView;

@interface JRJNewFeedbackViewController : JRJBaseViewController <UITextViewDelegate, AddPhotoViewDelegate>
{
    _Bool _isSubmitSuccess;
    UIView *_allUIview;
    UIView *_telOrmailUiview;
    UIView *_imagesUIView;
    UIView *_containImagesView;
    MCPlaceHolderTextView *_contentTextView;
    UILabel *_deviceinfoLabel;
    UILabel *_contentNumLabel;
    UIButton *_uploadPhotoBtn;
    UILabel *_uploadPhotoLabel;
    UITextField *_telOrmailTextField;
    UIButton *_submitBtn;
    UIButton *_otherContactBtn;
    NSLayoutConstraint *_contactBottomConstraint;
    AddPhotoView *_pv;
    JRJPassportValidator *_validator;
    NSMutableArray *_requestList;
    NSString *_imageurls;
    UIView *_keyboardView;
}

@property(retain, nonatomic) UIView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(nonatomic) _Bool isSubmitSuccess; // @synthesize isSubmitSuccess=_isSubmitSuccess;
@property(retain, nonatomic) NSString *imageurls; // @synthesize imageurls=_imageurls;
@property(retain, nonatomic) NSMutableArray *requestList; // @synthesize requestList=_requestList;
@property(retain, nonatomic) JRJPassportValidator *validator; // @synthesize validator=_validator;
@property(retain, nonatomic) AddPhotoView *pv; // @synthesize pv=_pv;
@property(nonatomic) __weak NSLayoutConstraint *contactBottomConstraint; // @synthesize contactBottomConstraint=_contactBottomConstraint;
@property(nonatomic) __weak UIButton *otherContactBtn; // @synthesize otherContactBtn=_otherContactBtn;
@property(nonatomic) __weak UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(nonatomic) __weak UITextField *telOrmailTextField; // @synthesize telOrmailTextField=_telOrmailTextField;
@property(nonatomic) __weak UILabel *uploadPhotoLabel; // @synthesize uploadPhotoLabel=_uploadPhotoLabel;
@property(nonatomic) __weak UIButton *uploadPhotoBtn; // @synthesize uploadPhotoBtn=_uploadPhotoBtn;
@property(nonatomic) __weak UILabel *contentNumLabel; // @synthesize contentNumLabel=_contentNumLabel;
@property(nonatomic) __weak UILabel *deviceinfoLabel; // @synthesize deviceinfoLabel=_deviceinfoLabel;
@property(nonatomic) __weak MCPlaceHolderTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(nonatomic) __weak UIView *containImagesView; // @synthesize containImagesView=_containImagesView;
@property(nonatomic) __weak UIView *imagesUIView; // @synthesize imagesUIView=_imagesUIView;
@property(nonatomic) __weak UIView *telOrmailUiview; // @synthesize telOrmailUiview=_telOrmailUiview;
@property(retain, nonatomic) UIView *allUIview; // @synthesize allUIview=_allUIview;
- (void).cxx_destruct;
- (void)visiblePhotos:(unsigned long long)arg1;
- (void)removePhoto:(unsigned long long)arg1;
- (void)addNewPhoto:(unsigned long long)arg1;
- (void)didClickAddPhoto;
- (void)contactMe:(id)arg1;
- (void)clickUploadBtn:(id)arg1;
- (void)getuploadPhotoUrls;
- (void)submitContent;
- (void)showAlert:(id)arg1;
- (void)submitContent:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)changeContentStatus;
- (void)viewWillAppear:(_Bool)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)clickAllView;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didPressedHistoryFeedBack;
- (void)_setupNaviItems;
- (void)initViews;
- (id)title;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

