/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKAchievementDescriptionInternal, NSString, UIImage;

@interface GKAchievementDescription : NSObject <NSCoding> {
    UIImage *_image;
    NSString *_imageURL;
    GKAchievementDescriptionInternal *_internal;
}

@property(readonly) NSString * achievedDescription;
@property(readonly) NSString * groupIdentifier;
@property(getter=isHidden,readonly) BOOL hidden;
@property(readonly) NSString * identifier;
@property(retain) UIImage * image;
@property(retain) NSString * imageURL;
@property(retain) GKAchievementDescriptionInternal * internal;
@property(readonly) int maximumPoints;
@property(getter=isReplayable,readonly) BOOL replayable;
@property(readonly) NSString * title;
@property(readonly) NSString * unachievedDescription;

+ (id)incompleteAchievementImage;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (void)loadAchievementDescriptionWithIdentifier:(id)arg1 forGame:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadAchievementDescriptionsWithCompletionHandler:(id)arg1;
+ (id)placeholderCompletedAchievementImage;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned int)hash;
- (id)image;
- (id)imageURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isEqual:(id)arg1;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setImage:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
