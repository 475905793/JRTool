//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJCommentHandler.h"

@interface JRJStockCommentHandler : JRJCommentHandler
{
}

- (id)handlerAdviserQueryResponseData:(id)arg1;
- (id)handleParseMarvellousanswerList:(id)arg1 isFirstPage:(_Bool)arg2;
- (id)handlerAnswerResponseArr:(id)arg1;
- (id)bindTableCellWithSource:(id)arg1;
- (id)handleResponseData:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 responseObject:(id)arg2 error:(id *)arg3;
- (void)getFocusCommentListCurrentPage:(long long)arg1 requestFinish:(CDUnknownBlockType)arg2;
- (void)requestHGCommentListWithStockids:(id)arg1 requestFinish:(CDUnknownBlockType)arg2;
- (void)requestAdviserListWithStockids:(id)arg1 userID:(id)arg2 timeld:(long long)arg3 requestFinish:(CDUnknownBlockType)arg4;
- (void)requestAnswerWithCode:(id)arg1 market:(id)arg2 currentPage:(long long)arg3 requestFinish:(CDUnknownBlockType)arg4;
- (void)getCtitleNoticerequestFinish:(CDUnknownBlockType)arg1;
- (void)getStockTopicHeaderInfoWithId:(id)arg1 requestFinish:(CDUnknownBlockType)arg2;
- (void)stockFragmentWithCode:(id)arg1 requestFinish:(CDUnknownBlockType)arg2;
- (void)stockGetCommentListWithStockCode:(id)arg1 bizType:(id)arg2 currentPage:(long long)arg3 subFilter:(id)arg4 requestFinish:(CDUnknownBlockType)arg5;
- (void)stockGetCommentListWithStockCode:(id)arg1 bizType:(id)arg2 currentPage:(long long)arg3 requestFinish:(CDUnknownBlockType)arg4;
- (void)stockCommetnChangeForecastWithCode:(id)arg1 forecastType:(long long)arg2 requestFinish:(CDUnknownBlockType)arg3;
- (void)stockCommetnGetForecastWithStockCode:(id)arg1 requestFinish:(CDUnknownBlockType)arg2;

@end
