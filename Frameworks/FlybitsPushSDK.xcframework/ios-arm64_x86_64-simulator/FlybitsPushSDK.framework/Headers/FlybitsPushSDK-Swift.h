#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.3.2 (swiftlang-1200.0.45 clang-1200.0.32.28)
#ifndef FLYBITSPUSHSDK_SWIFT_H
#define FLYBITSPUSHSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import FlybitsSDK;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="FlybitsPushSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


/// Controls subscriptions to APNS topics. Convenience functions exist in entities objects.
SWIFT_CLASS("_TtC14FlybitsPushSDK15APNSPreferences")
@interface APNSPreferences : NSObject
/// The object’s description.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// The object’s debugDescription.
@property (nonatomic, readonly, copy) NSString * _Nonnull debugDescription;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// A base class for Flybits Pushes
SWIFT_CLASS("_TtC14FlybitsPushSDK4Push")
@interface Push : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Basic type Flybits Push that OS will only render the notification, no click action embedded.
SWIFT_CLASS("_TtC14FlybitsPushSDK9BasicPush")
@interface BasicPush : Push
@end


/// Content type Flybits Push that OS will render the notification, and embedded click action to go to Flybits Notification Screen
SWIFT_CLASS("_TtC14FlybitsPushSDK11ContentPush")
@interface ContentPush : Push
@end


/// Custom type Flybits Push that OS will render the notification, but custom action has yet been implemented.
SWIFT_CLASS("_TtC14FlybitsPushSDK10CustomPush")
@interface CustomPush : Push
@end



/// Class <code>PushAuthorizationAnalyticsContext</code> is used to track if user has enabled push notification from Flybits
SWIFT_CLASS("_TtC14FlybitsPushSDK33PushAuthorizationAnalyticsContext")
@interface PushAuthorizationAnalyticsContext : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A protocol to allow easy subscription and unsubscription from Flybits model objects.
SWIFT_PROTOCOL("_TtP14FlybitsPushSDK16PushConfigurable_")
@protocol PushConfigurable
/// Unique identifier for the message
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
/// Route for the message
@property (nonatomic, readonly, copy) NSString * _Nonnull route;
/// Subscribes the current object to push for the desired push <code>type</code>.
/// \param type The type of notification desired.
///
- (void)subscribeToPush;
/// Unsubscribes the current object to push for the desired push <code>type</code>.
/// \param type The type of notification desired.
///
- (void)unsubscribeFromPush;
@end


/// A set of configurable properties for the push manager.
/// Currently, the service level and APNS token are supported.
SWIFT_CLASS("_TtC14FlybitsPushSDK17PushConfiguration")
@interface PushConfiguration : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// class <code>PushContentAnalyticsContext</code> is to use for send out analytics of Push Content.
SWIFT_CLASS("_TtC14FlybitsPushSDK27PushContentAnalyticsContext")
@interface PushContentAnalyticsContext : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14FlybitsPushSDK8PushData")
@interface PushData : NSObject
@end

@class FlybitsRequest;
@class PushQuery;

/// Manages handling Flybits related push messages.
/// When a <code>PushConfiguration</code> is provided, it will automatically connect, if required. The <code>PushManager</code> requires a user to be logged in before connecting.
SWIFT_CLASS("_TtC14FlybitsPushSDK11PushManager")
@interface PushManager : NSObject
/// Retrieves a list of unsubscribed push topics for the connected Flybits user
/// \param completion A block that will return the user’s unsubscribed push topics or an error if the request was unsuccessful
///
///
/// returns:
/// A cancellable <code>FlybitsRequest</code> object
- (FlybitsRequest * _Nonnull)unsubscribedTopicsWithCompletion:(void (^ _Nonnull)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completion;
/// Unsubscribes connected Flybits user to the specified push topic
/// \param topic The push topic that will be unsubscribed from
///
/// \param completion A block that will return the user’s updated unsubscribed push topics or an error if the request was unsuccessful
///
///
/// returns:
/// A cancellable <code>FlybitsRequest</code> object
- (FlybitsRequest * _Nonnull)unsubscribeToTopic:(NSString * _Nonnull)topic completion:(void (^ _Nullable)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completion;
/// Subscribes connected Flybits user to the specified push topic
/// \param topic The push topic that will be subscribed to
///
/// \param completion A block that will return the user’s updated unsubscribed push topics or an error if the request was unsuccessful
///
///
/// returns:
/// A cancellable <code>FlybitsRequest</code> object
- (FlybitsRequest * _Nonnull)subscribeToTopic:(NSString * _Nonnull)topic completion:(void (^ _Nullable)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completion;
/// Method fetch all user’s notifications.
/// \param query A  <code>PushQuery</code> object to specify the limit using <code>Pager</code> object, the sorting order, or filter based on start and end date.
///
/// \param completion Callback with either an array of notifications or an error
///
/// \param pushMessages Array of push messages or nil
///
/// \param error Contains the networking error or nil
///
///
/// returns:
/// A cancellable reqeust
- (FlybitsRequest * _Nonnull)userNotificationsWithQuery:(PushQuery * _Nullable)query completion:(void (^ _Nonnull)(NSArray<PushData *> * _Nullable, NSError * _Nullable))completion;
/// Notifications default sending content in English (<em>en</em>) but that’s not necessarily the default language
/// of the device. This API will enable the push content to be localized to the extent the creator of the push
/// message supports their language code.
/// note:
/// This method only needs to be called one time if the default language needs to change. It will be persisted in Flybits for future executions of the app.
/// Call this method again if it changes.
/// warning:
/// This method doesn’t validate <em>code</em> against any list of valid language codes.
/// \param code The language code the user would prefer their push notifications be displayed as
///
/// \param completion Callback of the success / failure of the network call
///
/// \param error Contains the reason why the attempt to set the language code failed, otherwise nil.
///
///
/// returns:
/// A cancellable request
+ (FlybitsRequest * _Nonnull)setPreferredLanguageWithCode:(NSString * _Nonnull)code completion:(void (^ _Nonnull)(NSError * _Nullable))completion;
/// To support multiple languages supports for notification for user.
/// \param codes list of language code. Order does matter.
///
/// \param completion Callback of success / failure of the network call
///
+ (FlybitsRequest * _Nonnull)setPreferredLanguagesWithCodes:(NSArray<NSString *> * _Nonnull)codes completion:(void (^ _Nonnull)(NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// A class containing a number of constants used with PushManager.
SWIFT_CLASS("_TtC14FlybitsPushSDK20PushManagerConstants")
@interface PushManagerConstants : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A list of error codes that can be issued by the <code>PushManager</code>.
SWIFT_CLASS("_TtC14FlybitsPushSDK25PushManagerErrorConstants")
@interface PushManagerErrorConstants : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Used for filtering the results of the <code>PushRequest.NotificationHistory</code> API.
SWIFT_CLASS("_TtC14FlybitsPushSDK9PushQuery")
@interface PushQuery : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class User;
@class NSCoder;

/// The <code>PushScope</code> class is responsible for managing Push and Notifications options when initializing
/// the Push SDK. This is a primary step to configure and define attributes that are required for
/// notifications processing.
SWIFT_CLASS("_TtC14FlybitsPushSDK9PushScope")
@interface PushScope : NSObject <FlybitsScope>
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
/// Gets called on adding the scope
- (void)onStartWithCurrentActiveUserIsOptedIn:(BOOL)currentActiveUserIsOptedIn;
/// Gets called on removing the scope
- (void)onStop;
/// Gets called on successfully connecting to the IDP
- (void)onConnectedWithUser:(User * _Nonnull)user;
/// Gets called on disconnecting from the IDP
- (void)onDisconnected;
/// Gets called when a user account opt In of Flybits
- (void)onOptIn;
/// Gets called when a user account opt out of Flybits
- (void)onOptOut;
/// NSCoding decode initializer
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
/// NSCoding encode
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// The <code>PushTemplate</code> class is used to define all the necessary parameters associated to a
/// push notification that is sent to user’s based on changing contextual values and hence the
/// changing of rule evaluation states.
SWIFT_CLASS("_TtC14FlybitsPushSDK12PushTemplate")
@interface PushTemplate : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Push template options that allows to specify maximum number of time to send the message, delay between messages and cooldown time for the push messages
SWIFT_CLASS("_TtC14FlybitsPushSDK19PushTemplateOptions")
@interface PushTemplateOptions : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Rule result for evaluations
typedef SWIFT_ENUM(NSInteger, RuleResult, open) {
/// Evaluates to true
  RuleResultTrue = 1,
/// Evaluates to false
  RuleResultFalse = 2,
/// Evaluates to true or false
  RuleResultTrueOrFalse = 3,
};



/// Weblink type Flybits Push that OS will render the notification, and embedded click action to open a web page with the link from the push
SWIFT_CLASS("_TtC14FlybitsPushSDK11WeblinkPush")
@interface WeblinkPush : Push
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.3.2 (swiftlang-1200.0.45 clang-1200.0.32.28)
#ifndef FLYBITSPUSHSDK_SWIFT_H
#define FLYBITSPUSHSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import FlybitsSDK;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="FlybitsPushSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


/// Controls subscriptions to APNS topics. Convenience functions exist in entities objects.
SWIFT_CLASS("_TtC14FlybitsPushSDK15APNSPreferences")
@interface APNSPreferences : NSObject
/// The object’s description.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// The object’s debugDescription.
@property (nonatomic, readonly, copy) NSString * _Nonnull debugDescription;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// A base class for Flybits Pushes
SWIFT_CLASS("_TtC14FlybitsPushSDK4Push")
@interface Push : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Basic type Flybits Push that OS will only render the notification, no click action embedded.
SWIFT_CLASS("_TtC14FlybitsPushSDK9BasicPush")
@interface BasicPush : Push
@end


/// Content type Flybits Push that OS will render the notification, and embedded click action to go to Flybits Notification Screen
SWIFT_CLASS("_TtC14FlybitsPushSDK11ContentPush")
@interface ContentPush : Push
@end


/// Custom type Flybits Push that OS will render the notification, but custom action has yet been implemented.
SWIFT_CLASS("_TtC14FlybitsPushSDK10CustomPush")
@interface CustomPush : Push
@end



/// Class <code>PushAuthorizationAnalyticsContext</code> is used to track if user has enabled push notification from Flybits
SWIFT_CLASS("_TtC14FlybitsPushSDK33PushAuthorizationAnalyticsContext")
@interface PushAuthorizationAnalyticsContext : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A protocol to allow easy subscription and unsubscription from Flybits model objects.
SWIFT_PROTOCOL("_TtP14FlybitsPushSDK16PushConfigurable_")
@protocol PushConfigurable
/// Unique identifier for the message
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
/// Route for the message
@property (nonatomic, readonly, copy) NSString * _Nonnull route;
/// Subscribes the current object to push for the desired push <code>type</code>.
/// \param type The type of notification desired.
///
- (void)subscribeToPush;
/// Unsubscribes the current object to push for the desired push <code>type</code>.
/// \param type The type of notification desired.
///
- (void)unsubscribeFromPush;
@end


/// A set of configurable properties for the push manager.
/// Currently, the service level and APNS token are supported.
SWIFT_CLASS("_TtC14FlybitsPushSDK17PushConfiguration")
@interface PushConfiguration : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// class <code>PushContentAnalyticsContext</code> is to use for send out analytics of Push Content.
SWIFT_CLASS("_TtC14FlybitsPushSDK27PushContentAnalyticsContext")
@interface PushContentAnalyticsContext : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14FlybitsPushSDK8PushData")
@interface PushData : NSObject
@end

@class FlybitsRequest;
@class PushQuery;

/// Manages handling Flybits related push messages.
/// When a <code>PushConfiguration</code> is provided, it will automatically connect, if required. The <code>PushManager</code> requires a user to be logged in before connecting.
SWIFT_CLASS("_TtC14FlybitsPushSDK11PushManager")
@interface PushManager : NSObject
/// Retrieves a list of unsubscribed push topics for the connected Flybits user
/// \param completion A block that will return the user’s unsubscribed push topics or an error if the request was unsuccessful
///
///
/// returns:
/// A cancellable <code>FlybitsRequest</code> object
- (FlybitsRequest * _Nonnull)unsubscribedTopicsWithCompletion:(void (^ _Nonnull)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completion;
/// Unsubscribes connected Flybits user to the specified push topic
/// \param topic The push topic that will be unsubscribed from
///
/// \param completion A block that will return the user’s updated unsubscribed push topics or an error if the request was unsuccessful
///
///
/// returns:
/// A cancellable <code>FlybitsRequest</code> object
- (FlybitsRequest * _Nonnull)unsubscribeToTopic:(NSString * _Nonnull)topic completion:(void (^ _Nullable)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completion;
/// Subscribes connected Flybits user to the specified push topic
/// \param topic The push topic that will be subscribed to
///
/// \param completion A block that will return the user’s updated unsubscribed push topics or an error if the request was unsuccessful
///
///
/// returns:
/// A cancellable <code>FlybitsRequest</code> object
- (FlybitsRequest * _Nonnull)subscribeToTopic:(NSString * _Nonnull)topic completion:(void (^ _Nullable)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completion;
/// Method fetch all user’s notifications.
/// \param query A  <code>PushQuery</code> object to specify the limit using <code>Pager</code> object, the sorting order, or filter based on start and end date.
///
/// \param completion Callback with either an array of notifications or an error
///
/// \param pushMessages Array of push messages or nil
///
/// \param error Contains the networking error or nil
///
///
/// returns:
/// A cancellable reqeust
- (FlybitsRequest * _Nonnull)userNotificationsWithQuery:(PushQuery * _Nullable)query completion:(void (^ _Nonnull)(NSArray<PushData *> * _Nullable, NSError * _Nullable))completion;
/// Notifications default sending content in English (<em>en</em>) but that’s not necessarily the default language
/// of the device. This API will enable the push content to be localized to the extent the creator of the push
/// message supports their language code.
/// note:
/// This method only needs to be called one time if the default language needs to change. It will be persisted in Flybits for future executions of the app.
/// Call this method again if it changes.
/// warning:
/// This method doesn’t validate <em>code</em> against any list of valid language codes.
/// \param code The language code the user would prefer their push notifications be displayed as
///
/// \param completion Callback of the success / failure of the network call
///
/// \param error Contains the reason why the attempt to set the language code failed, otherwise nil.
///
///
/// returns:
/// A cancellable request
+ (FlybitsRequest * _Nonnull)setPreferredLanguageWithCode:(NSString * _Nonnull)code completion:(void (^ _Nonnull)(NSError * _Nullable))completion;
/// To support multiple languages supports for notification for user.
/// \param codes list of language code. Order does matter.
///
/// \param completion Callback of success / failure of the network call
///
+ (FlybitsRequest * _Nonnull)setPreferredLanguagesWithCodes:(NSArray<NSString *> * _Nonnull)codes completion:(void (^ _Nonnull)(NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// A class containing a number of constants used with PushManager.
SWIFT_CLASS("_TtC14FlybitsPushSDK20PushManagerConstants")
@interface PushManagerConstants : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A list of error codes that can be issued by the <code>PushManager</code>.
SWIFT_CLASS("_TtC14FlybitsPushSDK25PushManagerErrorConstants")
@interface PushManagerErrorConstants : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Used for filtering the results of the <code>PushRequest.NotificationHistory</code> API.
SWIFT_CLASS("_TtC14FlybitsPushSDK9PushQuery")
@interface PushQuery : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class User;
@class NSCoder;

/// The <code>PushScope</code> class is responsible for managing Push and Notifications options when initializing
/// the Push SDK. This is a primary step to configure and define attributes that are required for
/// notifications processing.
SWIFT_CLASS("_TtC14FlybitsPushSDK9PushScope")
@interface PushScope : NSObject <FlybitsScope>
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
/// Gets called on adding the scope
- (void)onStartWithCurrentActiveUserIsOptedIn:(BOOL)currentActiveUserIsOptedIn;
/// Gets called on removing the scope
- (void)onStop;
/// Gets called on successfully connecting to the IDP
- (void)onConnectedWithUser:(User * _Nonnull)user;
/// Gets called on disconnecting from the IDP
- (void)onDisconnected;
/// Gets called when a user account opt In of Flybits
- (void)onOptIn;
/// Gets called when a user account opt out of Flybits
- (void)onOptOut;
/// NSCoding decode initializer
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
/// NSCoding encode
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// The <code>PushTemplate</code> class is used to define all the necessary parameters associated to a
/// push notification that is sent to user’s based on changing contextual values and hence the
/// changing of rule evaluation states.
SWIFT_CLASS("_TtC14FlybitsPushSDK12PushTemplate")
@interface PushTemplate : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Push template options that allows to specify maximum number of time to send the message, delay between messages and cooldown time for the push messages
SWIFT_CLASS("_TtC14FlybitsPushSDK19PushTemplateOptions")
@interface PushTemplateOptions : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Rule result for evaluations
typedef SWIFT_ENUM(NSInteger, RuleResult, open) {
/// Evaluates to true
  RuleResultTrue = 1,
/// Evaluates to false
  RuleResultFalse = 2,
/// Evaluates to true or false
  RuleResultTrueOrFalse = 3,
};



/// Weblink type Flybits Push that OS will render the notification, and embedded click action to open a web page with the link from the push
SWIFT_CLASS("_TtC14FlybitsPushSDK11WeblinkPush")
@interface WeblinkPush : Push
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
