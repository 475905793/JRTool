//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JRJRichTextModel, NSString, UserAskModel, UserInformationModel;

@interface AnswerRecordModel : NSObject
{
    NSString *_tempAskId;
    NSString *_tempAskContent;
    UserInformationModel *_userInfoModel;
    UserAskModel *_firstQuiz;
    JRJRichTextModel *_firstAnswer;
    UserAskModel *_askModel;
    JRJRichTextModel *_bottomAnswer;
    JRJRichTextModel *_evaluate;
    long long _score;
    NSString *_quizTimeStr;
    long long _answerValues;
    NSString *_voiceUrl;
    NSString *_voiceDuration;
    NSString *_againVoiceUrl;
    NSString *_againVoiceDuration;
    UserAskModel *_tempInviserAnswerModel;
    NSString *_askUserType;
}

@property(copy, nonatomic) NSString *askUserType; // @synthesize askUserType=_askUserType;
@property(retain, nonatomic) UserAskModel *tempInviserAnswerModel; // @synthesize tempInviserAnswerModel=_tempInviserAnswerModel;
@property(copy, nonatomic) NSString *againVoiceDuration; // @synthesize againVoiceDuration=_againVoiceDuration;
@property(copy, nonatomic) NSString *againVoiceUrl; // @synthesize againVoiceUrl=_againVoiceUrl;
@property(copy, nonatomic) NSString *voiceDuration; // @synthesize voiceDuration=_voiceDuration;
@property(copy, nonatomic) NSString *voiceUrl; // @synthesize voiceUrl=_voiceUrl;
@property(nonatomic) long long answerValues; // @synthesize answerValues=_answerValues;
@property(copy, nonatomic) NSString *quizTimeStr; // @synthesize quizTimeStr=_quizTimeStr;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(retain, nonatomic) JRJRichTextModel *evaluate; // @synthesize evaluate=_evaluate;
@property(retain, nonatomic) JRJRichTextModel *bottomAnswer; // @synthesize bottomAnswer=_bottomAnswer;
@property(retain, nonatomic) UserAskModel *askModel; // @synthesize askModel=_askModel;
@property(retain, nonatomic) JRJRichTextModel *firstAnswer; // @synthesize firstAnswer=_firstAnswer;
@property(retain, nonatomic) UserAskModel *firstQuiz; // @synthesize firstQuiz=_firstQuiz;
@property(retain, nonatomic) UserInformationModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(copy, nonatomic) NSString *tempAskContent; // @synthesize tempAskContent=_tempAskContent;
@property(copy, nonatomic) NSString *tempAskId; // @synthesize tempAskId=_tempAskId;
- (void).cxx_destruct;
- (id)init;

@end
