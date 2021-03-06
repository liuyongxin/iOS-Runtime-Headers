/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAVListingFaceBaseView : NTKAVFaceBaseView {
    UIView * _blackView;
    BOOL  _contentUnloadedForFaceSwiping;
    <NTKAVListing> * _currentListing;
    BOOL  _isPauseLockedout;
    BOOL  _isPaused;
    NTKDelayedBlock * _pauseLockoutBlock;
    NTKDelayedBlock * _playNextVideoDelayBlock;
    NSTimer * _playOnWakeTimeout;
    BOOL  _preLoadedVideoOnSleep;
    BOOL  _preLoadingVideoOnSleep;
    int  _previousDataMode;
    BOOL  _shouldChangeVariantForScreenWake;
    BOOL  _shouldPause;
    BOOL  _shouldPlayOnWake;
    NTKTaskScheduler * _taskScheduler;
    id /* block */  _unpauseFromSwitcherBlock;
}

@property (nonatomic) BOOL contentUnloadedForFaceSwiping;
@property (nonatomic, retain) <NTKAVListing> *currentListing;
@property (nonatomic, readonly) BOOL paused;
@property (nonatomic) BOOL shouldChangeVariantForScreenWake;
@property (nonatomic, readonly) BOOL shouldPause;

- (void).cxx_destruct;
- (void)_activatePauseLockout;
- (void)_addSubviewInOrder:(id)arg1;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_applySlow;
- (void)_cancelDelayedPlayback;
- (void)_cancelPauseLockout;
- (BOOL)_changeCurrentListing;
- (void)_cleanupAfterOrb:(BOOL)arg1;
- (id)_curtainView;
- (BOOL)_curtainViewVisible;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)_fadeFromCurtainViewWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)_fadeToCurtainViewWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)_handleOrdinaryScreenWake;
- (void)_handleScreenWake;
- (void)_handleWristRaiseScreenWake;
- (void)_hideCurtainView;
- (void)_loadSnapshotContentViews;
- (void)_loadVideoForListing;
- (BOOL)_needsVignette;
- (id)_nextListing;
- (id)_onDeckPosterImageView;
- (void)_pauseImmediately;
- (void)_performPreloadVideoTask;
- (void)_playNextVideo;
- (void)_playNextVideoAfterDelay:(double)arg1;
- (void)_playQueuedUpVideo;
- (void)_playVideo;
- (void)_playVideoForScreenWake:(id)arg1;
- (void)_prepareForEditing;
- (void)_prepareForOrb;
- (void)_queuePreloadVideoTask;
- (void)_reset;
- (void)_resetVideoForListing;
- (void)_selectDefaultListing;
- (void)_showCurtainView;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (BOOL)_timeLabelUsesLegibility;
- (void)_transitionToPosterView:(id)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_unpauseFromSwitcher;
- (void)_updateImageToBlur;
- (void)_updatePaused;
- (BOOL)contentUnloadedForFaceSwiping;
- (id)currentListing;
- (void)dealloc;
- (void)faultInFaceContentSkippedDuringSwiping;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)paused;
- (void)setContentUnloadedForFaceSwiping:(BOOL)arg1;
- (void)setCurrentListing:(id)arg1;
- (void)setShouldChangeVariantForScreenWake:(BOOL)arg1;
- (BOOL)shouldChangeVariantForScreenWake;
- (BOOL)shouldPause;

@end
