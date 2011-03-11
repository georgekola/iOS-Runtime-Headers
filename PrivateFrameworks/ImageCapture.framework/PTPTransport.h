/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPTransport : NSObject  {
    unsigned short _transportType;
    int _role;
    int _connectionStatus;
    id _delegate;
    BOOL _timedOut;
    BOOL _responseReceived;
}


- (BOOL)startInitiator;
- (BOOL)connected;
- (void)cancelTransaction:(id)arg1;
- (unsigned short)deviceStatus;
- (void)abortPendingIO;
- (BOOL)startResponder;
- (int)connectionStatus;
- (void)setResponseReceived:(BOOL)arg1;
- (BOOL)sendRequest:(id)arg1 needsData:(BOOL)arg2;
- (void)deviceReset;
- (BOOL)sendData:(id)arg1;
- (void)setTimedOut:(BOOL)arg1;
- (BOOL)timedOut;
- (id)init;
- (BOOL)sendEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stop;
- (unsigned short)transportType;
- (BOOL)sendResponse:(id)arg1;
- (int)role;

@end