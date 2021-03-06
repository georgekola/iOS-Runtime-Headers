/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSMutableArray, UIImage;

@interface TLVibrationRecorderProgressView : UIProgressView {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    double _currentTimeInterval;
    double _currentVibrationComponentDidBeginTimeInterval;
    id _dotForCurrentVibrationComponent;
    } _dotInsets;
    } _dotSize;
    NSMutableArray *_dots;
    double _maximumTimeInterval;
    double _previousPauseDidBeginTimeInterval;
    UIImage *_resizableDotImage;
    int _roundedCornersCompensationDelayMode;
}

@property double currentTimeInterval;
@property int roundedCornersCompensationDelayMode;

- (double)_cappedValueForTimeInterval:(double)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForDotAtTimeInterval:(double)arg1 duration:(double)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (void)clearAllVibrationComponents;
- (double)currentTimeInterval;
- (void)dealloc;
- (id)initWithProgressViewStyle:(int)arg1 maximumTimeInterval:(double)arg2;
- (BOOL)isAccessibilityElement;
- (int)roundedCornersCompensationDelayMode;
- (void)setCurrentTimeInterval:(double)arg1;
- (void)setRoundedCornersCompensationDelayMode:(int)arg1;
- (void)vibrationComponentDidEnd;
- (void)vibrationComponentDidStart;

@end
