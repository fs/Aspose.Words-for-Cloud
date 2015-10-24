#import <Foundation/Foundation.h>
#import "ASPDiscUsageResponse.h"
#import "ASPFileExistResponse.h"
#import "ASPBaseResponse.h"
#import "ASPFolderResponse.h"
#import "ASPFileVersionsResponse.h"
#import "ASPStorageExistResponse.h"
#import "ASPObject.h"
#import "ASPApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface ASPStorageApi: NSObject

@property(nonatomic, assign)ASPApiClient *apiClient;

-(instancetype) initWithApiClient:(ASPApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(ASPStorageApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
///
///
/// Check the disk usage of the current account. Parameters: storage - user's storage name.
/// 
///
/// @param storage 
/// 
///
/// @return ASPDiscUsageResponse*
-(NSNumber*) getDiscUsageWithCompletionBlock :(NSString*) storage 
    
    completionHandler: (void (^)(ASPDiscUsageResponse* output, NSError* error))completionBlock;
    


///
///
/// Check if a specific file or folder exists. Parameters: path - file or folder path e.g. /file.ext or /Folder1, versionID - file's version, storage - user's storage name.
/// 
///
/// @param path 
/// @param versionId 
/// @param storage 
/// 
///
/// @return ASPFileExistResponse*
-(NSNumber*) getIsExistWithCompletionBlock :(NSString*) path 
     versionId:(NSString*) versionId 
     storage:(NSString*) storage 
    
    completionHandler: (void (^)(ASPFileExistResponse* output, NSError* error))completionBlock;
    


///
///
/// Download a specific file. Parameters: path - file path e.g. /file.ext, versionID - file's version, storage - user's storage name.
/// 
///
/// @param path 
/// @param versionId 
/// @param storage 
/// 
///
/// @return NSURL*
-(NSNumber*) getDownloadWithCompletionBlock :(NSString*) path 
     versionId:(NSString*) versionId 
     storage:(NSString*) storage 
    
    completionHandler: (void (^)(NSURL* output, NSError* error))completionBlock;



///
///
/// Create the folder. Parameters: path - source folder path e.g. /Folder1, storage - user's source storage name, newdest - destination folder path e.g. /Folder2, destStorage - user's destination storage name.
///
///
/// @param path
/// @param storage
/// @param destStorage
///
///
/// @return ASPBaseResponse*
-(NSNumber*) putCreateFolderWithCompletionBlock :(NSString*) path
                                         storage:(NSString*) storage
                                     destStorage:(NSString*) destStorage

                               completionHandler: (void (^)(ASPBaseResponse* output, NSError* error))completionBlock;



///
///
/// Copy a specific file. Parameters: path - source file path e.g. /file.ext, versionID - source file's version, storage - user's source storage name, newdest - destination file path, destStorage - user's destination storage name.
/// 
///
/// @param path 
/// @param newdest 
/// @param versionId 
/// @param storage 
/// @param destStorage 
/// @param file 
/// 
///
/// @return ASPBaseResponse*
-(NSNumber*) putCopyWithCompletionBlock :(NSString*) path 
     newdest:(NSString*) newdest 
     versionId:(NSString*) versionId 
     storage:(NSString*) storage 
     destStorage:(NSString*) destStorage 
     file:(NSURL*) file 
    
    completionHandler: (void (^)(ASPBaseResponse* output, NSError* error))completionBlock;
    


///
///
/// Upload a specific file. Parameters: path - source file path e.g. /file.ext, versionID - source file's version, storage - user's source storage name, newdest - destination file path, destStorage - user's destination storage name.
///
///
/// @param path
/// @param file file to upload
/// @param versionId
/// @param storage
///
///
/// @return ASPBaseResponse*
-(NSNumber*) putCreateWithCompletionBlock :(NSString*) path
                                      file:(NSURL*) file
                                 versionId:(NSString*) versionId
                                   storage:(NSString*) storage

                         completionHandler: (void (^)(ASPBaseResponse* output, NSError* error))completionBlock;



///
///
/// Remove a specific file. Parameters: path - file path e.g. /file.ext, versionID - file's version, storage - user's storage name.
/// 
///
/// @param path 
/// @param versionId 
/// @param storage 
/// 
///
/// @return ASPBaseResponse*
-(NSNumber*) deleteFileWithCompletionBlock :(NSString*) path 
     versionId:(NSString*) versionId 
     storage:(NSString*) storage 
    
    completionHandler: (void (^)(ASPBaseResponse* output, NSError* error))completionBlock;
    


///
///
/// Move a specific file.
/// 
///
/// @param src source file path e.g. /file.ext
/// @param dest 
/// @param versionId source file&#39;s version,
/// @param storage user&#39;s source storage name
/// @param destStorage user&#39;s destination storage name
/// 
///
/// @return ASPBaseResponse*
-(NSNumber*) postMoveFileWithCompletionBlock :(NSString*) src 
     dest:(NSString*) dest 
     versionId:(NSString*) versionId 
     storage:(NSString*) storage 
     destStorage:(NSString*) destStorage 
    
    completionHandler: (void (^)(ASPBaseResponse* output, NSError* error))completionBlock;
    


///
///
/// Get the file listing of a specific folder. Parametres: path - start with name of storage e.g. root folder '/'or some folder '/folder1/..', storage - user's storage name.
/// 
///
/// @param path 
/// @param storage 
/// 
///
/// @return ASPFolderResponse*
-(NSNumber*) getListFilesWithCompletionBlock :(NSString*) path 
     storage:(NSString*) storage 
    
    completionHandler: (void (^)(ASPFolderResponse* output, NSError* error))completionBlock;
    


///
///
/// Copy a folder. Parameters: path - source folder path e.g. /Folder1, storage - user's source storage name, newdest - destination folder path e.g. /Folder2, destStorage - user's destination storage name.
/// 
///
/// @param path 
/// @param newdest 
/// @param storage 
/// @param destStorage 
/// 
///
/// @return ASPBaseResponse*
-(NSNumber*) putCopyFolderWithCompletionBlock :(NSString*) path 
     newdest:(NSString*) newdest 
     storage:(NSString*) storage 
     destStorage:(NSString*) destStorage 
    
    completionHandler: (void (^)(ASPBaseResponse* output, NSError* error))completionBlock;
    


///
///
/// Remove a specific folder. Parameters: path - folder path e.g. /Folder1, storage - user's storage name, recursive - is subfolders and files must be deleted for specified path.
/// 
///
/// @param path 
/// @param storage 
/// @param recursive 
/// 
///
/// @return ASPBaseResponse*
-(NSNumber*) deleteFolderWithCompletionBlock :(NSString*) path 
     storage:(NSString*) storage 
     recursive:(NSNumber*) recursive 
    
    completionHandler: (void (^)(ASPBaseResponse* output, NSError* error))completionBlock;
    


///
///
/// Move a specific folder. Parameters: src - source folder path e.g. /Folder1, storage - user's source storage name, dest - destination folder path e.g. /Folder2, destStorage - user's destination storage name.
/// 
///
/// @param src 
/// @param dest 
/// @param storage 
/// @param destStorage 
/// 
///
/// @return ASPBaseResponse*
-(NSNumber*) postMoveFolderWithCompletionBlock :(NSString*) src 
     dest:(NSString*) dest 
     storage:(NSString*) storage 
     destStorage:(NSString*) destStorage 
    
    completionHandler: (void (^)(ASPBaseResponse* output, NSError* error))completionBlock;
    


///
///
/// Get the file's versions list. Parameters: path - file path e.g. /file.ext or /Folder1/file.ext, storage - user's storage name.
/// 
///
/// @param path 
/// @param storage 
/// 
///
/// @return ASPFileVersionsResponse*
-(NSNumber*) getListFileVersionsWithCompletionBlock :(NSString*) path 
     storage:(NSString*) storage 
    
    completionHandler: (void (^)(ASPFileVersionsResponse* output, NSError* error))completionBlock;
    


///
///
/// Check if a specific storage exists.
/// 
///
/// @param name Storage name
/// 
///
/// @return ASPStorageExistResponse*
-(NSNumber*) getIsStorageExistWithCompletionBlock :(NSString*) name 
    
    completionHandler: (void (^)(ASPStorageExistResponse* output, NSError* error))completionBlock;
    



@end
