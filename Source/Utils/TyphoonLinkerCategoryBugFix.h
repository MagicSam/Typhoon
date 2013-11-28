////////////////////////////////////////////////////////////////////////////////
//
//  TYPHOON FRAMEWORK
//  Copyright 2013, Jasper Blues & Contributors
//  All Rights Reserved.
//
//  NOTICE: The authors permit you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////

/**
 Add this macro before each category implementation, so we don't have to use
 -all_load or -force_load to load object files from static libraries that only contain
 categories and no classes.
 See http://developer.apple.com/library/mac/#qa/qa2006/qa1490.html for more info.
 
 Shamelessly borrowed from Three20 and RestKit
 */

#define TYPHOON_FIX_CATEGORY_BUG(name) \
@interface TYPHOON_FIX_CATEGORY_BUG_##name : NSObject \
@end \
@implementation TYPHOON_FIX_CATEGORY_BUG_##name \
@end