/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLPreviewControllerReserved;

@interface QLPreviewController : UIViewController {
    QLPreviewControllerReserved *_reserved;
}

@property(readonly) <QLPreviewItem> *currentPreviewItem;
@property <QLPreviewControllerDataSource> *dataSource;
@property NSInteger currentPreviewItemIndex;
@property id delegate;

+ (BOOL)canPreviewItem:(id)arg1;
+ (BOOL)canPreviewMIMEType:(id)arg1;

- (void)_addFadeAnimationToView:(id)arg1 fromAlpha:(float)arg2 toAlpha:(float)arg3 duration:(double)arg4 withCurve:(NSInteger)arg5;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_commonInit;
- (id)_currentNavigationController;
- (void)_dismissFromFullScreenWithDuration:(double)arg1;
- (id)_documentProxy;
- (void)_fireOverlayIdleTimer:(id)arg1;
- (void)_hideOverlayAnimated:(BOOL)arg1;
- (void)_hideOverlayDidEnd:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)_isInNavigationController;
- (void)_loadInternalViews;
- (void)_loadToolbarItems;
- (void)_openURL:(id)arg1 withApplicationProxy:(id)arg2;
- (id)_popOverState;
- (void)_prepareForFullScreenZoomIn;
- (void)_prepareForFullScreenZoomOut;
- (void)_prepareTransitionImageForZoomingIn:(BOOL)arg1;
- (void)_removeOverlayIdleTimer;
- (void)_resetOverlayIdleTimer;
- (void)_setClippingViewActive:(BOOL)arg1;
- (void)_setControlsOverlayVisible:(BOOL)arg1 withStatusBar:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_showOverlayAnimated:(BOOL)arg1;
- (void)_showOverlayDidEnd:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_startPresentCustomTransitionWithDuration:(double)arg1;
- (id)_titleForPreviewItem:(id)arg1;
- (void)_updateArrows;
- (void)_updateNavigationBarWithPreviewItem:(id)arg1;
- (void)_viewWillStartPresentWithTransition;
- (void)_zoomToFullScreenWithDuration:(double)arg1;
- (void)actionButtonTapped:(id)arg1;
- (BOOL)actionMenuEnabled;
- (BOOL)blockRemoteImages;
- (BOOL)canPrint;
- (id)currentPreviewItem;
- (NSInteger)currentPreviewItemIndex;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)doneButtonTapped:(id)arg1;
- (BOOL)hidesBottomBarWhenPushed;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)interactionController;
- (void)leftArrowAction:(id)arg1;
- (void)loadView;
- (NSInteger)modalTransitionStyle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)openButtonTapped:(id)arg1;
- (void)popOverStateDidDismissMenu:(id)arg1;
- (void)popOverStatePrintButtonTapped:(id)arg1;
- (void)popOverStateWillPresentDocumentMenu:(id)arg1;
- (void)popOverStateWillPresentPrintMenu:(id)arg1;
- (void)prepareForPrinting;
- (id)previewItem;
- (BOOL)previewView:(id)arg1 decidePolicyForNavigationType:(NSInteger)arg2 request:(id)arg3;
- (void)previewView:(id)arg1 didLoadItem:(id)arg2 withError:(id)arg3;
- (void)previewView:(id)arg1 willAddDisplayBundle:(id)arg2;
- (void)previewView:(id)arg1 willRemoveDisplayBundle:(id)arg2;
- (id)previewView:(id)arg1 willSendRequest:(id)arg2;
- (void)previewViewWasTapped:(id)arg1;
- (void)printButtonTapped:(id)arg1;
- (void)refreshCurrentPreviewItem;
- (void)reloadData;
- (void)rightArrowAction:(id)arg1;
- (void)setActionMenuEnabled:(BOOL)arg1;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (void)setCurrentPreviewItemIndex:(NSInteger)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreviewItem:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end