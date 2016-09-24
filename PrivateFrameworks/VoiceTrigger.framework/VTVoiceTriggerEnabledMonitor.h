/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTVoiceTriggerEnabledMonitor : VTEventMonitor {
    BOOL  _isVoiceTriggerEnabled;
    int  _notifyToken;
}

+ (id)sharedInstance;

- (BOOL)_checkVoiceTriggerEnabled;
- (void)_didReceiveVoiceTriggerSettingChanged:(BOOL)arg1;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(BOOL)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (BOOL)isEnabled;

@end