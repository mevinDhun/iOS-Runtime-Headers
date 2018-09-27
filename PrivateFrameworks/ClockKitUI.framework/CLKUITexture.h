/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUITexture : NSObject {
    CLKUIAtlas * _atlas;
    void _rect;
}

@property (nonatomic, readonly) CLKUIAtlas *atlas;
@property (nonatomic, readonly) void rect;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) NSString *uuid;

+ (id)textureWithProviderDelegate:(id)arg1 uuid:(id)arg2;
+ (id)textureWithProviderDelegate:(void *)arg1 uuid:(void *)arg2 rect:(void *)arg3; // needs 3 arg types, found 2: id, id

- (void).cxx_destruct;
- (id)atlas;
- (void)dealloc;
- (id)initWithAtlas:(void *)arg1 rect:(void *)arg2; // needs 2 arg types, found 1: id
- (void)rect;
- (unsigned long long)status;
- (id)uuid;

@end