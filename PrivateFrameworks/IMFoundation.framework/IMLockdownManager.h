/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMLockdownManager : NSObject {
    BOOL _hasShownMismatchedSIM;
    BOOL _hasShownWaitingAlertThisSession;
    BOOL _isCarrierInstall;
    BOOL _isInternalInstall;
    BOOL _settingUpActivationState;
    int _state;
}

@property BOOL _hasShownMismatchedSIM;
@property BOOL _hasShownWaitingAlertThisSession;
@property BOOL _isCarrierInstall;
@property BOOL _isInternalInstall;
@property BOOL _settingUpActivationState;
@property int _state;
@property(readonly) struct __SecIdentity { }* copyIdentity;
@property(readonly) BOOL isActivated;
@property(readonly) BOOL isCarrierInstall;
@property(readonly) BOOL isInternalInstall;
@property(readonly) int lockdownState;
@property(readonly) NSString * uniqueDeviceIdentifier;

+ (id)sharedInstance;

- (void)_activationFailed;
- (BOOL)_hasShownMismatchedSIM;
- (BOOL)_hasShownWaitingAlertThisSession;
- (BOOL)_isCarrierInstall;
- (BOOL)_isInternalInstall;
- (void)_resetActivationState;
- (BOOL)_settingUpActivationState;
- (void)_setupActivationState;
- (int)_state;
- (struct __SecIdentity { }*)copyIdentity;
- (void)dealloc;
- (id)init;
- (BOOL)isActivated;
- (BOOL)isCarrierInstall;
- (BOOL)isInternalInstall;
- (int)lockdownState;
- (void)set_hasShownMismatchedSIM:(BOOL)arg1;
- (void)set_hasShownWaitingAlertThisSession:(BOOL)arg1;
- (void)set_isCarrierInstall:(BOOL)arg1;
- (void)set_isInternalInstall:(BOOL)arg1;
- (void)set_settingUpActivationState:(BOOL)arg1;
- (void)set_state:(int)arg1;
- (id)uniqueDeviceIdentifier;

@end