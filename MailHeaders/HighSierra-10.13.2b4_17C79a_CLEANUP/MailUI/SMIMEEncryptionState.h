//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSDictionary;

@interface SMIMEEncryptionState : NSObject
{
    BOOL _gatheringCertificates;
    NSDictionary *_encryptionCertificates;
}

@property(readonly, nonatomic) NSDictionary *encryptionCertificates; // @synthesize encryptionCertificates=_encryptionCertificates;
@property(readonly, nonatomic, getter=isGatheringCertificates) BOOL gatheringCertificates; // @synthesize gatheringCertificates=_gatheringCertificates;
//- (void).cxx_destruct;
- (id)initWithGatheringCertificates:(BOOL)arg1 encryptionCertificates:(id)arg2;

@end

