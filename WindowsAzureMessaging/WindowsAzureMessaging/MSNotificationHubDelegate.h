//----------------------------------------------------------------
//  Copyright (c) Microsoft Corporation. All rights reserved.
//----------------------------------------------------------------

#import <Foundation/Foundation.h>

@class MSNotificationHub;
@class MSNotificationHubMessage;

@protocol MSNotificationHubDelegate <NSObject>

@optional

/**
 * Callback method that will be called whenever a push notification is clicked
 * from notification center or a notification is received in foreground.
 *
 * @param notificationHub The instance of MSNotificationHub
 * @param message The push notification details.
 */
- (void)notificationHub:(MSNotificationHub *_Nonnull)notificationHub didReceivePushNotification:(MSNotificationHubMessage *_Nonnull)message;

- (void)notificationHub:(MSNotificationHub *_Nonnull)notificationHub didRequestAuthorization:(BOOL)granted error:(NSError *_Nullable)error;

@end
