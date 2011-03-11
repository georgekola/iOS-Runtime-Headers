/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSMutableDictionary;

@interface DAVPropFindResponse : DAVMultiStatusResponse  {
    NSMutableDictionary *categorizedProperties;
}


- (BOOL)handleResponseSubnode:(id)arg1;
- (id)_getPropertyForKey:(id)arg1;
- (long long)getContentLength;
- (id)getDisplayName;
- (BOOL)isCollection;
- (BOOL)isFolder;
- (id)ressourceType;
- (id)init;
- (void)dealloc;
- (id)creationDate;
- (id)properties;
- (int)statusCodeForKey:(id)arg1;
- (id)propertiesWithStatusCode:(int)arg1;
- (id)propertyForKey:(id)arg1;

@end