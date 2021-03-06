/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDebuggingZoomViewController : UIViewController <UIDebuggingInformationViewController, UIDebuggingZoomDelegate> {
    unsigned int  _currentDirection;
    UISegmentedControl * _directionSegmentedControl;
    UILabel * _distanceLabel;
    NSObject<OS_dispatch_group> * _group;
    struct CGImage { } * _image;
    UILabel * _label;
    UIView * _lastViewSeen;
    UIDebuggingZoomLineView * _lineView;
    UIDebuggingZoomLoupeView * _loupe;
    UIPanGestureRecognizer * _pan;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _useViewForEdges;
}

@property (nonatomic) unsigned int currentDirection;
@property (nonatomic, retain) UISegmentedControl *directionSegmentedControl;
@property (nonatomic, retain) UILabel *distanceLabel;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;
@property (nonatomic) struct CGImage { }*image;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UIView *lastViewSeen;
@property (nonatomic, retain) UIDebuggingZoomLineView *lineView;
@property (nonatomic, retain) UIDebuggingZoomLoupeView *loupe;
@property (nonatomic, retain) UIPanGestureRecognizer *pan;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL useViewForEdges;

- (void).cxx_destruct;
- (unsigned int)currentDirection;
- (void)dealloc;
- (id)directionSegmentedControl;
- (id)distanceLabel;
- (id)drawLinesAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)drawViewLinesAtPoint:(struct CGPoint { float x1; float x2; })arg1 forView:(id)arg2;
- (id)group;
- (struct CGImage { }*)image;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)label;
- (id)lastViewSeen;
- (id)lineView;
- (id)loupe;
- (struct CGImage { }*)newCaptureSnapshotAtRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg2 window:(id)arg3;
- (id)pan;
- (id)queue;
- (void)setCurrentDirection:(unsigned int)arg1;
- (void)setDirectionSegmentedControl:(id)arg1;
- (void)setDistanceLabel:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (void)setLabel:(id)arg1;
- (void)setLastViewSeen:(id)arg1;
- (void)setLineView:(id)arg1;
- (void)setLoupe:(id)arg1;
- (void)setPan:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUseViewForEdges:(BOOL)arg1;
- (void)toggleDirection:(id)arg1;
- (void)toggleMeasuring:(id)arg1;
- (void)toggleMode:(id)arg1;
- (void)updateGesture:(id)arg1;
- (BOOL)useViewForEdges;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end
