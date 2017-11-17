//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MFIMAPOperation.h>

@class NSArray, NSIndexSet, NSPointerArray;

@interface MFIMAPStoreOperation : MFIMAPOperation
{
    NSPointerArray *_uids;
    NSArray *_objectsToSet;
    NSArray *_objectsToClear;
}

@property(copy, nonatomic) NSArray *objectsToClear; // @synthesize objectsToClear=_objectsToClear;
@property(copy, nonatomic) NSArray *objectsToSet; // @synthesize objectsToSet=_objectsToSet;
@property(retain, nonatomic) NSPointerArray *uids; // @synthesize uids=_uids;
//- (void).cxx_destruct;
- (void)serializeIntoData:(id)arg1;
- (void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long *)arg2;
@property(readonly, copy, nonatomic) NSIndexSet *uidIndexSet;
- (id)_initWithObjectsToSet:(id)arg1 objectsToClear:(id)arg2 forUids:(id)arg3 inMailbox:(id)arg4;

// Remaining properties
@property(nonatomic) BOOL usesRealUids; // @dynamic usesRealUids;

@end
