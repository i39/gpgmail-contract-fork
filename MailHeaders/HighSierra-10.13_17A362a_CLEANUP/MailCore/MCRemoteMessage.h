//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MCMessage.h>

@interface MCRemoteMessage : MCMessage
{
    unsigned long long _messageSize;
}

@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
- (BOOL)isMessageContentLocallyAvailable;
@property(nonatomic) BOOL partsHaveBeenCached;
@property(nonatomic) BOOL isPartial;
- (id)initWithSize:(unsigned long long)arg1;

@end
