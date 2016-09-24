/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedDataSource : PXSectionedDataSource <PXSectionedLayoutEngineDataSourceSnapshot> {
    NSArray * _entries;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *entries;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int identifier;
@property (nonatomic, readonly) int numberOfSections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateItemIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1 usingBlock:(id /* block */)arg2;
- (void)_enumerateSectionIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1 reverseDirection:(BOOL)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateSectionIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1 usingBlock:(id /* block */)arg2;
- (struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })_firstSectionIndexPath;
- (id)entries;
- (struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })indexPathForObjectReference:(id)arg1;
- (struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })indexPathForObjectReference:(id)arg1 withHintIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg2;
- (id)init;
- (id)initWithEntries:(id)arg1;
- (id)inputForItem:(id)arg1;
- (int)numberOfItemsInSection:(int)arg1;
- (int)numberOfSections;
- (int)numberOfSubitemsInItem:(int)arg1 section:(int)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1;

@end