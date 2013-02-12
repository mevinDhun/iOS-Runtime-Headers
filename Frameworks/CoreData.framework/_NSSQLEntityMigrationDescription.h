/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityMapping, NSMutableArray, NSMutableDictionary, NSSQLEntity;

@interface _NSSQLEntityMigrationDescription : NSObject {
    NSMutableArray *_addedManyToManys;
    NSSQLEntity *_dstEntity;
    NSEntityMapping *_entityMapping;
    NSMutableDictionary *_joinedEntitiesByForeignKeyColumn;
    NSMutableDictionary *_mappingsByName;
    NSInteger _migrationType;
    NSMutableArray *_pendingTransforms;
    NSMutableArray *_processedTransforms;
    NSMutableArray *_removedManyToManys;
    NSMutableDictionary *_sqlValuesByColumnName;
    NSSQLEntity *_srcEntity;
    NSMutableArray *_transformedManyToManys;
}

@property(readonly) NSSQLEntity *destinationEntity;
@property(readonly) NSEntityMapping *entityMapping;
@property(readonly) NSSQLEntity *sourceEntity;
@property(readonly) NSInteger migrationType;

- (void)_configureJoinWithEntity:(id)arg1 foreignKeyColumn:(id)arg2;
- (void)_generateSQLValueMappingsWithMigrationContext:(struct _NSSQLMigrationContext { id x1; })arg1;
- (id)_newJoinTableAliasForEntity:(id)arg1 foreignKeyColumn:(id)arg2;
- (void)_populateSQLValuesByPropertyFromTransforms:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)_populateSQLValuesForSourceToOne:(id)arg1 foreignKeyColumn:(id)arg2 entityKeyColumn:(id)arg3;
- (void)_populateSQLValuesForVirtualToOnesWithMigrationContext:(struct _NSSQLMigrationContext { id x1; })arg1;
- (id)_unmappedRelationshipForFormerlyVirtualToOne:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)addedManyToManys;
- (void)dealloc;
- (id)destinationEntity;
- (id)entityMapping;
- (id)initWithEntityMapping:(id)arg1 sourceEntity:(id)arg2 destinationEntity:(id)arg3;
- (id)joinEntitiesByForeignKeyColumn;
- (id)mappingsByName;
- (NSInteger)migrationType;
- (id)nextPropertyTransform;
- (id)removedManyToManys;
- (id)sourceEntity;
- (id)sqlValueForColumnName:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)transformedManyToManys;

@end