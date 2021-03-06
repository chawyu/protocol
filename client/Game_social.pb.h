// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class answer_friend;
@class answer_friendBuilder;
@class answer_friend_ack;
@class answer_friend_ackBuilder;
@class apply_friend;
@class apply_friendBuilder;
@class apply_friend_ack;
@class apply_friend_ackBuilder;
@class chat_private;
@class chat_privateBuilder;
@class chat_private_ack;
@class chat_private_ackBuilder;
@class friend_info;
@class friend_infoBuilder;
@class notify_answer_friend;
@class notify_answer_friendBuilder;
@class notify_apply_friend;
@class notify_apply_friendBuilder;
@class notify_chat_private;
@class notify_chat_privateBuilder;
@class player_info;
@class player_infoBuilder;



@interface GameSocialRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define player_info_pid @"pid"
#define player_info_name @"name"
#define player_info_head_url @"headUrl"
#define player_info_sex @"sex"
@interface player_info : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasPid_:1;
  BOOL hasName_:1;
  BOOL hasHeadUrl_:1;
  BOOL hasSex_:1;
  NSString* pid;
  NSString* name;
  NSString* headUrl;
  UInt32 sex;
}
- (BOOL) hasPid;
- (BOOL) hasName;
- (BOOL) hasHeadUrl;
- (BOOL) hasSex;
@property (readonly, strong) NSString* pid;
@property (readonly, strong) NSString* name;
@property (readonly, strong) NSString* headUrl;
@property (readonly) UInt32 sex;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (player_infoBuilder*) builder;
+ (player_infoBuilder*) builder;
+ (player_infoBuilder*) builderWithPrototype:(player_info*) prototype;
- (player_infoBuilder*) toBuilder;

+ (player_info*) parseFromData:(NSData*) data;
+ (player_info*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (player_info*) parseFromInputStream:(NSInputStream*) input;
+ (player_info*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (player_info*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (player_info*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface player_infoBuilder : PBGeneratedMessageBuilder {
@private
  player_info* resultPlayerInfo;
}

- (player_info*) defaultInstance;

- (player_infoBuilder*) clear;
- (player_infoBuilder*) clone;

- (player_info*) build;
- (player_info*) buildPartial;

- (player_infoBuilder*) mergeFrom:(player_info*) other;
- (player_infoBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (player_infoBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasPid;
- (NSString*) pid;
- (player_infoBuilder*) setPid:(NSString*) value;
- (player_infoBuilder*) clearPid;

- (BOOL) hasName;
- (NSString*) name;
- (player_infoBuilder*) setName:(NSString*) value;
- (player_infoBuilder*) clearName;

- (BOOL) hasHeadUrl;
- (NSString*) headUrl;
- (player_infoBuilder*) setHeadUrl:(NSString*) value;
- (player_infoBuilder*) clearHeadUrl;

- (BOOL) hasSex;
- (UInt32) sex;
- (player_infoBuilder*) setSex:(UInt32) value;
- (player_infoBuilder*) clearSex;
@end

#define apply_friend_fid @"fid"
#define apply_friend_msg @"msg"
@interface apply_friend : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasFid_:1;
  BOOL hasMsg_:1;
  NSString* fid;
  NSString* msg;
}
- (BOOL) hasFid;
- (BOOL) hasMsg;
@property (readonly, strong) NSString* fid;
@property (readonly, strong) NSString* msg;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (apply_friendBuilder*) builder;
+ (apply_friendBuilder*) builder;
+ (apply_friendBuilder*) builderWithPrototype:(apply_friend*) prototype;
- (apply_friendBuilder*) toBuilder;

+ (apply_friend*) parseFromData:(NSData*) data;
+ (apply_friend*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (apply_friend*) parseFromInputStream:(NSInputStream*) input;
+ (apply_friend*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (apply_friend*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (apply_friend*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface apply_friendBuilder : PBGeneratedMessageBuilder {
@private
  apply_friend* resultApplyFriend;
}

- (apply_friend*) defaultInstance;

- (apply_friendBuilder*) clear;
- (apply_friendBuilder*) clone;

- (apply_friend*) build;
- (apply_friend*) buildPartial;

- (apply_friendBuilder*) mergeFrom:(apply_friend*) other;
- (apply_friendBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (apply_friendBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasFid;
- (NSString*) fid;
- (apply_friendBuilder*) setFid:(NSString*) value;
- (apply_friendBuilder*) clearFid;

- (BOOL) hasMsg;
- (NSString*) msg;
- (apply_friendBuilder*) setMsg:(NSString*) value;
- (apply_friendBuilder*) clearMsg;
@end

#define apply_friend_ack_code @"code"
#define apply_friend_ack_code_msg @"codeMsg"
@interface apply_friend_ack : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasCodeMsg_:1;
  BOOL hasCode_:1;
  NSString* codeMsg;
  UInt32 code;
}
- (BOOL) hasCode;
- (BOOL) hasCodeMsg;
@property (readonly) UInt32 code;
@property (readonly, strong) NSString* codeMsg;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (apply_friend_ackBuilder*) builder;
+ (apply_friend_ackBuilder*) builder;
+ (apply_friend_ackBuilder*) builderWithPrototype:(apply_friend_ack*) prototype;
- (apply_friend_ackBuilder*) toBuilder;

+ (apply_friend_ack*) parseFromData:(NSData*) data;
+ (apply_friend_ack*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (apply_friend_ack*) parseFromInputStream:(NSInputStream*) input;
+ (apply_friend_ack*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (apply_friend_ack*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (apply_friend_ack*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface apply_friend_ackBuilder : PBGeneratedMessageBuilder {
@private
  apply_friend_ack* resultApplyFriendAck;
}

- (apply_friend_ack*) defaultInstance;

- (apply_friend_ackBuilder*) clear;
- (apply_friend_ackBuilder*) clone;

- (apply_friend_ack*) build;
- (apply_friend_ack*) buildPartial;

- (apply_friend_ackBuilder*) mergeFrom:(apply_friend_ack*) other;
- (apply_friend_ackBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (apply_friend_ackBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasCode;
- (UInt32) code;
- (apply_friend_ackBuilder*) setCode:(UInt32) value;
- (apply_friend_ackBuilder*) clearCode;

- (BOOL) hasCodeMsg;
- (NSString*) codeMsg;
- (apply_friend_ackBuilder*) setCodeMsg:(NSString*) value;
- (apply_friend_ackBuilder*) clearCodeMsg;
@end

#define notify_apply_friend_apply_id @"applyId"
#define notify_apply_friend_name @"name"
#define notify_apply_friend_img_url @"imgUrl"
#define notify_apply_friend_msg @"msg"
@interface notify_apply_friend : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasApplyId_:1;
  BOOL hasName_:1;
  BOOL hasImgUrl_:1;
  BOOL hasMsg_:1;
  NSString* applyId;
  NSString* name;
  NSString* imgUrl;
  NSString* msg;
}
- (BOOL) hasApplyId;
- (BOOL) hasName;
- (BOOL) hasImgUrl;
- (BOOL) hasMsg;
@property (readonly, strong) NSString* applyId;
@property (readonly, strong) NSString* name;
@property (readonly, strong) NSString* imgUrl;
@property (readonly, strong) NSString* msg;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (notify_apply_friendBuilder*) builder;
+ (notify_apply_friendBuilder*) builder;
+ (notify_apply_friendBuilder*) builderWithPrototype:(notify_apply_friend*) prototype;
- (notify_apply_friendBuilder*) toBuilder;

+ (notify_apply_friend*) parseFromData:(NSData*) data;
+ (notify_apply_friend*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (notify_apply_friend*) parseFromInputStream:(NSInputStream*) input;
+ (notify_apply_friend*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (notify_apply_friend*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (notify_apply_friend*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface notify_apply_friendBuilder : PBGeneratedMessageBuilder {
@private
  notify_apply_friend* resultNotifyApplyFriend;
}

- (notify_apply_friend*) defaultInstance;

- (notify_apply_friendBuilder*) clear;
- (notify_apply_friendBuilder*) clone;

- (notify_apply_friend*) build;
- (notify_apply_friend*) buildPartial;

- (notify_apply_friendBuilder*) mergeFrom:(notify_apply_friend*) other;
- (notify_apply_friendBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (notify_apply_friendBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasApplyId;
- (NSString*) applyId;
- (notify_apply_friendBuilder*) setApplyId:(NSString*) value;
- (notify_apply_friendBuilder*) clearApplyId;

- (BOOL) hasName;
- (NSString*) name;
- (notify_apply_friendBuilder*) setName:(NSString*) value;
- (notify_apply_friendBuilder*) clearName;

- (BOOL) hasImgUrl;
- (NSString*) imgUrl;
- (notify_apply_friendBuilder*) setImgUrl:(NSString*) value;
- (notify_apply_friendBuilder*) clearImgUrl;

- (BOOL) hasMsg;
- (NSString*) msg;
- (notify_apply_friendBuilder*) setMsg:(NSString*) value;
- (notify_apply_friendBuilder*) clearMsg;
@end

#define notify_answer_friend_pid @"pid"
#define notify_answer_friend_answer @"answer"
#define notify_answer_friend_msg @"msg"
@interface notify_answer_friend : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasPid_:1;
  BOOL hasMsg_:1;
  BOOL hasAnswer_:1;
  NSString* pid;
  NSString* msg;
  UInt32 answer;
}
- (BOOL) hasPid;
- (BOOL) hasAnswer;
- (BOOL) hasMsg;
@property (readonly, strong) NSString* pid;
@property (readonly) UInt32 answer;
@property (readonly, strong) NSString* msg;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (notify_answer_friendBuilder*) builder;
+ (notify_answer_friendBuilder*) builder;
+ (notify_answer_friendBuilder*) builderWithPrototype:(notify_answer_friend*) prototype;
- (notify_answer_friendBuilder*) toBuilder;

+ (notify_answer_friend*) parseFromData:(NSData*) data;
+ (notify_answer_friend*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (notify_answer_friend*) parseFromInputStream:(NSInputStream*) input;
+ (notify_answer_friend*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (notify_answer_friend*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (notify_answer_friend*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface notify_answer_friendBuilder : PBGeneratedMessageBuilder {
@private
  notify_answer_friend* resultNotifyAnswerFriend;
}

- (notify_answer_friend*) defaultInstance;

- (notify_answer_friendBuilder*) clear;
- (notify_answer_friendBuilder*) clone;

- (notify_answer_friend*) build;
- (notify_answer_friend*) buildPartial;

- (notify_answer_friendBuilder*) mergeFrom:(notify_answer_friend*) other;
- (notify_answer_friendBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (notify_answer_friendBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasPid;
- (NSString*) pid;
- (notify_answer_friendBuilder*) setPid:(NSString*) value;
- (notify_answer_friendBuilder*) clearPid;

- (BOOL) hasAnswer;
- (UInt32) answer;
- (notify_answer_friendBuilder*) setAnswer:(UInt32) value;
- (notify_answer_friendBuilder*) clearAnswer;

- (BOOL) hasMsg;
- (NSString*) msg;
- (notify_answer_friendBuilder*) setMsg:(NSString*) value;
- (notify_answer_friendBuilder*) clearMsg;
@end

#define answer_friend_apply_id @"applyId"
#define answer_friend_answer @"answer"
#define answer_friend_msg @"msg"
@interface answer_friend : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasApplyId_:1;
  BOOL hasMsg_:1;
  BOOL hasAnswer_:1;
  NSString* applyId;
  NSString* msg;
  UInt32 answer;
}
- (BOOL) hasApplyId;
- (BOOL) hasAnswer;
- (BOOL) hasMsg;
@property (readonly, strong) NSString* applyId;
@property (readonly) UInt32 answer;
@property (readonly, strong) NSString* msg;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (answer_friendBuilder*) builder;
+ (answer_friendBuilder*) builder;
+ (answer_friendBuilder*) builderWithPrototype:(answer_friend*) prototype;
- (answer_friendBuilder*) toBuilder;

+ (answer_friend*) parseFromData:(NSData*) data;
+ (answer_friend*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (answer_friend*) parseFromInputStream:(NSInputStream*) input;
+ (answer_friend*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (answer_friend*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (answer_friend*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface answer_friendBuilder : PBGeneratedMessageBuilder {
@private
  answer_friend* resultAnswerFriend;
}

- (answer_friend*) defaultInstance;

- (answer_friendBuilder*) clear;
- (answer_friendBuilder*) clone;

- (answer_friend*) build;
- (answer_friend*) buildPartial;

- (answer_friendBuilder*) mergeFrom:(answer_friend*) other;
- (answer_friendBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (answer_friendBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasApplyId;
- (NSString*) applyId;
- (answer_friendBuilder*) setApplyId:(NSString*) value;
- (answer_friendBuilder*) clearApplyId;

- (BOOL) hasAnswer;
- (UInt32) answer;
- (answer_friendBuilder*) setAnswer:(UInt32) value;
- (answer_friendBuilder*) clearAnswer;

- (BOOL) hasMsg;
- (NSString*) msg;
- (answer_friendBuilder*) setMsg:(NSString*) value;
- (answer_friendBuilder*) clearMsg;
@end

#define answer_friend_ack_apply_id @"applyId"
#define answer_friend_ack_answer @"answer"
#define answer_friend_ack_code @"code"
#define answer_friend_ack_code_msg @"codeMsg"
@interface answer_friend_ack : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasApplyId_:1;
  BOOL hasCodeMsg_:1;
  BOOL hasAnswer_:1;
  BOOL hasCode_:1;
  NSString* applyId;
  NSString* codeMsg;
  UInt32 answer;
  UInt32 code;
}
- (BOOL) hasApplyId;
- (BOOL) hasAnswer;
- (BOOL) hasCode;
- (BOOL) hasCodeMsg;
@property (readonly, strong) NSString* applyId;
@property (readonly) UInt32 answer;
@property (readonly) UInt32 code;
@property (readonly, strong) NSString* codeMsg;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (answer_friend_ackBuilder*) builder;
+ (answer_friend_ackBuilder*) builder;
+ (answer_friend_ackBuilder*) builderWithPrototype:(answer_friend_ack*) prototype;
- (answer_friend_ackBuilder*) toBuilder;

+ (answer_friend_ack*) parseFromData:(NSData*) data;
+ (answer_friend_ack*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (answer_friend_ack*) parseFromInputStream:(NSInputStream*) input;
+ (answer_friend_ack*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (answer_friend_ack*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (answer_friend_ack*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface answer_friend_ackBuilder : PBGeneratedMessageBuilder {
@private
  answer_friend_ack* resultAnswerFriendAck;
}

- (answer_friend_ack*) defaultInstance;

- (answer_friend_ackBuilder*) clear;
- (answer_friend_ackBuilder*) clone;

- (answer_friend_ack*) build;
- (answer_friend_ack*) buildPartial;

- (answer_friend_ackBuilder*) mergeFrom:(answer_friend_ack*) other;
- (answer_friend_ackBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (answer_friend_ackBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasApplyId;
- (NSString*) applyId;
- (answer_friend_ackBuilder*) setApplyId:(NSString*) value;
- (answer_friend_ackBuilder*) clearApplyId;

- (BOOL) hasAnswer;
- (UInt32) answer;
- (answer_friend_ackBuilder*) setAnswer:(UInt32) value;
- (answer_friend_ackBuilder*) clearAnswer;

- (BOOL) hasCode;
- (UInt32) code;
- (answer_friend_ackBuilder*) setCode:(UInt32) value;
- (answer_friend_ackBuilder*) clearCode;

- (BOOL) hasCodeMsg;
- (NSString*) codeMsg;
- (answer_friend_ackBuilder*) setCodeMsg:(NSString*) value;
- (answer_friend_ackBuilder*) clearCodeMsg;
@end

#define friend_info_friend_data @"friendData"
@interface friend_info : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  NSMutableArray * friendDataArray;
}
@property (readonly, strong) NSArray<player_info*> * friendData;
- (player_info*)friendDataAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (friend_infoBuilder*) builder;
+ (friend_infoBuilder*) builder;
+ (friend_infoBuilder*) builderWithPrototype:(friend_info*) prototype;
- (friend_infoBuilder*) toBuilder;

+ (friend_info*) parseFromData:(NSData*) data;
+ (friend_info*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (friend_info*) parseFromInputStream:(NSInputStream*) input;
+ (friend_info*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (friend_info*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (friend_info*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface friend_infoBuilder : PBGeneratedMessageBuilder {
@private
  friend_info* resultFriendInfo;
}

- (friend_info*) defaultInstance;

- (friend_infoBuilder*) clear;
- (friend_infoBuilder*) clone;

- (friend_info*) build;
- (friend_info*) buildPartial;

- (friend_infoBuilder*) mergeFrom:(friend_info*) other;
- (friend_infoBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (friend_infoBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (NSMutableArray<player_info*> *)friendData;
- (player_info*)friendDataAtIndex:(NSUInteger)index;
- (friend_infoBuilder *)addFriendData:(player_info*)value;
- (friend_infoBuilder *)setFriendDataArray:(NSArray<player_info*> *)array;
- (friend_infoBuilder *)clearFriendData;
@end

#define chat_private_pid @"pid"
#define chat_private_msg @"msg"
@interface chat_private : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasPid_:1;
  BOOL hasMsg_:1;
  NSString* pid;
  NSString* msg;
}
- (BOOL) hasPid;
- (BOOL) hasMsg;
@property (readonly, strong) NSString* pid;
@property (readonly, strong) NSString* msg;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (chat_privateBuilder*) builder;
+ (chat_privateBuilder*) builder;
+ (chat_privateBuilder*) builderWithPrototype:(chat_private*) prototype;
- (chat_privateBuilder*) toBuilder;

+ (chat_private*) parseFromData:(NSData*) data;
+ (chat_private*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (chat_private*) parseFromInputStream:(NSInputStream*) input;
+ (chat_private*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (chat_private*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (chat_private*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface chat_privateBuilder : PBGeneratedMessageBuilder {
@private
  chat_private* resultChatPrivate;
}

- (chat_private*) defaultInstance;

- (chat_privateBuilder*) clear;
- (chat_privateBuilder*) clone;

- (chat_private*) build;
- (chat_private*) buildPartial;

- (chat_privateBuilder*) mergeFrom:(chat_private*) other;
- (chat_privateBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (chat_privateBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasPid;
- (NSString*) pid;
- (chat_privateBuilder*) setPid:(NSString*) value;
- (chat_privateBuilder*) clearPid;

- (BOOL) hasMsg;
- (NSString*) msg;
- (chat_privateBuilder*) setMsg:(NSString*) value;
- (chat_privateBuilder*) clearMsg;
@end

#define notify_chat_private_info @"info"
#define notify_chat_private_msg @"msg"
@interface notify_chat_private : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasMsg_:1;
  BOOL hasInfo_:1;
  NSString* msg;
  player_info* info;
}
- (BOOL) hasInfo;
- (BOOL) hasMsg;
@property (readonly, strong) player_info* info;
@property (readonly, strong) NSString* msg;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (notify_chat_privateBuilder*) builder;
+ (notify_chat_privateBuilder*) builder;
+ (notify_chat_privateBuilder*) builderWithPrototype:(notify_chat_private*) prototype;
- (notify_chat_privateBuilder*) toBuilder;

+ (notify_chat_private*) parseFromData:(NSData*) data;
+ (notify_chat_private*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (notify_chat_private*) parseFromInputStream:(NSInputStream*) input;
+ (notify_chat_private*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (notify_chat_private*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (notify_chat_private*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface notify_chat_privateBuilder : PBGeneratedMessageBuilder {
@private
  notify_chat_private* resultNotifyChatPrivate;
}

- (notify_chat_private*) defaultInstance;

- (notify_chat_privateBuilder*) clear;
- (notify_chat_privateBuilder*) clone;

- (notify_chat_private*) build;
- (notify_chat_private*) buildPartial;

- (notify_chat_privateBuilder*) mergeFrom:(notify_chat_private*) other;
- (notify_chat_privateBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (notify_chat_privateBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasInfo;
- (player_info*) info;
- (notify_chat_privateBuilder*) setInfo:(player_info*) value;
- (notify_chat_privateBuilder*) setInfoBuilder:(player_infoBuilder*) builderForValue;
- (notify_chat_privateBuilder*) mergeInfo:(player_info*) value;
- (notify_chat_privateBuilder*) clearInfo;

- (BOOL) hasMsg;
- (NSString*) msg;
- (notify_chat_privateBuilder*) setMsg:(NSString*) value;
- (notify_chat_privateBuilder*) clearMsg;
@end

#define chat_private_ack_code @"code"
#define chat_private_ack_msg_id @"msgId"
#define chat_private_ack_code_msg @"codeMsg"
@interface chat_private_ack : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasCodeMsg_:1;
  BOOL hasCode_:1;
  BOOL hasMsgId_:1;
  NSString* codeMsg;
  UInt32 code;
  UInt32 msgId;
}
- (BOOL) hasCode;
- (BOOL) hasMsgId;
- (BOOL) hasCodeMsg;
@property (readonly) UInt32 code;
@property (readonly) UInt32 msgId;
@property (readonly, strong) NSString* codeMsg;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (chat_private_ackBuilder*) builder;
+ (chat_private_ackBuilder*) builder;
+ (chat_private_ackBuilder*) builderWithPrototype:(chat_private_ack*) prototype;
- (chat_private_ackBuilder*) toBuilder;

+ (chat_private_ack*) parseFromData:(NSData*) data;
+ (chat_private_ack*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (chat_private_ack*) parseFromInputStream:(NSInputStream*) input;
+ (chat_private_ack*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (chat_private_ack*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (chat_private_ack*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface chat_private_ackBuilder : PBGeneratedMessageBuilder {
@private
  chat_private_ack* resultChatPrivateAck;
}

- (chat_private_ack*) defaultInstance;

- (chat_private_ackBuilder*) clear;
- (chat_private_ackBuilder*) clone;

- (chat_private_ack*) build;
- (chat_private_ack*) buildPartial;

- (chat_private_ackBuilder*) mergeFrom:(chat_private_ack*) other;
- (chat_private_ackBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (chat_private_ackBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasCode;
- (UInt32) code;
- (chat_private_ackBuilder*) setCode:(UInt32) value;
- (chat_private_ackBuilder*) clearCode;

- (BOOL) hasMsgId;
- (UInt32) msgId;
- (chat_private_ackBuilder*) setMsgId:(UInt32) value;
- (chat_private_ackBuilder*) clearMsgId;

- (BOOL) hasCodeMsg;
- (NSString*) codeMsg;
- (chat_private_ackBuilder*) setCodeMsg:(NSString*) value;
- (chat_private_ackBuilder*) clearCodeMsg;
@end


// @@protoc_insertion_point(global_scope)
