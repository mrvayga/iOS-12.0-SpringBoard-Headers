//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBFluidSwitcherItemContainer;

@protocol SBFluidSwitcherItemContainerDelegate <NSObject>
- (long long)homeScreenInterfaceOrientation;
- (long long)switcherInterfaceOrientation;
- (double)minimumVerticalTranslationForKillingOfContainer:(SBFluidSwitcherItemContainer *)arg1;
- (void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(SBFluidSwitcherItemContainer *)arg2;
- (struct CGRect)frameForPageViewOfContainer:(SBFluidSwitcherItemContainer *)arg1 fullyPresented:(_Bool)arg2;
- (void)selectedAppLayoutOfContainer:(SBFluidSwitcherItemContainer *)arg1;
- (_Bool)canSelectAppLayoutOfContainer:(SBFluidSwitcherItemContainer *)arg1 numberOfTaps:(long long)arg2;
- (void)killAppLayoutOfContainer:(SBFluidSwitcherItemContainer *)arg1 withVelocity:(double)arg2 forReason:(long long)arg3;
- (_Bool)shouldShowIconAndLabelOfContainer:(SBFluidSwitcherItemContainer *)arg1;
- (_Bool)isAppLayoutOfContainerRemovable:(SBFluidSwitcherItemContainer *)arg1;
@end

