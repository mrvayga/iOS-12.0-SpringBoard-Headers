//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SBTouchPassThroughContainerView : UIView
{
    id <SBTouchPassThroughContainerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SBTouchPassThroughContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

