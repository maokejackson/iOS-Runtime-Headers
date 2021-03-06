/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCharacterTexture : NSObject {
    const void * _data;
    unsigned int  _gid;
    int  _length;
}

@property (nonatomic, readonly) const void*data;
@property (nonatomic) unsigned int gid;
@property (nonatomic, readonly) int length;

- (const void*)data;
- (unsigned int)gid;
- (id)initWithData:(const void*)arg1 length:(int)arg2;
- (int)length;
- (void)setGid:(unsigned int)arg1;

@end
