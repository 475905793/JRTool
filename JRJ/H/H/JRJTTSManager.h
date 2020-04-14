//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDSSpeechSynthesizerDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol JRJTTSManagerDelegate;

@interface JRJTTSManager : NSObject <BDSSpeechSynthesizerDelegate>
{
    _Bool _isPlay;
    _Bool _isBoy;
    id <JRJTTSManagerDelegate> _delegate;
    long long _speakStyle;
    NSMutableArray *_synthesisTexts;
    NSMutableArray *_addTextQueue;
    double _delayTime;
    long long _currentIndex;
}

+ (id)shareTTSManager;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool isBoy; // @synthesize isBoy=_isBoy;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(retain, nonatomic) NSMutableArray *addTextQueue; // @synthesize addTextQueue=_addTextQueue;
@property(retain, nonatomic) NSMutableArray *synthesisTexts; // @synthesize synthesisTexts=_synthesisTexts;
@property(nonatomic) _Bool isPlay; // @synthesize isPlay=_isPlay;
@property(nonatomic) long long speakStyle; // @synthesize speakStyle=_speakStyle;
@property(nonatomic) __weak id <JRJTTSManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)synthesizerCanceled;
- (void)synthesizerErrorOccurred:(id)arg1 speaking:(long long)arg2 synthesizing:(long long)arg3;
- (void)synthesizerResumed;
- (void)synthesizerPaused:(int)arg1;
- (void)synthesizerdidPause;
- (void)synthesizerTextSpeakLengthChanged:(int)arg1 sentenceNumber:(long long)arg2;
- (void)synthesizerNewDataArrived:(id)arg1 DataFormat:(int)arg2 characterCount:(int)arg3 sentenceNumber:(long long)arg4;
- (void)synthesizerSpeechEndSentence:(long long)arg1;
- (void)synthesizerSpeechStartSentence:(long long)arg1;
- (void)synthesizerFinishWorkingSentence:(long long)arg1;
- (void)synthesizerStartWorkingSentence:(long long)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)p_changePlayCenterInfoWithTitle:(id)arg1;
- (void)speakSentenceArr:(id)arg1 delayTime:(double)arg2 isAppend:(_Bool)arg3;
- (void)speakSentenceArr:(id)arg1 delayTime:(double)arg2;
- (void)speakSentence:(id)arg1;
- (void)pause;
- (void)resume;
- (void)reset;
- (long long)speechQueueCount;
- (void)releaseInstance;
- (void)configBasePlayCenter;
- (void)configBaseData;
- (void)configureOfflineTTS;
- (void)configureOnlineTTS;
- (void)configureSDK;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

