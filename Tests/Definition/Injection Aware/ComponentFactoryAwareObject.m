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

#import "ComponentFactoryAwareObject.h"

@implementation ComponentFactoryAwareObject
{
    id factory;
}

@synthesize factory;

- (void)setFactory:(TyphoonComponentFactory*)theFactory
{
    factory = theFactory;
}

@end
