//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTMSpecialMailbox.h"

@interface _MTMStoredMetaMailbox : MTMSpecialMailbox
{
}

- (BOOL)_shouldSortMailboxes;	// IMP=0x000000010025a399
- (id)restoreString;	// IMP=0x000000010025a2c2
- (id)paths;	// IMP=0x000000010025a0f3
- (void)loadNextMessagesWithControllingMailbox:(id)arg1 andFetcher:(id)arg2;	// IMP=0x0000000100259d4c
- (void)_updateMessages:(id)arg1;	// IMP=0x0000000100259bd0
- (void)_loadMessages;	// IMP=0x0000000100259927

@end
