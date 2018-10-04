//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationController.h"

@class NSSet, SBCarApplicationSceneEntity, SBStarkScreenController;

@interface SBUIStarkScreenAnimationController : SBUIAnimationController
{
    SBStarkScreenController *_starkScreenController;
    _Bool _signpostEnded;
}

@property(readonly, nonatomic) SBStarkScreenController *starkScreenController; // @synthesize starkScreenController=_starkScreenController;
- (void).cxx_destruct;
- (id)__startTransactionDependencyForEntity:(id)arg1;
- (void)_cleanupAnimation;
- (void)__startAnimation;
- (_Bool)isReasonableMomentToInterrupt;
- (id)_getTransitionWindow;
- (id)_displayIdentity;
- (id)initWithTransitionContextProvider:(id)arg1 starkScreenController:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities; // @dynamic fromApplicationSceneEntities;
@property(readonly, nonatomic) SBCarApplicationSceneEntity *fromApplicationSceneEntity; // @dynamic fromApplicationSceneEntity;
@property(readonly, copy, nonatomic) NSSet *toApplicationSceneEntities; // @dynamic toApplicationSceneEntities;
@property(readonly, nonatomic) SBCarApplicationSceneEntity *toApplicationSceneEntity; // @dynamic toApplicationSceneEntity;

@end

