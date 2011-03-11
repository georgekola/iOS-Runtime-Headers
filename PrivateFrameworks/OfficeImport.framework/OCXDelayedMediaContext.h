/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSURL, OCPPackage;

@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext> {
    OCPPackage *mPackage;
    NSURL *mTargetLocation;
}


- (void)dealloc;
- (bool)loadDelayedNode:(id)arg1;
- (bool)saveDelayedMedia:(id)arg1 toFile:(id)arg2;
- (id)initWithTargetLocation:(id)arg1 package:(id)arg2;

@end