//
//  TraktAPIClient.h
//  ShowTracker
//
//  Created by John Bogil on 12/28/14.
//  Copyright (c) 2014 Ray Wenderlich. All rights reserved.
//  2029d96a5826ba8f7ce6366bbff9225f

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>


extern NSString * const kTraktAPIKey;
extern NSString * const kTraktBaseURLString;

@interface TraktAPIClient : AFHTTPSessionManager

+ (TraktAPIClient *)sharedClient;


- (void)getShowsForDate:(NSDate *)date
               username:(NSString *)username
           numberOfDays:(int)numberOfDays
                success:(void(^)(NSURLSessionDataTask *task, id responseObject))success
                failure:(void(^)(NSURLSessionDataTask *task, NSError *error))failure;

@end
