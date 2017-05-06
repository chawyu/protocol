// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class AddressBook;
@class AddressBookBuilder;
@class Ext;
@class ExtBuilder;
@class Person;
@class PersonBuilder;
@class PersonPhoneNumber;
@class PersonPhoneNumberBuilder;


typedef NS_ENUM(SInt32, PersonPhoneType) {
  PersonPhoneTypeMobile = 0,
  PersonPhoneTypeHome = 1,
  PersonPhoneTypeWork = 2,
};

BOOL PersonPhoneTypeIsValidValue(PersonPhoneType value);
NSString *NSStringFromPersonPhoneType(PersonPhoneType value);


@interface AddressbookRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define Person_name @"name"
#define Person_id @"id"
#define Person_email @"email"
#define Person_phone @"phone"
#define Person_test @"test"
@interface Person : PBExtendableMessage<GeneratedMessageProtocol> {
@private
  BOOL hasId_:1;
  BOOL hasName_:1;
  BOOL hasEmail_:1;
  SInt32 id;
  NSString* name;
  NSString* email;
  PBAppendableArray * testArray;
  SInt32 testMemoizedSerializedSize;
  NSMutableArray * phoneArray;
}
- (BOOL) hasName;
- (BOOL) hasId;
- (BOOL) hasEmail;
@property (readonly, strong) NSString* name;
@property (readonly) SInt32 id;
@property (readonly, strong) NSString* email;
@property (readonly, strong) NSArray<PersonPhoneNumber*> * phone;
@property (readonly, strong) PBArray * test;
- (PersonPhoneNumber*)phoneAtIndex:(NSUInteger)index;
- (SInt32)testAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PersonBuilder*) builder;
+ (PersonBuilder*) builder;
+ (PersonBuilder*) builderWithPrototype:(Person*) prototype;
- (PersonBuilder*) toBuilder;

+ (Person*) parseFromData:(NSData*) data;
+ (Person*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Person*) parseFromInputStream:(NSInputStream*) input;
+ (Person*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Person*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Person*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

#define PhoneNumber_number @"number"
#define PhoneNumber_type @"type"
@interface PersonPhoneNumber : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasNumber_:1;
  BOOL hasType_:1;
  NSString* number;
  PersonPhoneType type;
}
- (BOOL) hasNumber;
- (BOOL) hasType;
@property (readonly, strong) NSString* number;
@property (readonly) PersonPhoneType type;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PersonPhoneNumberBuilder*) builder;
+ (PersonPhoneNumberBuilder*) builder;
+ (PersonPhoneNumberBuilder*) builderWithPrototype:(PersonPhoneNumber*) prototype;
- (PersonPhoneNumberBuilder*) toBuilder;

+ (PersonPhoneNumber*) parseFromData:(NSData*) data;
+ (PersonPhoneNumber*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PersonPhoneNumber*) parseFromInputStream:(NSInputStream*) input;
+ (PersonPhoneNumber*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PersonPhoneNumber*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (PersonPhoneNumber*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PersonPhoneNumberBuilder : PBGeneratedMessageBuilder {
@private
  PersonPhoneNumber* resultPhoneNumber;
}

- (PersonPhoneNumber*) defaultInstance;

- (PersonPhoneNumberBuilder*) clear;
- (PersonPhoneNumberBuilder*) clone;

- (PersonPhoneNumber*) build;
- (PersonPhoneNumber*) buildPartial;

- (PersonPhoneNumberBuilder*) mergeFrom:(PersonPhoneNumber*) other;
- (PersonPhoneNumberBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PersonPhoneNumberBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasNumber;
- (NSString*) number;
- (PersonPhoneNumberBuilder*) setNumber:(NSString*) value;
- (PersonPhoneNumberBuilder*) clearNumber;

- (BOOL) hasType;
- (PersonPhoneType) type;
- (PersonPhoneNumberBuilder*) setType:(PersonPhoneType) value;
- (PersonPhoneNumberBuilder*) clearType;
@end

@interface PersonBuilder : PBExtendableMessageBuilder {
@private
  Person* resultPerson;
}

- (Person*) defaultInstance;

- (PersonBuilder*) clear;
- (PersonBuilder*) clone;

- (Person*) build;
- (Person*) buildPartial;

- (PersonBuilder*) mergeFrom:(Person*) other;
- (PersonBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PersonBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasName;
- (NSString*) name;
- (PersonBuilder*) setName:(NSString*) value;
- (PersonBuilder*) clearName;

- (BOOL) hasId;
- (SInt32) id;
- (PersonBuilder*) setId:(SInt32) value;
- (PersonBuilder*) clearId;

- (BOOL) hasEmail;
- (NSString*) email;
- (PersonBuilder*) setEmail:(NSString*) value;
- (PersonBuilder*) clearEmail;

- (NSMutableArray<PersonPhoneNumber*> *)phone;
- (PersonPhoneNumber*)phoneAtIndex:(NSUInteger)index;
- (PersonBuilder *)addPhone:(PersonPhoneNumber*)value;
- (PersonBuilder *)setPhoneArray:(NSArray<PersonPhoneNumber*> *)array;
- (PersonBuilder *)clearPhone;

- (PBAppendableArray *)test;
- (SInt32)testAtIndex:(NSUInteger)index;
- (PersonBuilder *)addTest:(SInt32)value;
- (PersonBuilder *)setTestArray:(NSArray *)array;
- (PersonBuilder *)setTestValues:(const SInt32 *)values count:(NSUInteger)count;
- (PersonBuilder *)clearTest;
@end

@interface Ext : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
}

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

+ (id<PBExtensionField>) test;
- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ExtBuilder*) builder;
+ (ExtBuilder*) builder;
+ (ExtBuilder*) builderWithPrototype:(Ext*) prototype;
- (ExtBuilder*) toBuilder;

+ (Ext*) parseFromData:(NSData*) data;
+ (Ext*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Ext*) parseFromInputStream:(NSInputStream*) input;
+ (Ext*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Ext*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Ext*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ExtBuilder : PBGeneratedMessageBuilder {
@private
  Ext* resultExt;
}

- (Ext*) defaultInstance;

- (ExtBuilder*) clear;
- (ExtBuilder*) clone;

- (Ext*) build;
- (Ext*) buildPartial;

- (ExtBuilder*) mergeFrom:(Ext*) other;
- (ExtBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ExtBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

#define AddressBook_person @"person"
@interface AddressBook : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  NSMutableArray * personArray;
}
@property (readonly, strong) NSArray<Person*> * person;
- (Person*)personAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (AddressBookBuilder*) builder;
+ (AddressBookBuilder*) builder;
+ (AddressBookBuilder*) builderWithPrototype:(AddressBook*) prototype;
- (AddressBookBuilder*) toBuilder;

+ (AddressBook*) parseFromData:(NSData*) data;
+ (AddressBook*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (AddressBook*) parseFromInputStream:(NSInputStream*) input;
+ (AddressBook*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (AddressBook*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (AddressBook*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface AddressBookBuilder : PBGeneratedMessageBuilder {
@private
  AddressBook* resultAddressBook;
}

- (AddressBook*) defaultInstance;

- (AddressBookBuilder*) clear;
- (AddressBookBuilder*) clone;

- (AddressBook*) build;
- (AddressBook*) buildPartial;

- (AddressBookBuilder*) mergeFrom:(AddressBook*) other;
- (AddressBookBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (AddressBookBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (NSMutableArray<Person*> *)person;
- (Person*)personAtIndex:(NSUInteger)index;
- (AddressBookBuilder *)addPerson:(Person*)value;
- (AddressBookBuilder *)setPersonArray:(NSArray<Person*> *)array;
- (AddressBookBuilder *)clearPerson;
@end


// @@protoc_insertion_point(global_scope)