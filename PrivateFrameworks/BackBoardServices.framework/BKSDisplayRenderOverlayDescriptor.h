/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSDisplayRenderOverlayDescriptor : NSObject <BKSDisplayRenderOverlayDescribing, BSDescriptionProviding, NSSecureCoding> {
    CADisplay * _display;
    NSString * _displayUUID;
    int  _interfaceOrientation;
    BOOL  _interstitial;
    BOOL  _lockBacklight;
    NSString * _name;
    BKSDisplayProgressIndicatorProperties * _progressIndicatorProperties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) CADisplay *display;
@property (nonatomic, copy) NSString *displayUUID;
@property (readonly) unsigned int hash;
@property (nonatomic) int interfaceOrientation;
@property (getter=isInterstitial, setter=_setInterstitial:, nonatomic) BOOL interstitial;
@property (nonatomic) BOOL lockBacklight;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property (readonly) Class superclass;

+ (id)_classesRequiredToDecode;
+ (id)descriptorWithName:(id)arg1 display:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (id)_initWithName:(id)arg1 displayUUID:(id)arg2;
- (void)_setInterstitial:(BOOL)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)display;
- (id)displayUUID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 display:(id)arg2;
- (int)interfaceOrientation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInterstitial;
- (BOOL)lockBacklight;
- (id)name;
- (id)progressIndicatorProperties;
- (void)setDisplayUUID:(id)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setLockBacklight:(BOOL)arg1;
- (void)setProgressIndicatorProperties:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end