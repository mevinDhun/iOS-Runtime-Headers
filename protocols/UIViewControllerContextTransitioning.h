/* Generated by RuntimeBrowser.
 */

@protocol UIViewControllerContextTransitioning <NSObject>

@required

- (void)cancelInteractiveTransition;
- (void)completeTransition:(BOOL)arg1;
- (UIView *)containerView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalFrameForViewController:(UIViewController *)arg1;
- (void)finishInteractiveTransition;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialFrameForViewController:(UIViewController *)arg1;
- (BOOL)isAnimated;
- (BOOL)isInteractive;
- (int)presentationStyle;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })targetTransform;
- (BOOL)transitionWasCancelled;
- (void)updateInteractiveTransition:(float)arg1;
- (UIViewController *)viewControllerForKey:(NSString *)arg1;
- (UIView *)viewForKey:(NSString *)arg1;

@end