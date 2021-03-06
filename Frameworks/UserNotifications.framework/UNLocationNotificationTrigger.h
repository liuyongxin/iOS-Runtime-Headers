/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNLocationNotificationTrigger : UNNotificationTrigger {
    CLRegion * _region;
}

@property (nonatomic, readonly, copy) CLRegion *region;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithRegion:(id)arg1 repeats:(BOOL)arg2;

- (void).cxx_destruct;
- (id)_initWithRegion:(id)arg1 repeats:(BOOL)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)region;
- (BOOL)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2;

@end
