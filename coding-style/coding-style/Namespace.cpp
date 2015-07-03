//
//  Namespace.cpp
//  coding-style
//
//  Created by minggo on 7/2/15.
//  Copyright (c) 2015 cocos2d-x. All rights reserved.
//

#include "Namespace.h"

#define NP_BEGIN namespace np {
#define NP_END   }

namespace
{
    void local()
    {
        
    }
}

NP_BEGIN

Namespace::Namespace()
{
    local();
}

NP_END