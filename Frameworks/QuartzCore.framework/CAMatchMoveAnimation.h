/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSString, CALayer;

@interface CAMatchMoveAnimation : CAAnimation  {
}

@property(retain) CALayer * sourceLayer;
@property(copy) NSString * keyPath;
@property BOOL targetsSuperlayer;
@property(copy) NSArray * sourcePoints;
@property BOOL appliesX;
@property BOOL appliesY;
@property BOOL appliesScale;
@property BOOL appliesRotation;
@property(getter=isAdditive) BOOL additive;

+ (id)defaultValueForKey:(id)arg1;

- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)appliesRotation;
- (id)sourceLayer;
- (void)setSourceLayer:(id)arg1;
- (id)sourcePoints;
- (void)setSourcePoints:(id)arg1;
- (BOOL)targetsSuperlayer;
- (void)setTargetsSuperlayer:(BOOL)arg1;
- (BOOL)appliesX;
- (void)setAppliesX:(BOOL)arg1;
- (BOOL)appliesY;
- (void)setAppliesY:(BOOL)arg1;
- (BOOL)appliesScale;
- (void)setAppliesScale:(BOOL)arg1;
- (void)setAppliesRotation:(BOOL)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Timing {} *x4; struct Vector {} *x5; void *x6; unsigned int x7; unsigned int x8; }*)_copyRenderAnimationForLayer:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (id)keyPath;
- (BOOL)isAdditive;
- (void)setAdditive:(BOOL)arg1;

@end