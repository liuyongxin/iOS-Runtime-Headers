/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPLibraryAddStatusObserver : NSObject {
    struct MPLibraryAddStatusObserverConfiguration { 
        BOOL isValidContentType; 
        BOOL isLibraryAdded; 
        BOOL hasCleanContent; 
        BOOL hasExplicitContent; 
        BOOL isLibraryAddEligible; 
    }  _configuration;
    unsigned int  _currentStatus;
    MPModelObject * _identifyingModelObject;
    id /* block */  _statusBlock;
}

@property (nonatomic, readonly) struct MPLibraryAddStatusObserverConfiguration { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } configuration;
@property (nonatomic, readonly) unsigned int currentStatus;
@property (nonatomic, readonly) MPModelObject *identifyingModelObject;
@property (nonatomic, copy) id /* block */ statusBlock;

- (void).cxx_destruct;
- (void)_allowsExplicitContentDidChangeNotification:(id)arg1;
- (unsigned int)_calculateCurrentStatus;
- (void)_cloudLibraryEnabledDidChangeNotification:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_transientStateDidChangeNotification:(id)arg1;
- (void)_updateCurrentStatus;
- (void)_updateInProgressDidChangeNotification:(id)arg1;
- (struct MPLibraryAddStatusObserverConfiguration { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; })configuration;
- (void)configureWithModelObject:(id)arg1;
- (unsigned int)currentStatus;
- (void)dealloc;
- (id)identifyingModelObject;
- (id)init;
- (void)setConfiguration:(struct MPLibraryAddStatusObserverConfiguration { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; })arg1 identifyingModelObject:(id)arg2;
- (void)setStatusBlock:(id /* block */)arg1;
- (id /* block */)statusBlock;

@end
