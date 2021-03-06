/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DALocalDBHelper : NSObject {
    int  _abConnectionCount;
    void * _abDB;
    NSObject<OS_dispatch_queue> * _abDBQueue;
    int  _bookmarkConnectionCount;
    void * _bookmarkDB;
    NSObject<OS_dispatch_queue> * _bookmarkDBQueue;
    int  _calConnectionCount;
    /* Warning: unhandled struct encoding: '{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}B^{__CFArray}^{__CFArray}B@}' */ struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long x_8_1_1; BOOL x_8_1_2[40]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long x_20_1_1; BOOL x_20_1_2[40]; } x20; bool x21; struct __CFArray {} *x22; struct __CFArray {} *x23; bool x24; id x25; } * _calDB;
    NSObject<OS_dispatch_queue> * _calDBQueue;
    id /* block */  _calUnitTestCallbackBlock;
    NSString * _clientIdentifier;
    int  _noteConnectionCount;
    NoteContext * _noteDB;
    NSObject<OS_dispatch_queue> * _noteDBQueue;
}

@property (nonatomic) int abConnectionCount;
@property (nonatomic) void*abDB;
@property (nonatomic) int bookmarkConnectionCount;
@property (nonatomic) void*bookmarkDB;
@property (nonatomic) int calConnectionCount;
@property (nonatomic) /* Warning: unhandled struct encoding: '{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}B^{__CFArray}^{__CFArray}B@}' */ struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long x_8_1_1; BOOL x_8_1_2[40]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long x_20_1_1; BOOL x_20_1_2[40]; } x20; bool x21; struct __CFArray {} *x22; struct __CFArray {} *x23; bool x24; id x25; }*calDB;
@property (nonatomic, copy) id /* block */ calUnitTestCallbackBlock;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic) int noteConnectionCount;
@property (nonatomic, retain) NoteContext *noteDB;

+ (void)abSetTestABDBDir:(id)arg1;
+ (id)abTestABDBDir;
+ (void)calSetTestCalDBDir:(id)arg1;
+ (id)calTestCalDBDir;
+ (id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2;

- (void).cxx_destruct;
- (BOOL)_abOpenDBWithClientIdentifier:(id)arg1;
- (BOOL)_calOpenDBWithClientIdentifier:(id)arg1;
- (void)_registerForAddressBookYieldNotifications;
- (void)_registerForCalendarYieldNotifications;
- (void)abClearSuperfluousChanges;
- (BOOL)abCloseDBAndSave:(BOOL)arg1;
- (int)abConnectionCount;
- (id)abConstraintPlistPath;
- (void*)abDB;
- (void*)abDBThrowOnNil:(BOOL)arg1;
- (void)abOpenDBAsGenericClient;
- (void)abOpenDBWithClientIdentifier:(id)arg1;
- (void)abProcessAddedImages;
- (void)abProcessAddedRecords;
- (BOOL)abSaveDB;
- (void)bookmarkCloseDBAndSave:(BOOL)arg1;
- (int)bookmarkConnectionCount;
- (void*)bookmarkDB;
- (BOOL)bookmarkOpenDB;
- (void)bookmarkSaveDB;
- (void)calClearSuperfluousChanges;
- (BOOL)calCloseDBAndSave:(BOOL)arg1;
- (int)calConnectionCount;
- (/* Warning: unhandled struct encoding: '{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}B^{__CFArray}^{__CFArray}B@}' */ struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long x_8_1_1; BOOL x_8_1_2[40]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long x_20_1_1; BOOL x_20_1_2[40]; } x20; bool x21; struct __CFArray {} *x22; struct __CFArray {} *x23; bool x24; id x25; }*)calDB;
- (void)calOpenDBAsGenericClient;
- (void)calOpenDBWithClientIdentifier:(id)arg1;
- (BOOL)calSaveDB;
- (BOOL)calSaveDBAndFlushCaches;
- (id /* block */)calUnitTestCallbackBlock;
- (void)calUnitTestsSetCallbackBlockForSave:(id /* block */)arg1;
- (id)changeTrackingID;
- (id)clientIdentifier;
- (id)init;
- (BOOL)noteCloseDBAndSave:(BOOL)arg1;
- (int)noteConnectionCount;
- (id)noteDB;
- (void)noteOpenDB;
- (BOOL)noteSaveDB;
- (void)setAbConnectionCount:(int)arg1;
- (void)setAbDB:(void*)arg1;
- (void)setBookmarkConnectionCount:(int)arg1;
- (void)setBookmarkDB:(void*)arg1;
- (void)setCalConnectionCount:(int)arg1;
- (void)setCalDB:(/* Warning: unhandled struct encoding: '{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}B^{__CFArray}^{__CFArray}B@}' */ struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long x_8_1_1; BOOL x_8_1_2[40]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long x_20_1_1; BOOL x_20_1_2[40]; } x20; bool x21; struct __CFArray {} *x22; struct __CFArray {} *x23; bool x24; id x25; }*)arg1;
- (void)setCalUnitTestCallbackBlock:(id /* block */)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setNoteConnectionCount:(int)arg1;
- (void)setNoteDB:(id)arg1;

@end
