//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBGestureRecognizerTouchHistoryProviding.h"

@class NSMutableArray, NSString;

@interface SBTouchHistory : NSObject <SBGestureRecognizerTouchHistoryProviding>
{
    unsigned long long _depth;
    NSMutableArray *_locations;
    NSMutableArray *_timestamps;
    double _peakSpeed;
}

- (void).cxx_destruct;
- (int)touchHistoryDepthForTimeDuration:(double)arg1 forComputingDerivative:(_Bool)arg2;
- (double)peakSpeed;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (void)reset;
- (void)updateWithLocation:(struct CGPoint)arg1 timestamp:(double)arg2;
- (id)init;
- (id)initWithDepth:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

