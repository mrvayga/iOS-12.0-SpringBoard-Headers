//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLPlatterView.h"

@interface SBDashBoardAdjunctItemView : PLPlatterView
{
    id <SBDashBoardAdjunctItemHosting> _contentHost;
    struct CGSize _sizeToMimic;
}

@property(nonatomic) __weak id <SBDashBoardAdjunctItemHosting> contentHost; // @synthesize contentHost=_contentHost;
@property(nonatomic) struct CGSize sizeToMimic; // @synthesize sizeToMimic=_sizeToMimic;
- (void).cxx_destruct;
- (unsigned long long)_optionsForMainOverlay;
- (void)_updateSizeToMimic;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithRecipe:(long long)arg1 options:(unsigned long long)arg2;

@end

