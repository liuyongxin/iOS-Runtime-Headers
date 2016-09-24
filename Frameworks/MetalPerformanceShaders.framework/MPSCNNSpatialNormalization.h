/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSCNNSpatialNormalization : MPSCNNKernel {
    double  _alpha;
    double  _beta;
    double  _delta;
    unsigned int  _kernelHeight;
    unsigned int  _kernelWidth;
}

@property (nonatomic) double alpha;
@property (nonatomic) double beta;
@property (nonatomic) double delta;
@property (nonatomic, readonly) unsigned int kernelHeight;
@property (nonatomic, readonly) unsigned int kernelWidth;

+ (const struct MPSLibraryInfo { int x1; unsigned int x2; char *x3; struct MPSKernelInfo {} *x4; struct MPSKernelInfo {} *x5; struct MPSKernelInfo {} *x6; struct MPSKernelInfo {} *x7; struct MPSKernelInfo {} *x8; struct MPSKernelInfo {} *x9; struct MPSKernelInfo {} *x10; struct MPSKernelInfo {} *x11; struct MPSKernelInfo {} *x12; struct MPSKernelInfo {} *x13; struct MPSKernelInfo {} *x14; }*)libraryInfo;

- (float)alpha;
- (float)beta;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (float)delta;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned int)arg2 kernelHeight:(unsigned int)arg3;
- (unsigned int)kernelHeight;
- (unsigned int)kernelWidth;
- (void)setAlpha:(float)arg1;
- (void)setBeta:(float)arg1;
- (void)setDelta:(float)arg1;

@end