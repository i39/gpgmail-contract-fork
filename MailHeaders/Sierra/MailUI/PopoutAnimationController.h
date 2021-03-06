//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class CALayer, MailWindowShadowLayer, NSDictionary, NSWindow;

@interface PopoutAnimationController : NSObject
{
    CALayer *_contentLayer;	// 8 = 0x8
    CALayer *_clipLayer;	// 16 = 0x10
    CALayer *_backgroundLayer;	// 24 = 0x18
    NSWindow *_animationWindow;	// 32 = 0x20
    MailWindowShadowLayer *_shadowLayer;	// 40 = 0x28
    CALayer *_sourceBodyLayer;	// 48 = 0x30
    CALayer *_sourceHeaderLayer;	// 56 = 0x38
    CALayer *_destinationBodyLayer;	// 64 = 0x40
    CALayer *_destinationHeaderLayer;	// 72 = 0x48
    CALayer *_destinationToolbarLayer;	// 80 = 0x50
    NSDictionary *_sourceSnapshots;	// 88 = 0x58
    NSDictionary *_destinationSnapshots;	// 96 = 0x60
}

@property(nonatomic) __weak CALayer *destinationToolbarLayer; // @synthesize destinationToolbarLayer=_destinationToolbarLayer;
@property(nonatomic) __weak CALayer *destinationHeaderLayer; // @synthesize destinationHeaderLayer=_destinationHeaderLayer;
@property(nonatomic) __weak CALayer *destinationBodyLayer; // @synthesize destinationBodyLayer=_destinationBodyLayer;
@property(nonatomic) __weak CALayer *sourceHeaderLayer; // @synthesize sourceHeaderLayer=_sourceHeaderLayer;
@property(nonatomic) __weak CALayer *sourceBodyLayer; // @synthesize sourceBodyLayer=_sourceBodyLayer;
@property(nonatomic) __weak MailWindowShadowLayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) NSWindow *animationWindow; // @synthesize animationWindow=_animationWindow;
@property(nonatomic) __weak CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic) __weak CALayer *clipLayer; // @synthesize clipLayer=_clipLayer;
@property(nonatomic) __weak CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
- (void).cxx_destruct;	// IMP=0x00000001002704fa
- (void)_updateDestinationSnapshots:(id)arg1;	// IMP=0x000000010027018a
- (void)_updateSourceSnapshots:(id)arg1;	// IMP=0x000000010026ff5f
- (id)_backgroundAnimation;	// IMP=0x000000010026fe75
- (id)_toolbarAnimationWithFinalSize:(struct CGSize)arg1;	// IMP=0x000000010026fc14
- (id)_internalTransitionAnimationWithDestination:(struct CGRect)arg1 fadeOut:(BOOL)arg2;	// IMP=0x000000010026f9c9
- (id)_sizeAnimationWithStartSize:(struct CGSize)arg1 endSize:(struct CGSize)arg2;	// IMP=0x000000010026f8c0
- (id)_positionAnimationWithStartPosition:(struct CGPoint)arg1 endPosition:(struct CGPoint)arg2 percentFromStart:(double)arg3;	// IMP=0x000000010026f59c
- (id)_frameAnimationWithStart:(struct CGRect)arg1 destination:(struct CGRect)arg2;	// IMP=0x000000010026f41d
- (void)_performAnimationWithSourceGeometry:(id)arg1 destionationGeometry:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010026e9e4
- (struct CGRect)_commonScreenRectForSource:(struct CGRect)arg1 destination:(struct CGRect)arg2;	// IMP=0x000000010026e6f1
- (void)_setupLayer:(id)arg1 withGeometry:(id)arg2;	// IMP=0x000000010026e5f6
- (id)_createContentLayerWithFrame:(struct CGRect)arg1 scale:(double)arg2;	// IMP=0x000000010026ddb5
- (id)_createBackgroundLayer;	// IMP=0x000000010026d63f
- (id)_createAnimationWindow:(struct CGRect)arg1;	// IMP=0x000000010026d4d2
- (BOOL)_initializeAnimationWindowComponentsWithSource:(id)arg1 destination:(id)arg2;	// IMP=0x000000010026cc63
- (void)animateFrom:(id)arg1 to:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010026ca88
@property(retain, nonatomic) NSDictionary *destinationSnapshots; // @synthesize destinationSnapshots=_destinationSnapshots;
@property(retain, nonatomic) NSDictionary *sourceSnapshots; // @synthesize sourceSnapshots=_sourceSnapshots;

@end

