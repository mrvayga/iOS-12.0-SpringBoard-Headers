//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSwitcherWallpaperPageContentView.h"

#import "SBAppSwitcherPageContentView.h"
#import "SBAppSwitcherSnapshotImageCacheObserver.h"
#import "SBReusableView.h"

@class CAShapeLayer, NSMutableArray, NSMutableDictionary, NSString, SBAppLayout, SBAppSwitcherSettings, SBAppSwitcherSnapshotImageCache, SBAppSwitcherSnapshotLockoutViewControllerProvider, SBOrientationTransformWrapperView, SBSwitcherSnapshotImageView, UIView, UIViewController;

@interface SBAppSwitcherReusableSnapshotView : SBSwitcherWallpaperPageContentView <SBAppSwitcherSnapshotImageCacheObserver, SBReusableView, SBAppSwitcherPageContentView>
{
    SBOrientationTransformWrapperView *_firstOrientationWrapper;
    SBOrientationTransformWrapperView *_secondOrientationWrapper;
    SBSwitcherSnapshotImageView *_firstImageView;
    SBSwitcherSnapshotImageView *_secondImageView;
    UIViewController *_containerViewController;
    NSMutableDictionary *_snapshotViewStateByRole;
    NSMutableDictionary *_lockoutViewControllerByRole;
    CAShapeLayer *_medusaDividerLayer;
    UIView *_solidColorBackstopView;
    SBAppSwitcherSnapshotImageCache *_snapshotCache;
    SBAppSwitcherSnapshotLockoutViewControllerProvider *_lockoutVCProvider;
    SBAppSwitcherSettings *_settings;
    _Bool _active;
    _Bool _visible;
    _Bool _shouldUseBrightMaterial;
    _Bool _showingIconOverlayView;
    NSMutableArray *_deferredSnapshotCrossfadeQueue;
    SBAppLayout *_appLayout;
}

@property(nonatomic) _Bool shouldUseBrightMaterial; // @synthesize shouldUseBrightMaterial=_shouldUseBrightMaterial;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (void).cxx_destruct;
- (void)_removeAppLockoutOverlayForRole:(long long)arg1;
- (void)_addAppLockoutOverlayIfNecessaryForRole:(long long)arg1;
- (void)_updateContentOrientationForRole:(long long)arg1;
- (void)_updateDivider;
- (void)_updateTranslucency;
- (long long)_contentOrientationForSnapshotOrientation:(long long)arg1;
- (void)_performDeferredSnapshotUpdatesIfNecessaryForRole:(long long)arg1;
@property(readonly, nonatomic) _Bool contentRequiresGroupOpacity;
- (void)_updateToNewSnapshotImageUsingCacheEntry:(id)arg1;
- (void)_requestFreshImages;
- (struct CGRect)_frameInLayoutSpaceForRole:(long long)arg1 inAppLayout:(id)arg2 inOrientation:(long long)arg3;
- (struct CGRect)_snapshotImageFrameForCacheEntry:(id)arg1;
- (void)_updateCornerRadiusIfNecessaryForLockoutView:(id)arg1 matchingSnapshotImage:(id)arg2;
- (void)_updateCornerRadiusIfNecessaryForSnapshotImageView:(id)arg1 cacheEntry:(id)arg2;
- (void)_configureSnapshotImageView:(id)arg1 cacheEntry:(id)arg2;
- (id)_orientationWrapperForRole:(long long)arg1;
- (id)_imageViewForRole:(long long)arg1;
- (void)_setAnimatingTransition:(_Bool)arg1 forRole:(long long)arg2;
- (_Bool)_isAnimatingTransitionForRole:(long long)arg1;
- (void)_setCacheEntry:(id)arg1 forRole:(long long)arg2;
- (id)_cacheEntryForRole:(long long)arg1;
- (void)_setApplication:(id)arg1 forRole:(long long)arg2;
- (id)_applicationForRole:(long long)arg1;
- (id)_sceneHandleForRole:(long long)arg1;
- (void)_handleInstalledAppsChanged:(id)arg1;
- (void)didUpdateCacheEntry:(id)arg1;
- (void)setShowingIconOverlayView:(_Bool)arg1;
@property(nonatomic, getter=isVisible) _Bool visible; // @dynamic visible;
- (void)invalidate;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGRect)_frameForBackstopLayer;
@property(nonatomic) long long orientation;
@property(nonatomic) double cornerRadius;
@property(readonly, copy) NSString *description;
- (id)initWithSnapshotCache:(id)arg1 lockoutVCProvider:(id)arg2 containerViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

