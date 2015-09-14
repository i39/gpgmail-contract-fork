/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol TabDraggingDestination <NSObject>

@optional
@property(readonly, nonatomic) BOOL wantsPeriodicTabDraggingUpdates;
- (void)tabDraggingEnded:(id)arg1;
- (void)concludeTabDragOperation:(id)arg1;
- (BOOL)performTabDragOperation:(id)arg1;
- (BOOL)prepareForTabDragOperation:(id)arg1;
- (void)tabDraggingExited:(id)arg1;
- (unsigned long long)tabDraggingUpdated:(id)arg1;
- (unsigned long long)tabDraggingEntered:(id)arg1;
@end
