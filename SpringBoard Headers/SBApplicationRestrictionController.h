//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSSet, SBApplicationDefaults;

@interface SBApplicationRestrictionController : NSObject
{
    id <SBApplicationRestrictionDataSource> _dataSource;
    NSHashTable *_observers;
    NSMutableDictionary *_tagValidityMap;
    NSMutableDictionary *_validTagsByIdentifier;
    struct MGNotificationTokenStruct *_tagsNotificationToken;
    NSMutableSet *_enabledTags;
    NSMutableDictionary *_ratingRanksByIdentifier;
    NSSet *_restrictedIdentifiers;
    SBApplicationDefaults *_applicationDefaults;
    _Bool _showInternalApps;
    _Bool _hasHideNonDefaultSystemAppsCapability;
    _Bool _showAllSystemApps;
    _Bool _canPostRestrictionState;
}

- (void).cxx_destruct;
- (void)_postRestrictionStateToObservers:(id)arg1;
- (void)_postRestrictionState;
- (void)_updateVisibilityPreferences;
- (void)_updateRestrictionsAndForcePost:(_Bool)arg1;
- (void)_updateRestrictionsForNotification;
- (void)beginPostingChanges;
- (void)noteRestrictionsMayHaveChanged;
- (void)noteVisibilityOverridesDidChange;
- (void)noteApplicationIdentifiersDidChangeWithAdded:(id)arg1 replaced:(id)arg2 removed:(id)arg3;
- (_Bool)isApplicationIdentifierRestricted:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;

@end

