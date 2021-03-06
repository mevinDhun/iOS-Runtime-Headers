/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMBlueprint : RMUniquedManagedObject <RMUniquelySerializableManagedObject> {
    RMVersionVector * _cachedVersionVector;
}

@property (nonatomic, retain) NSSet *configurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSDate *expiration;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool invertUsageLimit;
@property (nonatomic) bool isDirty;
@property (nonatomic) bool isTombstoned;
@property (nonatomic, retain) RMCoreOrganization *organization;
@property (nonatomic, retain) RMBlueprintSchedule *schedule;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, readonly, copy) NSData *unmodeled_versionVector;
@property (nonatomic, retain) RMBlueprintUsageLimit *usageLimit;
@property (nonatomic, retain) NSSet *users;
@property (nonatomic, copy) RMVersionVector *versionVector;

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 fromOrganization:(id)arg3;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3 fromOrganization:(id)arg4;
+ (id)fetchRequestMatchingExpiredBlueprints;
+ (id)fetchResultsRequestsForChangesToBlueprints;
+ (id)fetchResultsRequestsForChangesToBlueprintsForUserWithDSID:(id)arg1;

- (void).cxx_destruct;
- (void)awakeFromInsert;
- (id)computeUniqueIdentifier;
- (id)declarationsWithError:(id*)arg1;
- (void)delete;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)arg1;
- (void)setVersionVector:(id)arg1;
- (void)tombstone;
- (id)unmodeled_versionVector;
- (bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)versionVector;

@end
