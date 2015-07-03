//
//  ForwardDeclaration1.cpp
//  coding-style
//
//  Created by minggo on 7/2/15.
//  Copyright (c) 2015 cocos2d-x. All rights reserved.
//

#include <iostream> // to include std namespace
#include "ForwardDeclaration1.h"
#include "ForwardDeclaration2.h"

ForwardDeclaration::ForwardDeclaration()
{
    _forwardDeclaration2 = new (std::nothrow) ForwardDeclaration2;
}