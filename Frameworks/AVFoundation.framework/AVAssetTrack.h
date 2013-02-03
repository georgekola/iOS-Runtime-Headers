/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetTrackInternal;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
    AVAssetTrackInternal *_track;
}

@property(readonly) AVAsset *asset;
@property(readonly) NSInteger trackID;

+ (id)keyPathsForValuesAffectingTimeRange;

- (id)_assetTrackInspector;
- (BOOL)_hasMultipleNonEmptyEdits;
- (id)_initWithAsset:(id)arg1 trackID:(NSInteger)arg2 trackIndex:(long)arg3;
- (id)_initWithAsset:(id)arg1 trackID:(NSInteger)arg2;
- (id)_initWithAsset:(id)arg1 trackIndex:(long)arg2;
- (id)asset;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (float)estimatedDataRate;
- (id)extendedLanguageTag;
- (void)finalize;
- (id)formatDescriptions;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (NSUInteger)hash;
- (id)init;
- (BOOL)isEnabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (BOOL)isSelfContained;
- (id)languageCode;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (NSInteger)naturalTimeScale;
- (float)nominalFrameRate;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })samplePresentationTimeForTrackTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (id)segmentForTrackTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (id)segments;
- (NSInteger)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (NSInteger)statusOfValueForKey:(id)arg1;
- (struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (long long)totalSampleDataLength;
- (NSInteger)trackID;

@end