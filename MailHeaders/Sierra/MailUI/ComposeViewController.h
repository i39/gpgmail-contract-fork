//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSViewController.h"

#import "ComposeBackEndDelegate-Protocol.h"
#import "ComposeViewControllerDelegate-Protocol.h"
//#import "ImageResizerDelegate-Protocol.h"
//#import "LoadingOverlayModalDelegate-Protocol.h"
//#import "MCActivityTarget.h"
//#import "NSSharingServiceDelegate.h"
//#import "NSTextFinderClient.h"
//#import "NSUserInterfaceValidations.h"
//#import "PopoutAnimationContentProvider.h"
//#import "TerminationHandler.h"

#import "IMAP/CDStructures.h"
#import "ComposeContext-Protocol.h"

@class ColorBackgroundView, ComposeBackEnd, ComposeStatusView, DeliveryFailure, EditingMessageWebView, EditingWebMessageController, HeadersEditor, LoadingOverlay, MCAttachment, NSArray, NSButton, NSDictionary, NSMutableArray, NSOperation, NSOperationQueue, NSStackView, NSString, NSTextField, NSTextFinder, NSView, /*NSView<NSTextFinderBarContainer>,*/ StationerySelector, WebArchive, WebViewEditor, _ControllerTitleTransformer;

@interface ComposeViewController : NSViewController <ComposeBackEndDelegate/*, ImageResizerDelegate, LoadingOverlayModalDelegate, MCActivityTarget, NSTextFinderClient, NSSharingServiceDelegate, NSUserInterfaceValidations, PopoutAnimationContentProvider, TerminationHandler*/>
{
    NSMutableArray *_imageResizers;	// 104 = 0x68
    ComposeBackEnd *_backEnd;	// 112 = 0x70
    BOOL _sendWhenFinishLoading;	// 120 = 0x78
    BOOL _isShareKitOriginated;	// 121 = 0x79
    BOOL _wantsToClose;	// 122 = 0x7a
    BOOL _isFinishedLoading;	// 123 = 0x7b
    BOOL _shouldSaveWhenClosing;	// 124 = 0x7c
    BOOL _userSavedMessage;	// 125 = 0x7d
    BOOL _isAutoSaving;	// 126 = 0x7e
    BOOL _hasIncludedAttachmentsFromOriginal;	// 127 = 0x7f
    BOOL _hasUserMadeChanges;	// 128 = 0x80
    BOOL _isBeingPreparedForSending;	// 129 = 0x81
    BOOL _userKnowsSaveFailed;	// 130 = 0x82
    ComposeStatusView *_composeStatusView;	// 136 = 0x88
    EditingMessageWebView *_composeWebView;	// 144 = 0x90
    NSStackView *_contentStack;	// 152 = 0x98
    WebViewEditor *_webViewEditor;	// 160 = 0xa0
    HeadersEditor *_headersEditor;	// 168 = 0xa8
    unsigned long long _textLengthForLastEstimatedMessageSize;	// 176 = 0xb0
    NSOperation *_savedFinishLoadingEditorOperation;	// 184 = 0xb8
    NSDictionary *_settings;	// 192 = 0xc0
    NSOperationQueue *_operationQueue;	// 200 = 0xc8
    long long _messageType;	// 208 = 0xd0
    NSDictionary *_toolbarItems;	// 216 = 0xd8
    NSView *_statusRow;	// 224 = 0xe0
    EditingWebMessageController *_webMessageController;	// 232 = 0xe8
//    id <ComposeViewControllerDelegate> _delegate;	// 240 = 0xf0
    _ControllerTitleTransformer *_titleTransformer;	// 248 = 0xf8
    DeliveryFailure *_deliveryFailure;	// 256 = 0x100
    NSArray *_unapprovedRecipients;	// 264 = 0x108
    NSString *_URLShareUUID;	// 272 = 0x110
    WebArchive *_pageWebArchive;	// 280 = 0x118
    WebArchive *_readerWebArchive;	// 288 = 0x120
    MCAttachment *_PDFAttachment;	// 296 = 0x128
    LoadingOverlay *_loadingOverlay;	// 304 = 0x130
    NSString *_userHTMLForSharingTop;	// 312 = 0x138
    NSTextFinder *_textFinder;	// 320 = 0x140
    NSView<NSTextFinderBarContainer> *_findBarContainer;	// 328 = 0x148
    StationerySelector *_stationerySelector;	// 336 = 0x150
    ColorBackgroundView *_stationeryPane;	// 344 = 0x158
    NSButton *_stationeryNameSaveButton;	// 352 = 0x160
    NSTextField *_stationeryNameTextField;	// 360 = 0x168
    NSView *_clippingView;	// 368 = 0x170
}

+ (void)_setMessageStatus:(id)arg1 onMessageID:(id)arg2;	// IMP=0x0000000100113293
+ (id)documentWebPreferencesIdentifierForRichText:(BOOL)arg1;	// IMP=0x000000010010d03e
@property(nonatomic) BOOL userKnowsSaveFailed; // @synthesize userKnowsSaveFailed=_userKnowsSaveFailed;
@property(nonatomic) BOOL isBeingPreparedForSending; // @synthesize isBeingPreparedForSending=_isBeingPreparedForSending;
@property(nonatomic) BOOL hasUserMadeChanges; // @synthesize hasUserMadeChanges=_hasUserMadeChanges;
@property(retain, nonatomic) NSView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic) __weak NSTextField *stationeryNameTextField; // @synthesize stationeryNameTextField=_stationeryNameTextField;
@property(nonatomic) __weak NSButton *stationeryNameSaveButton; // @synthesize stationeryNameSaveButton=_stationeryNameSaveButton;
@property(retain, nonatomic) ColorBackgroundView *stationeryPane; // @synthesize stationeryPane=_stationeryPane;
@property(retain, nonatomic) StationerySelector *stationerySelector; // @synthesize stationerySelector=_stationerySelector;
@property(nonatomic) BOOL hasIncludedAttachmentsFromOriginal; // @synthesize hasIncludedAttachmentsFromOriginal=_hasIncludedAttachmentsFromOriginal;
@property(nonatomic) __weak NSView<NSTextFinderBarContainer> *findBarContainer; // @synthesize findBarContainer=_findBarContainer;
@property(retain, nonatomic) NSTextFinder *textFinder; // @synthesize textFinder=_textFinder;
@property(retain, nonatomic) NSString *userHTMLForSharingTop; // @synthesize userHTMLForSharingTop=_userHTMLForSharingTop;
@property(retain, nonatomic) LoadingOverlay *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(retain, nonatomic) MCAttachment *PDFAttachment; // @synthesize PDFAttachment=_PDFAttachment;
@property(retain, nonatomic) WebArchive *readerWebArchive; // @synthesize readerWebArchive=_readerWebArchive;
@property(retain, nonatomic) WebArchive *pageWebArchive; // @synthesize pageWebArchive=_pageWebArchive;
@property(retain, nonatomic) NSString *URLShareUUID; // @synthesize URLShareUUID=_URLShareUUID;
@property(nonatomic) BOOL isAutoSaving; // @synthesize isAutoSaving=_isAutoSaving;
@property(nonatomic) BOOL userSavedMessage; // @synthesize userSavedMessage=_userSavedMessage;
@property(nonatomic) BOOL shouldSaveWhenClosing; // @synthesize shouldSaveWhenClosing=_shouldSaveWhenClosing;
@property(nonatomic) BOOL isFinishedLoading; // @synthesize isFinishedLoading=_isFinishedLoading;
@property(nonatomic) BOOL wantsToClose; // @synthesize wantsToClose=_wantsToClose;
@property(copy, nonatomic) NSArray *unapprovedRecipients; // @synthesize unapprovedRecipients=_unapprovedRecipients;
@property(nonatomic) BOOL isShareKitOriginated; // @synthesize isShareKitOriginated=_isShareKitOriginated;
@property(nonatomic) BOOL sendWhenFinishLoading; // @synthesize sendWhenFinishLoading=_sendWhenFinishLoading;
@property(retain, nonatomic) DeliveryFailure *deliveryFailure; // @synthesize deliveryFailure=_deliveryFailure;
@property(readonly, nonatomic) _ControllerTitleTransformer *titleTransformer; // @synthesize titleTransformer=_titleTransformer;
@property(nonatomic) __weak id <ComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EditingWebMessageController *webMessageController; // @synthesize webMessageController=_webMessageController;
@property(nonatomic) __weak NSView *statusRow; // @synthesize statusRow=_statusRow;
@property(copy, nonatomic) NSDictionary *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak NSOperation *savedFinishLoadingEditorOperation; // @synthesize savedFinishLoadingEditorOperation=_savedFinishLoadingEditorOperation;
@property(nonatomic) unsigned long long textLengthForLastEstimatedMessageSize; // @synthesize textLengthForLastEstimatedMessageSize=_textLengthForLastEstimatedMessageSize;
@property(retain, nonatomic) HeadersEditor *headersEditor; // @synthesize headersEditor=_headersEditor;
@property(retain, nonatomic) WebViewEditor *webViewEditor; // @synthesize webViewEditor=_webViewEditor;
@property(nonatomic) __weak NSStackView *contentStack; // @synthesize contentStack=_contentStack;
@property(retain, nonatomic) EditingMessageWebView *composeWebView; // @synthesize composeWebView=_composeWebView;
@property(retain, nonatomic) ComposeStatusView *composeStatusView; // @synthesize composeStatusView=_composeStatusView;
//- (void).cxx_destruct;	// IMP=0x000000010011e100
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;	// IMP=0x000000010011d830
- (id)dictionaryRepresentation;	// IMP=0x000000010011d63a
- (id)_bodySnapshot;	// IMP=0x000000010011d5a3
- (struct CGRect)_composeFrame;	// IMP=0x000000010011d532
- (struct CGRect)_headerFrame;	// IMP=0x000000010011d43a
- (id)getContentGeometryData;	// IMP=0x000000010011d206
- (void)getSnapshotParts:(CDUnknownBlockType)arg1;	// IMP=0x000000010011cee2
- (void)replyAllMessage:(id)arg1;	// IMP=0x000000010011ce04
- (void)replyMessage:(id)arg1;	// IMP=0x000000010011cd26
- (void)changeReplyMode:(id)arg1;	// IMP=0x000000010011cc9d
- (void)saveSaveAsStationery:(id)arg1;	// IMP=0x000000010011cbe4
- (void)cancelSaveAsStationery:(id)arg1;	// IMP=0x000000010011cb2e
- (void)controlTextDidChange:(id)arg1;	// IMP=0x000000010011ca28
- (void)saveAsStationery:(id)arg1;	// IMP=0x000000010011c0f1
- (void)loadStationery:(id)arg1;	// IMP=0x000000010011be09
- (id)currentStationery;	// IMP=0x000000010011bd8f
- (BOOL)stationeryPaneIsVisible;	// IMP=0x000000010011bccc
- (void)_animateStationerySelector:(BOOL)arg1;	// IMP=0x000000010011b83b
- (void)showOrHideStationery:(id)arg1;	// IMP=0x000000010011b70b
- (double)_animationDuration;	// IMP=0x000000010011b5f5
- (BOOL)_restoreOriginalAttachments;	// IMP=0x000000010011b216
- (void)insertOriginalAttachments:(id)arg1;	// IMP=0x000000010011b0a0
@property(readonly, getter=isEditable) BOOL editable;
- (void)didFindNonIncrementalSearchInWebView:(id)arg1 DOMRange:(id)arg2;	// IMP=0x000000010011ae35
- (id)currentlySelectedWebView;	// IMP=0x000000010011ae23
- (id)webViews;	// IMP=0x000000010011ad96
- (void)performTextFinderAction:(id)arg1;	// IMP=0x000000010011ac39
- (void)forceClose;	// IMP=0x000000010011abed
- (void)show;	// IMP=0x000000010011aba1
- (void)_addAttachmentsFromShareKit;	// IMP=0x000000010011a3cc
- (BOOL)_isReplyingFromShareKitWithFileAttachments;	// IMP=0x000000010011a310
- (id)_parsedMessageFromShareDictionary:(id)arg1;	// IMP=0x0000000100118e4e
- (void)_showURLPicker;	// IMP=0x0000000100118de4
- (void)_setupDefaultURLState;	// IMP=0x0000000100118b84
- (BOOL)_needsURLPicker;	// IMP=0x0000000100118b50
- (void)_showURLPickerIfNeeded;	// IMP=0x0000000100118b09
- (void)_validateURLPicker;	// IMP=0x00000001001187c6
- (void)_insertUserHTMLDivs;	// IMP=0x000000010011844c
- (void)_getUserHTMLForEditing;	// IMP=0x00000001001182f9
- (void)_addBaseURLToDocumentIfNeeded;	// IMP=0x00000001001181e5
- (id)_newOriginalSharingSourceURLHTMLString;	// IMP=0x00000001001180b3
- (void)_changeSharedURLToDisplayType:(long long)arg1;	// IMP=0x0000000100116ffd
- (void)refreshShareContentsForDisplayType:(long long)arg1;	// IMP=0x0000000100116f8e
- (void)URLPickerPopupChanged:(id)arg1;	// IMP=0x0000000100116eeb
- (void)setMessagePriority:(id)arg1;	// IMP=0x0000000100116e79
- (void)useInspectorBar:(id)arg1;	// IMP=0x0000000100116e04
- (void)toggleRich:(id)arg1;	// IMP=0x0000000100116b83
- (void)makePlainText:(id)arg1;	// IMP=0x0000000100116b2f
- (void)makeRichText:(id)arg1;	// IMP=0x0000000100116adc
- (void)_generateParsedMessagesToAppendForMessages:(id)arg1;	// IMP=0x00000001001168e9
- (void)_appendMessages:(id)arg1 withParsedMessages:(id)arg2;	// IMP=0x000000010011647c
- (void)appendMessageArray:(id)arg1;	// IMP=0x0000000100116369
- (void)appendMessages:(id)arg1;	// IMP=0x00000001001162e1
- (void)updateUIAfterAppleScriptModification:(id)arg1;	// IMP=0x000000010011623c
- (void)toggleCheckGrammarWithSpelling:(id)arg1;	// IMP=0x000000010011617e
- (void)changeSpellCheckingBehavior:(id)arg1;	// IMP=0x00000001001160c8
- (void)_printAsExportJob:(BOOL)arg1;	// IMP=0x0000000100115dd3
- (void)exportAsPDF:(id)arg1;	// IMP=0x0000000100115dbc
- (void)showPrintPanel:(id)arg1;	// IMP=0x0000000100115da8
- (void)setInitialFirstResponder;	// IMP=0x0000000100115d4f
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;	// IMP=0x0000000100115ce0
- (void)viewWillClose;	// IMP=0x0000000100115b79
- (BOOL)canSave;	// IMP=0x0000000100115ad3
@property(readonly, nonatomic) BOOL hasChanges;
- (void)saveDocument:(id)arg1;	// IMP=0x0000000100115889
- (void)saveMessageToDrafts:(id)arg1;	// IMP=0x000000010011583f
- (void)_setUserSavedMessageAndPostNotification:(BOOL)arg1;	// IMP=0x000000010011577f
- (void)canClose:(CDUnknownBlockType)arg1;	// IMP=0x00000001001151fd
- (void)_saveMessageDueToUserAction:(BOOL)arg1;	// IMP=0x00000001001150c3
- (void)autoSave;	// IMP=0x0000000100115075
- (void)setInsertionPointAtEnd;	// IMP=0x0000000100114f94
- (void)activityContinuationFailed;	// IMP=0x0000000100114f82
@property(nonatomic) BOOL shouldCloseWindowWhenAnimationCompletes;
- (unsigned long long)estimatedMessageSize;	// IMP=0x0000000100114b92
- (void)backEndHandedMessageToDevice:(id)arg1;	// IMP=0x0000000100114b25
- (void)backEndDidCancelMessageDeliveryForAttachmentError:(id)arg1;	// IMP=0x000000010011476c
- (void)backEnd:(id)arg1 didCancelMessageDeliveryForError:(id)arg2;	// IMP=0x00000001001146d9
- (void)backEnd:(id)arg1 didCancelMessageDeliveryForEncryptionError:(id)arg2;	// IMP=0x0000000100114577
- (void)backEnd:(id)arg1 didCancelMessageDeliveryForMissingCertificatesForRecipients:(id)arg2;	// IMP=0x00000001001143c8
- (BOOL)backEnd:(id)arg1 shouldDeliverMessage:(id)arg2;	// IMP=0x00000001001142a9
- (BOOL)backEnd:(id)arg1 shouldSaveMessage:(id)arg2;	// IMP=0x0000000100114231
- (void)backEndDidLoadInitialContent:(id)arg1;	// IMP=0x0000000100113db2
- (void)loadingOverlayDidEnd:(id)arg1 returnCode:(long long)arg2;	// IMP=0x0000000100113d78
- (void)backEnd:(id)arg1 didBeginBackgroundLoadActivity:(id)arg2;	// IMP=0x0000000100113c14
- (void)backEndDidSaveMessage:(id)arg1 result:(long long)arg2;	// IMP=0x00000001001138a0
- (void)_setMessageStatusOnOriginalMessage;	// IMP=0x00000001001134c9
- (void)backEndDidAppendMessageToOutbox:(id)arg1 result:(long long)arg2;	// IMP=0x000000010011314d
- (void)backEndDidChange:(id)arg1;	// IMP=0x0000000100112ffc
- (void)backEnd:(id)arg1 willCreateMessageWithHeaders:(id)arg2;	// IMP=0x0000000100112dfd
- (void)_showMailDropAlert:(id)arg1 forMultipleAttachments:(BOOL)arg2;	// IMP=0x0000000100112640
@property(readonly, nonatomic) BOOL canSendViaMailDrop;
- (void)encryptionStatusDidChange;	// IMP=0x000000010011246e
- (id)_newShouldDeliverMessageWithoutEncryptionAlertWithMessage:(id)arg1;	// IMP=0x0000000100112298
- (id)_newFailedToCreateMessageAlert;	// IMP=0x000000010011217f
- (id)_newSaveFailureAlert;	// IMP=0x000000010011206c
- (id)_newAppendToOutboxFailedAlert;	// IMP=0x0000000100111f5a
- (id)_newCannotSaveToOutboxAlert;	// IMP=0x0000000100111e41
- (id)_newShouldSaveAlert;	// IMP=0x0000000100111ba0
- (id)_newAlertForMalformedAddress:(id)arg1;	// IMP=0x0000000100111911
- (id)_newNoRecipientsAlert;	// IMP=0x0000000100111781
- (id)_newEmptyMessageAlert;	// IMP=0x0000000100111523
- (id)_newPendingAttachmentAlert;	// IMP=0x000000010011138f
- (void)sendMessageAfterChecking:(id)arg1;	// IMP=0x000000010010fafb
- (void)reportDeliveryFailure:(id)arg1;	// IMP=0x000000010010fa41
- (void)send:(id)arg1;	// IMP=0x000000010010f702
@property(readonly, nonatomic) BOOL sendButtonShouldBeEnabled;
- (BOOL)validateMenuItem:(id)arg1;	// IMP=0x000000010010f0ea
- (id)_firstSelectedAttachmentView;	// IMP=0x000000010010efcf
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;	// IMP=0x000000010010ee64
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;	// IMP=0x000000010010ed99
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;	// IMP=0x000000010010ec5e
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;	// IMP=0x000000010010e9ed
- (void)editVisibleHeaders:(id)arg1;	// IMP=0x000000010010e9e7
- (BOOL)validateToolbarItem:(id)arg1;	// IMP=0x000000010010e885
- (void)updateSendButtonStateInToolbar;	// IMP=0x000000010010e848
- (void)editSignatures:(id)arg1;	// IMP=0x000000010010e7d3
- (void)changeSignature:(id)arg1;	// IMP=0x000000010010e761
- (id)shareItemsForSelection;	// IMP=0x000000010010e4d5
- (void)invokeExtensionService:(id)arg1;	// IMP=0x000000010010e3a2
- (BOOL)_supportsStationery;	// IMP=0x000000010010e365
- (BOOL)validateUserInterfaceItem:(id)arg1;	// IMP=0x000000010010dc45
- (id)parsedMessageFromSettings:(id)arg1;	// IMP=0x000000010010d6ad
- (void)prepareContent;	// IMP=0x000000010010d465
- (void)_setupGrammarChecking;	// IMP=0x000000010010d393
- (void)_setupSpellChecking;	// IMP=0x000000010010d295
- (id)missingCertificatesMessageForRecipients:(id)arg1 uponDelivery:(BOOL)arg2;	// IMP=0x000000010010d05c
- (void)continueLoadingInitialContent;	// IMP=0x000000010010ceed
- (void)_finishLoadingEditor;	// IMP=0x000000010010cb17
- (void)loadInitialDocumentIntoWebView:(id)arg1;	// IMP=0x000000010010c519
- (id)_finishLoadingEditorOperation;	// IMP=0x000000010010c4a9
- (id)_loadInitialDocumentOperation;	// IMP=0x000000010010c409
- (id)_prepareContentOperation;	// IMP=0x000000010010c2e2
- (BOOL)_loadContent;	// IMP=0x000000010010bddc
@property(readonly, nonatomic) BOOL shouldDoPopOutAnimation;
- (BOOL)_attachmentCanBeResized:(id)arg1;	// IMP=0x000000010010bc7e
- (BOOL)_resizeImageAttachments:(id)arg1;	// IMP=0x000000010010b990
- (struct CGSize)_maxSizeForAttachment:(id)arg1 targetSize:(struct CGSize)arg2;	// IMP=0x000000010010b8e8
- (BOOL)_resizeAttachment:(id)arg1;	// IMP=0x000000010010b6cd
- (id)_resizerForAttachment:(id)arg1;	// IMP=0x000000010010b51a
- (void)imageResizer:(id)arg1 didFinishResizingWithResultCode:(long long)arg2;	// IMP=0x000000010010b3b7
- (id)_maxImageSizeAsString;	// IMP=0x000000010010b32f
- (struct CGSize)_selectedImageSize;	// IMP=0x000000010010b2be
- (struct CGSize)_imageSizeForTag:(long long)arg1;	// IMP=0x000000010010b27d
- (void)_hideImageStatus;	// IMP=0x000000010010b214
- (void)messageSizeDidChange:(id)arg1;	// IMP=0x000000010010b202
- (void)_saveImageSizeToDefaults;	// IMP=0x000000010010b163
- (void)imageSizePopupChanged:(id)arg1;	// IMP=0x000000010010b079
@property(readonly, nonatomic) BOOL hasPendingAttachmentReads;
- (void)_setImageSizePopupToSize:(id)arg1;	// IMP=0x000000010010ad9b
- (void)_showImageStatus;	// IMP=0x000000010010acb4
- (void)_updateImageSizePopup;	// IMP=0x000000010010aa0f
- (unsigned long long)_attachmentsContainScalableImage:(id)arg1 scalables:(id)arg2;	// IMP=0x000000010010a7bd
- (unsigned long long)_isAttachmentScalable:(id)arg1;	// IMP=0x000000010010a5cc
- (id)mailAttachmentsAdded:(id)arg1;	// IMP=0x0000000100109fee
- (void)_attachmentDidFinishReading;	// IMP=0x0000000100109e87
- (void)mailAttachmentsDeleted:(id)arg1;	// IMP=0x0000000100109e31
- (void)_mailAttachmentsDeleted;	// IMP=0x0000000100109d7d
@property(readonly, nonatomic) unsigned long long encryptionOverhead;
- (unsigned long long)_signatureOverhead;	// IMP=0x0000000100109d1d
- (unsigned long long)_textLengthEstimate;	// IMP=0x0000000100109c23
- (BOOL)_isResizingImages;	// IMP=0x0000000100109bf3
- (void)webViewDidChange:(id)arg1;	// IMP=0x0000000100109b94
- (void)updateAttachmentStatus;	// IMP=0x00000001001098bb
- (void)attachFilesAtEnd:(id)arg1;	// IMP=0x000000010010981d
- (void)alwaysAttachFilesAtEnd:(id)arg1;	// IMP=0x000000010010980b
- (void)_setSendWindowsFriendlyAttachments:(BOOL)arg1;	// IMP=0x0000000100109797
- (void)sendWindowsFriendlyAttachments:(id)arg1;	// IMP=0x000000010010975d
- (void)insertFile:(id)arg1;	// IMP=0x00000001001091df
- (id)webMessageDocument;	// IMP=0x000000010010918f
- (void)_hideStatusBar;	// IMP=0x00000001001090d1
- (void)_showStatusBar;	// IMP=0x0000000100109044
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100108f5f
- (long long)type;	// IMP=0x0000000100108f1b
@property(retain, nonatomic) ComposeBackEnd *backEnd;
- (void)viewDidLoad;	// IMP=0x0000000100108c27
- (void)showWithContext:(id)arg1;	// IMP=0x0000000100108a99
@property(retain) id <ComposeContext> representedObject;
- (void)dealloc;	// IMP=0x0000000100108735
- (void)_composeViewControllerCommonInit;	// IMP=0x000000010010863d
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001001085cb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100108586

// Remaining properties
@property(readonly) BOOL allowsMultipleSelection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) struct _NSRange firstSelectedRange;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly, getter=isSelectable) BOOL selectable;
@property(copy) NSArray *selectedRanges;
@property(readonly) NSString *string;
@property(readonly) Class superclass;
@property(readonly, copy) NSArray *visibleCharacterRanges;

@end

