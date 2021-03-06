/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestCounterRemoteProxy : NSObject <GEORequestCounterProtocol> {
    NSObject<OS_dispatch_queue> * _requestQ;
}

@property (nonatomic) BOOL countersEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)clearCounters;
- (BOOL)countersEnabled;
- (void)dealloc;
- (void)incrementAtTime:(id)arg1 app:(id)arg2 requestType:(unsigned char)arg3 result:(unsigned char)arg4;
- (void)incrementForApp:(id)arg1 requestType:(unsigned char)arg2 result:(unsigned char)arg3;
- (id)init;
- (void)readRequestsPerAppSince:(id)arg1 handler:(id /* block */)arg2;
- (void)setCountersEnabled:(BOOL)arg1;
- (void)startPowerLogSessionWithName:(id)arg1;

@end
