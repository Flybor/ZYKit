#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NSString+Test.h"
#import "UIColor+Test.h"
#import "ZYKit.h"

FOUNDATION_EXPORT double ZYKitVersionNumber;
FOUNDATION_EXPORT const unsigned char ZYKitVersionString[];

