/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMVoicemailGreeting : NSObject <NSSecureCoding> {
    double  _duration;
    unsigned int  _type;
    NSURL * _url;
}

@property (nonatomic) double duration;
@property (nonatomic) unsigned int type;
@property (nonatomic, retain) NSURL *url;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (unsigned int)type;
- (id)url;

@end