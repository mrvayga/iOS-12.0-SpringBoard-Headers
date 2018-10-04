//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBTransaction.h"

#import "SBStartupTransition.h"

@class SBMainWorkspace, SBStartupTransitionContext;

@interface SBBaseStartupTransition : SBTransaction <SBStartupTransition>
{
    unsigned long long _destination;
    SBStartupTransitionContext *_context;
    SBMainWorkspace *_mainWorkspace;
}

@property(readonly, nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) SBStartupTransitionContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) SBMainWorkspace *mainWorkspace; // @synthesize mainWorkspace=_mainWorkspace;
- (void).cxx_destruct;
- (void)_begin;
- (void)performTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2;

@end

