/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKConversation, CKSummaryLabel, UIDateLabel, UIImageView, UILabel;

@interface CKConversationListCell : UITableViewCell {
    CKSummaryLabel *_backupSummaryLabel;
    CKConversation *_conversation;
    UIDateLabel *_dateLabel;
    UILabel *_fromLabel;
    UIImageView *_groupImageView;
    CKSummaryLabel *_summaryLabel;
    UIImageView *_unreadIndicatorImageView;
}

+ (float)cellHeight;
+ (id)identifier;

- (void)_createBackupSummaryLabel;
- (void)clearText;
- (void)dealloc;
- (void)didTransitionToState:(NSUInteger)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 conversation:(id)arg2;
- (void)layoutSubviews;
- (void)setConversation:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateContents;
- (void)willTransitionToState:(NSUInteger)arg1;

@end