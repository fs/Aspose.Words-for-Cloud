#import <Foundation/Foundation.h>
#import "ASPObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "ASPLink.h"


@protocol ASPFormField
@end

@interface ASPFormField : ASPObject


@property(nonatomic) NSString* nodeId;

@property(nonatomic) NSString* name;

@property(nonatomic) NSNumber* enabled;

@property(nonatomic) NSString* statusText;

@property(nonatomic) NSNumber* ownStatus;

@property(nonatomic) NSString* helpText;

@property(nonatomic) NSNumber* ownHelp;

@property(nonatomic) NSNumber* calculateOnExit;

@property(nonatomic) NSString* entryMacro;

@property(nonatomic) NSString* exitMacro;

@property(nonatomic) ASPLink* link;

@end