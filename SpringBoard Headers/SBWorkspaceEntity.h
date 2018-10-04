//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"
#import "SBActivationSettings.h"
#import "SBDeactivationSettings.h"
#import "SBLayoutElementDescriptor.h"

@class NSString, SBActivationSettings, SBDeactivationSettings;

@interface SBWorkspaceEntity : NSObject <NSCopying, SBActivationSettings, SBDeactivationSettings, BSDescriptionProviding, SBLayoutElementDescriptor>
{
    NSString *_identifier;
    long long _layoutRole;
    unsigned long long _layoutElementMode;
    SBActivationSettings *_activationSettings;
    SBDeactivationSettings *_deactivationSettings;
    long long __mainDisplayPreferredInterfaceOrientation;
}

+ (id)entity;
@property(nonatomic, getter=_mainDisplayPreferredInterfaceOrientation, setter=_setMainDisplayPreferredInterfaceOrientation:) long long _mainDisplayPreferredInterfaceOrientation; // @synthesize _mainDisplayPreferredInterfaceOrientation=__mainDisplayPreferredInterfaceOrientation;
@property(readonly, nonatomic) SBDeactivationSettings *deactivationSettings; // @synthesize deactivationSettings=_deactivationSettings;
@property(readonly, nonatomic) SBActivationSettings *activationSettings; // @synthesize activationSettings=_activationSettings;
@property(nonatomic) unsigned long long layoutElementMode; // @synthesize layoutElementMode=_layoutElementMode;
@property(nonatomic) long long layoutRole; // @synthesize layoutRole=_layoutRole;
- (void).cxx_destruct;
- (_Bool)hasLayoutAttributes:(unsigned long long)arg1;
- (_Bool)supportsLayoutRole:(long long)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType entityGenerator;
@property(readonly, nonatomic) Class viewControllerClass;
@property(readonly, nonatomic) unsigned long long layoutAttributes;
@property(readonly, nonatomic) unsigned long long supportedLayoutRoles;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDUnknownBlockType)_generator;
- (_Bool)_supportsLayoutRole:(long long)arg1;
@property(readonly, copy) NSString *description;
- (void)setPreferredInterfaceOrientation:(long long)arg1 onDisplayWithIdentity:(id)arg2;
- (long long)preferredInterfaceOrientationOnDisplayWithIdentity:(id)arg1;
- (_Bool)isAnalagousToEntity:(id)arg1;
@property(readonly, nonatomic) _Bool wantsExclusiveForeground;
@property(readonly, nonatomic) _Bool supportsPresentationAtAnySize;
@property(readonly, nonatomic) __weak id <SBDisplay> representedDisplay;
- (void)clearDeactivationSettings;
- (void)applyDeactivationSettings:(id)arg1;
- (id)copyDeactivationSettings;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (_Bool)boolForDeactivationSetting:(unsigned int)arg1;
- (long long)flagForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)clearActivationSettings;
- (void)applyActivationSettings:(id)arg1;
- (id)copyActivationSettings;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (_Bool)boolForActivationSetting:(unsigned int)arg1;
- (long long)flagForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;
- (id)initWithIdentifier:(id)arg1 displayChangeSettings:(id)arg2;
- (id)init;
- (id)deviceApplicationSceneEntity;
- (_Bool)isDeviceApplicationSceneEntity;
- (id)carApplicationSceneEntity;
- (_Bool)isCarApplicationSceneEntity;
- (_Bool)isAlertEntity;
@property(readonly, nonatomic) _Bool isPreviousWorkspaceEntity;
@property(readonly, nonatomic) _Bool isEmptyWorkspaceEntity;
@property(readonly, nonatomic) _Bool isHomeScreenEntity;
- (id)applicationSceneEntity;
- (_Bool)isApplicationSceneEntity;
- (_Bool)isStarkMapsTemplateUIEntity;
- (_Bool)isStarkNowPlayingEntity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

