/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXScheduler : NSObject {
    BOOL  _hasPendingPerformInDefaultRunLoopMode;
    BOOL  _isPerformingPendingBlocks;
    NSMutableArray * _pendingBlocks;
}

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (void)_enteredDefaultRunLoopMode;
- (void)_performPendingBlocks;
- (void)_performPendingBlocksIfNeeded;
- (void)dispatchInMainTransaction:(id /* block */)arg1;
- (void)dispatchInMainTransactionAfterDelay:(double)arg1 block:(id /* block */)arg2;
- (id)init;
- (void)scrollViewDidScroll;
- (void)scrollViewWillLayoutSubviews;

@end