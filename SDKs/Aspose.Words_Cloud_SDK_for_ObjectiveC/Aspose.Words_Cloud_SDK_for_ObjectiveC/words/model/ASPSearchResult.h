#import <Foundation/Foundation.h>
#import "ASPObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "ASPDocumentPosition.h"


@protocol ASPSearchResult
@end

@interface ASPSearchResult : ASPObject


@property(nonatomic) ASPDocumentPosition* rangeStart;

@property(nonatomic) ASPDocumentPosition* rangeEnd;

@end
