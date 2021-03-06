/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackStore : NSObject {
    NSMutableDictionary * _store;
}

@property (nonatomic, readonly) NSDictionary *store;

- (void).cxx_destruct;
- (void)_cleanupStore;
- (BOOL)_loadStore;
- (BOOL)_saveStore;
- (id)_storePath;
- (void)addFeedbackEntry:(id)arg1;
- (id)init;
- (id)longDescription;
- (void)removeFeedbackEntry:(id)arg1;
- (unsigned int)sentFeedbackCount;
- (id)store;
- (unsigned int)unsentFeedbackCount;

@end
