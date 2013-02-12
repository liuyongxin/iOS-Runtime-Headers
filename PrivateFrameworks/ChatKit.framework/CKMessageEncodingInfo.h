/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableString;

@interface CKMessageEncodingInfo : NSObject {
    NSInteger _characterCountDenominator;
    NSInteger _characterCountNumerator;
    BOOL _infoCalculated;
    BOOL _isTextOnly;
    NSMutableString *_mutableText;
}

@property NSInteger characterCountDenominator;
@property NSInteger characterCountNumerator;
@property BOOL infoCalculated;
@property BOOL isTextOnly;

- (void)_calculateInfoIfNecessary;
- (void)calculateInfo;
- (NSInteger)characterCountDenominator;
- (NSInteger)characterCountNumerator;
- (void)dealloc;
- (BOOL)infoCalculated;
- (id)initWithContentsOfComposition:(id)arg1;
- (BOOL)isTextOnly;
- (void)setCharacterCountDenominator:(NSInteger)arg1;
- (void)setCharacterCountNumerator:(NSInteger)arg1;
- (void)setInfoCalculated:(BOOL)arg1;
- (void)setIsTextOnly:(BOOL)arg1;
- (void)updateByReloadingFromComposition:(id)arg1 replacementRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 replacementText:(id)arg3;

@end