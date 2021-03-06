//----------------------------------------------------------------
//  Copyright (c) Microsoft Corporation. All rights reserved.
//----------------------------------------------------------------

#import <Foundation/Foundation.h>

#if TARGET_OS_OSX
#import <AppKit/AppKit.h>

#ifndef ANHApplicationDelegate
#define ANHApplicationDelegate NSApplicationDelegate
#endif

#ifndef ANHApplication
#define ANHApplication NSApplication
#endif
#else
#import <UIKit/UIKit.h>

#ifndef ANHApplicationDelegate
#define ANHApplicationDelegate UIApplicationDelegate
#endif

#ifndef ANHApplication
#define ANHApplication UIApplication
#endif

#endif
