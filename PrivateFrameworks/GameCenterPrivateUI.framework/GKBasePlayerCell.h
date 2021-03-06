/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBasePlayerCell : GKCollectionViewCell {
    GKPlayerPhotoView * _iconView;
    NSDictionary * _metricsOverrides;
    UILabel * _nameLabel;
}

@property (nonatomic, retain) GKPlayerPhotoView *iconView;
@property (nonatomic, retain) NSDictionary *metricsOverrides;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) GKPlayer *player;

+ (float)defaultRowHeight;
+ (void)initialize;
+ (id)itemHeightList;
+ (id)itemHeightListForIdiom:(int)arg1;
+ (id)padMetrics;
+ (id)phoneMetrics;
+ (BOOL)requiresConstraintBasedLayout;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRectForText;
- (BOOL)canRemoveItem;
- (void)dealloc;
- (void)didUpdateModel;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)metricsOverrides;
- (id)nameLabel;
- (id)player;
- (id)popoverSourceView;
- (void)prepareForReuse;
- (void)setIconView:(id)arg1;
- (void)setMetricsOverrides:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRepresentedItem:(id)arg1;

@end
