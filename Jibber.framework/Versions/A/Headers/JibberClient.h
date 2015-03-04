//
//  JibberClient.h
//  JibberFramework
//
//  Created by Matthew Cheok on 25/1/15.
//  Copyright (c) 2015 Matthew Cheok. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, JibberClientLoggingMode) {
    JibberClientLoggingModeDefault = 0,
    JibberClientLoggingModeVerbose
};

@interface JibberClient : NSObject

@property (nonatomic, assign) JibberClientLoggingMode loggingMode;

+ (instancetype)sharedInstance;

@end
