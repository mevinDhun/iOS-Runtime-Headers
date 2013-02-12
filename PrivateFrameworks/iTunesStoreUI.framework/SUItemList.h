/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISItemInfoDataSource, NSDictionary, NSMutableArray;

@interface SUItemList : NSObject {
    NSMutableArray *_groups;
    NSDictionary *_hintText;
    ISItemInfoDataSource *_itemInfoDataSource;
    NSMutableArray *_items;
}

@property(retain) ISItemInfoDataSource *itemInfoDataSource;
@property(retain,readonly) NSArray *items;
@property(readonly) NSInteger numberOfSections;

- (id)_copyItemsFromPropertyList:(id)arg1;
- (NSUInteger)_globalIndexForIndexPath:(id)arg1;
- (id)_indexPathForGlobalIndex:(NSUInteger)arg1;
- (void)_loadGroupsFromItems;
- (void)dealloc;
- (id)hintTextForKey:(id)arg1;
- (id)indexPathOfItemWithIdentifier:(unsigned long long)arg1;
- (void)insertItems:(id)arg1 atIndexPath:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemInfoDataSource;
- (id)items;
- (BOOL)loadFromArray:(id)arg1;
- (NSInteger)numberOfItemsInSection:(NSInteger)arg1;
- (NSInteger)numberOfSections;
- (void)removeItemAtIndexPath:(id)arg1;
- (void)replaceItemAtIndexPath:(id)arg1 withItems:(id)arg2;
- (void)setHintText:(id)arg1;
- (void)setItemInfoDataSource:(id)arg1;
- (id)titleForSection:(NSInteger)arg1;

@end