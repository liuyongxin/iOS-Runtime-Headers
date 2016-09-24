/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBShareResult : PBCodable <NSCopying> {
    NSData * _articleSessionId;
    int  _articleType;
    NSData * _articleViewingSessionId;
    int  _backendArticleVersion;
    NSString * _campaignId;
    NSString * _campaignType;
    int  _characterCount;
    NSString * _contentId;
    int  _contentType;
    NSString * _creativeId;
    NSString * _externalWeblinkUrl;
    NSString * _feedId;
    int  _feedType;
    NSData * _feedViewExposureId;
    NSString * _groupFeedId;
    int  _groupType;
    struct { 
        unsigned int personalizationTreatmentId : 1; 
        unsigned int articleType : 1; 
        unsigned int backendArticleVersion : 1; 
        unsigned int characterCount : 1; 
        unsigned int contentType : 1; 
        unsigned int feedType : 1; 
        unsigned int groupType : 1; 
        unsigned int publisherArticleVersion : 1; 
        unsigned int resultType : 1; 
        unsigned int shareLocation : 1; 
        unsigned int shareMethod : 1; 
        unsigned int isCoverArticle : 1; 
        unsigned int isDigitalReplicaAd : 1; 
        unsigned int isFreeArticle : 1; 
        unsigned int isGroupedArticle : 1; 
        unsigned int isNotificationArticle : 1; 
        unsigned int isPaidSubscriberToSourceChannel : 1; 
        unsigned int isUserSubscribedToFeed : 1; 
    }  _has;
    NSString * _iosActivityType;
    BOOL  _isCoverArticle;
    BOOL  _isDigitalReplicaAd;
    BOOL  _isFreeArticle;
    BOOL  _isGroupedArticle;
    BOOL  _isNotificationArticle;
    BOOL  _isPaidSubscriberToSourceChannel;
    BOOL  _isUserSubscribedToFeed;
    NSString * _language;
    NSMutableArray * _namedEntities;
    NSString * _notificationId;
    int  _personalizationTreatmentId;
    int  _publisherArticleVersion;
    NSString * _referencedArticleId;
    int  _resultType;
    NSString * _sectionHeadlineId;
    int  _shareLocation;
    int  _shareMethod;
    NSString * _sourceChannelId;
    NSString * _surfacedByChannelId;
    NSString * _surfacedBySectionId;
    NSString * _surfacedByTopicId;
}

@property (nonatomic, retain) NSData *articleSessionId;
@property (nonatomic) int articleType;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic) int backendArticleVersion;
@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic) int characterCount;
@property (nonatomic, retain) NSString *contentId;
@property (nonatomic) int contentType;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic, retain) NSString *externalWeblinkUrl;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedType;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic, retain) NSString *groupFeedId;
@property (nonatomic) int groupType;
@property (nonatomic, readonly) BOOL hasArticleSessionId;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic, readonly) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic, readonly) BOOL hasCampaignId;
@property (nonatomic, readonly) BOOL hasCampaignType;
@property (nonatomic) BOOL hasCharacterCount;
@property (nonatomic, readonly) BOOL hasContentId;
@property (nonatomic) BOOL hasContentType;
@property (nonatomic, readonly) BOOL hasCreativeId;
@property (nonatomic, readonly) BOOL hasExternalWeblinkUrl;
@property (nonatomic, readonly) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic, readonly) BOOL hasFeedViewExposureId;
@property (nonatomic, readonly) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic, readonly) BOOL hasIosActivityType;
@property (nonatomic) BOOL hasIsCoverArticle;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL hasIsFreeArticle;
@property (nonatomic) BOOL hasIsGroupedArticle;
@property (nonatomic) BOOL hasIsNotificationArticle;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic, readonly) BOOL hasLanguage;
@property (nonatomic, readonly) BOOL hasNotificationId;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic, readonly) BOOL hasReferencedArticleId;
@property (nonatomic) BOOL hasResultType;
@property (nonatomic, readonly) BOOL hasSectionHeadlineId;
@property (nonatomic) BOOL hasShareLocation;
@property (nonatomic) BOOL hasShareMethod;
@property (nonatomic, readonly) BOOL hasSourceChannelId;
@property (nonatomic, readonly) BOOL hasSurfacedByChannelId;
@property (nonatomic, readonly) BOOL hasSurfacedBySectionId;
@property (nonatomic, readonly) BOOL hasSurfacedByTopicId;
@property (nonatomic, retain) NSString *iosActivityType;
@property (nonatomic) BOOL isCoverArticle;
@property (nonatomic) BOOL isDigitalReplicaAd;
@property (nonatomic) BOOL isFreeArticle;
@property (nonatomic) BOOL isGroupedArticle;
@property (nonatomic) BOOL isNotificationArticle;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL isUserSubscribedToFeed;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSMutableArray *namedEntities;
@property (nonatomic, retain) NSString *notificationId;
@property (nonatomic) int personalizationTreatmentId;
@property (nonatomic) int publisherArticleVersion;
@property (nonatomic, retain) NSString *referencedArticleId;
@property (nonatomic) int resultType;
@property (nonatomic, retain) NSString *sectionHeadlineId;
@property (nonatomic) int shareLocation;
@property (nonatomic) int shareMethod;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *surfacedByChannelId;
@property (nonatomic, retain) NSString *surfacedBySectionId;
@property (nonatomic, retain) NSString *surfacedByTopicId;

+ (Class)namedEntitiesType;

- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (int)StringAsContentType:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (void)addNamedEntities:(id)arg1;
- (id)articleSessionId;
- (int)articleType;
- (id)articleTypeAsString:(int)arg1;
- (id)articleViewingSessionId;
- (int)backendArticleVersion;
- (id)campaignId;
- (id)campaignType;
- (int)characterCount;
- (void)clearNamedEntities;
- (id)contentId;
- (int)contentType;
- (id)contentTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalWeblinkUrl;
- (id)feedId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (id)feedViewExposureId;
- (id)groupFeedId;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (BOOL)hasArticleSessionId;
- (BOOL)hasArticleType;
- (BOOL)hasArticleViewingSessionId;
- (BOOL)hasBackendArticleVersion;
- (BOOL)hasCampaignId;
- (BOOL)hasCampaignType;
- (BOOL)hasCharacterCount;
- (BOOL)hasContentId;
- (BOOL)hasContentType;
- (BOOL)hasCreativeId;
- (BOOL)hasExternalWeblinkUrl;
- (BOOL)hasFeedId;
- (BOOL)hasFeedType;
- (BOOL)hasFeedViewExposureId;
- (BOOL)hasGroupFeedId;
- (BOOL)hasGroupType;
- (BOOL)hasIosActivityType;
- (BOOL)hasIsCoverArticle;
- (BOOL)hasIsDigitalReplicaAd;
- (BOOL)hasIsFreeArticle;
- (BOOL)hasIsGroupedArticle;
- (BOOL)hasIsNotificationArticle;
- (BOOL)hasIsPaidSubscriberToSourceChannel;
- (BOOL)hasIsUserSubscribedToFeed;
- (BOOL)hasLanguage;
- (BOOL)hasNotificationId;
- (BOOL)hasPersonalizationTreatmentId;
- (BOOL)hasPublisherArticleVersion;
- (BOOL)hasReferencedArticleId;
- (BOOL)hasResultType;
- (BOOL)hasSectionHeadlineId;
- (BOOL)hasShareLocation;
- (BOOL)hasShareMethod;
- (BOOL)hasSourceChannelId;
- (BOOL)hasSurfacedByChannelId;
- (BOOL)hasSurfacedBySectionId;
- (BOOL)hasSurfacedByTopicId;
- (unsigned int)hash;
- (id)iosActivityType;
- (BOOL)isCoverArticle;
- (BOOL)isDigitalReplicaAd;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFreeArticle;
- (BOOL)isGroupedArticle;
- (BOOL)isNotificationArticle;
- (BOOL)isPaidSubscriberToSourceChannel;
- (BOOL)isUserSubscribedToFeed;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (id)namedEntities;
- (id)namedEntitiesAtIndex:(unsigned int)arg1;
- (unsigned int)namedEntitiesCount;
- (id)notificationId;
- (int)personalizationTreatmentId;
- (int)publisherArticleVersion;
- (BOOL)readFrom:(id)arg1;
- (id)referencedArticleId;
- (int)resultType;
- (id)sectionHeadlineId;
- (void)setArticleSessionId:(id)arg1;
- (void)setArticleType:(int)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setBackendArticleVersion:(int)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setCharacterCount:(int)arg1;
- (void)setContentId:(id)arg1;
- (void)setContentType:(int)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setExternalWeblinkUrl:(id)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setGroupFeedId:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setHasArticleType:(BOOL)arg1;
- (void)setHasBackendArticleVersion:(BOOL)arg1;
- (void)setHasCharacterCount:(BOOL)arg1;
- (void)setHasContentType:(BOOL)arg1;
- (void)setHasFeedType:(BOOL)arg1;
- (void)setHasGroupType:(BOOL)arg1;
- (void)setHasIsCoverArticle:(BOOL)arg1;
- (void)setHasIsDigitalReplicaAd:(BOOL)arg1;
- (void)setHasIsFreeArticle:(BOOL)arg1;
- (void)setHasIsGroupedArticle:(BOOL)arg1;
- (void)setHasIsNotificationArticle:(BOOL)arg1;
- (void)setHasIsPaidSubscriberToSourceChannel:(BOOL)arg1;
- (void)setHasIsUserSubscribedToFeed:(BOOL)arg1;
- (void)setHasPersonalizationTreatmentId:(BOOL)arg1;
- (void)setHasPublisherArticleVersion:(BOOL)arg1;
- (void)setHasResultType:(BOOL)arg1;
- (void)setHasShareLocation:(BOOL)arg1;
- (void)setHasShareMethod:(BOOL)arg1;
- (void)setIosActivityType:(id)arg1;
- (void)setIsCoverArticle:(BOOL)arg1;
- (void)setIsDigitalReplicaAd:(BOOL)arg1;
- (void)setIsFreeArticle:(BOOL)arg1;
- (void)setIsGroupedArticle:(BOOL)arg1;
- (void)setIsNotificationArticle:(BOOL)arg1;
- (void)setIsPaidSubscriberToSourceChannel:(BOOL)arg1;
- (void)setIsUserSubscribedToFeed:(BOOL)arg1;
- (void)setLanguage:(id)arg1;
- (void)setNamedEntities:(id)arg1;
- (void)setNotificationId:(id)arg1;
- (void)setPersonalizationTreatmentId:(int)arg1;
- (void)setPublisherArticleVersion:(int)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)setResultType:(int)arg1;
- (void)setSectionHeadlineId:(id)arg1;
- (void)setShareLocation:(int)arg1;
- (void)setShareMethod:(int)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setSurfacedByChannelId:(id)arg1;
- (void)setSurfacedBySectionId:(id)arg1;
- (void)setSurfacedByTopicId:(id)arg1;
- (int)shareLocation;
- (int)shareMethod;
- (id)sourceChannelId;
- (id)surfacedByChannelId;
- (id)surfacedBySectionId;
- (id)surfacedByTopicId;
- (void)writeTo:(id)arg1;

@end