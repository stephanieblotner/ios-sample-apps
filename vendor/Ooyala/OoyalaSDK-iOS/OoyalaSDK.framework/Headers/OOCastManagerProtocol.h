//
//  OOCastManager
//  OoyalaSDK
//
//  Created by Liusha Huang on 3/27/15.
//  Copyright (c) 2015 Ooyala, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
@class OOOoyalaPlayer;
@protocol OOEmbedTokenGenerator;


@protocol OOCastManagerProtocol <NSObject>

/**
 * Return YES if the OOCastManager is connected to a cast device
 */
- (BOOL)isConnectedToChromecast;

/**
 *  Return the castPlayer related to this OOCastManager
 */
- (id)getCastPlayer;

/**
 * Register the OOCastManager to ooyalaPlayer
 */
- (void)registerWithOoyalaPlayer:(OOOoyalaPlayer *)ooyalaPlayer;

/**
 * Return YES if is in castMode
 */
- (BOOL)isInCastMode;

/**
 * Enter cast mode with given embedCode, playhead, and player state
 */
- (void)enterCastModeWithEmbedCode:(NSString *)embedCode
               initialPlayheadTime:(Float64)playhead
                         isPlaying:(BOOL)isPlaying
               embedTokenGenerator:(id<OOEmbedTokenGenerator>)embedTokenGenerator;

@end
