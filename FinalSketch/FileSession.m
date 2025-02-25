//
//  FileSession.m
//  Splitting Up is Easy To Do
//
//  Created by Yifan Xiao & Yecheng Li on 2/21/15.
//  Copyright (c) 2015 Yifan Xiao & Yecheng Li. All rights reserved.
//
#import "Item.h"
#import "FileSession.h"

@implementation FileSession

//get the URL in document from the filename
//the filename is passed in by string
+(NSURL *)getListURLOf:(NSString *)string
{
    NSError* err = nil;
    NSURL *docs = [[NSFileManager new] URLForDirectory:NSDocumentDirectory
                                              inDomain:NSUserDomainMask appropriateForURL:nil
                                                create:YES error:&err];
    NSURL* file = [docs URLByAppendingPathComponent:string];
    return file;
}

//write data to URL, the data is object encoded
//and the url is file
+(void)writeData:(id)object ToList:(NSURL*)url{
    NSData* sessionData = [NSKeyedArchiver archivedDataWithRootObject:object];
    [sessionData writeToURL:url atomically:NO];
}

//get the data from URL, parameter is the url of the selected file, which is got from the first method
+(NSArray *)readDataFromList:(NSURL*)url{
    // Read
    NSData* data = [[NSData alloc] initWithContentsOfURL:url];
    NSArray *dataRetrived = (NSArray*)[NSKeyedUnarchiver unarchiveObjectWithData:data];
    //DLog(@"Retrieved:%@ %@",sessionRetrieved.startTime,sessionRetrieved.uuid);
    return dataRetrived;
}


@end
