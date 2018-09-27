/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageSummaryView : UIView {
    STUsageTotalDeltaView * _deltaView;
    STUsageGraphView * _graphView;
    UILabel * _screenTimeLabel;
    STTopUsageItemsView * _topItemsView;
    STUsageReport * _usageReport;
    bool  _useDailyAverageLabel;
}

@property (nonatomic, readonly) STUsageTotalDeltaView *deltaView;
@property (nonatomic, readonly) STUsageGraphView *graphView;
@property (nonatomic, readonly) UILabel *screenTimeLabel;
@property (nonatomic, readonly) STTopUsageItemsView *topItemsView;
@property (nonatomic, retain) STUsageReport *usageReport;
@property (nonatomic, readonly) bool useDailyAverageLabel;

- (void).cxx_destruct;
- (id)deltaView;
- (id)graphView;
- (id)initWithDailyAverageLabel:(bool)arg1;
- (id)screenTimeLabel;
- (void)setUsageReport:(id)arg1;
- (id)topItemsView;
- (id)usageReport;
- (bool)useDailyAverageLabel;

@end