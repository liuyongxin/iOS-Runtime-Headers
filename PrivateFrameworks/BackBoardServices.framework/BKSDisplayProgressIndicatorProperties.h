/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSDisplayProgressIndicatorProperties : NSObject <BSDescriptionProviding, NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    int  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly) int style;
@property (readonly) Class superclass;

+ (id)progressIndicatorWithStyle:(int)arg1 position:(struct CGPoint { double x1; double x2; })arg2;
+ (BOOL)supportsSecureCoding;

- (id)_initWithStyle:(int)arg1 position:(struct CGPoint { double x1; double x2; })arg2;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })position;
- (int)style;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end