//
//  file: XPCDaemonProtocol.h
//  project: LuLu (shared)
//  description: methods exported by the daemon
//
//  created by Patrick Wardle
//  copyright (c) 2018 Objective-See. All rights reserved.
//

@import Foundation;

@protocol XPCDaemonProtocol

//get preferences
-(void)getPreferences:(void (^)(NSDictionary*))reply;

//update preferences
-(void)updatePreferences:(NSDictionary*)preferences reply:(void (^)(NSDictionary*))reply;

//get rules
-(void)getRules:(void (^)(NSData*))reply;

//add rule
-(void)addRule:(NSDictionary*)info;

//delete rule
-(void)deleteRule:(NSString*)key rule:(NSString*)uuid;

//import rules
-(void)importRules:(NSData*)newRules result:(void (^)(BOOL))reply;

//cleanup rules
-(void)cleanupRules:(void (^)(NSInteger))reply;

//get list of profiles
-(void)getProfiles:(void (^)(NSMutableArray*))reply;

//add profile
-(void)addProfile:(NSString*)name preferences:(NSDictionary*)preferences;

//delete profile
-(void)deleteProfile:(NSString*)name;

//set profile
-(void)setProfile:(NSString*)name;

//uninstall
-(void)uninstall:(void (^)(BOOL))reply;

@end
