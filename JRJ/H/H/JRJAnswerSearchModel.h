//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJAnswerAskModel.h"

@class JRJAnswerModel, NSDictionary;

@interface JRJAnswerSearchModel : JRJAnswerAskModel
{
    JRJAnswerModel *_answer;
    NSDictionary *_answerDic;
}

+ (id)answerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSDictionary *answerDic; // @synthesize answerDic=_answerDic;
@property(retain, nonatomic) JRJAnswerModel *answer; // @synthesize answer=_answer;
- (void).cxx_destruct;

@end

