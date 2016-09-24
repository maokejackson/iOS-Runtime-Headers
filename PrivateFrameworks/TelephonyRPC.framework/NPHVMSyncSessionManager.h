/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

@interface NPHVMSyncSessionManager : NSObject <SYChangeSerializer, SYSessionDelegate> {
    BOOL  _cancel;
    id /* block */  _completionCallback;
    NSMutableArray * _deltaSyncChangeTypes;
    NSMutableArray * _deltaSyncChanges;
    unsigned int  _deltaSyncCurrentIdx;
    BOOL  _sessionInvalidated;
    NSObject<NPHVMSessionDelegate> * _vmSessionDelegate;
    id /* block */  _vmSessionProgressCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL sessionInvalidated;
@property (readonly) Class superclass;
@property (nonatomic) NSObject<NPHVMSessionDelegate> *vmSessionDelegate;
@property (nonatomic, copy) id /* block */ vmSessionProgressCallback;

- (void).cxx_destruct;
- (void)cancel;
- (id)changeFromData:(id)arg1 ofType:(int)arg2;
- (id)dataFromChange:(id)arg1;
- (id)decodeChangeData:(id)arg1 fromProtocolVersion:(int)arg2 ofType:(int)arg3;
- (id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(int)arg2;
- (void)enqueueVoicemailChanges:(id)arg1 changeType:(int)arg2;
- (id)init;
- (BOOL)sessionInvalidated;
- (void)setSessionInvalidated:(BOOL)arg1;
- (void)setVmSessionDelegate:(id)arg1;
- (void)setVmSessionProgressCallback:(id /* block */)arg1;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (int)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;
- (BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;
- (id)vmSessionDelegate;
- (id /* block */)vmSessionProgressCallback;

@end