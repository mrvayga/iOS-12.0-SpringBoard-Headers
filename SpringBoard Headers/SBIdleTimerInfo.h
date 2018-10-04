//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBIdleTimerProxy;

@interface SBIdleTimerInfo : NSObject
{
    id <SBIdleTimerProviding> _provider;
    id <SBIdleTimerBehaviorProviding> _behavior;
    NSString *_reason;
    SBIdleTimerProxy *_idleTimerProxy;
}

@property(retain, nonatomic) SBIdleTimerProxy *idleTimerProxy; // @synthesize idleTimerProxy=_idleTimerProxy;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) id <SBIdleTimerBehaviorProviding> behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) __weak id <SBIdleTimerProviding> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (id)initWithProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3 idleTimerProxy:(id)arg4;

@end

