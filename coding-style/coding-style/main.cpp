//
//  main.cpp
//  coding-style
//
//  Created by minggo on 7/2/15.
//  Copyright (c) 2015 cocos2d-x. All rights reserved.
//

#include <iostream>

#include "Initialize.h"

namespace
{
    void initializeTest()
    {
        Initialize initialize;
        std::cout << "Initialize test begin" << std::endl;
        std::cout << "_mem1 = " << initialize._mem1 << std::endl;
        std::cout << "_mem2 = " << initialize._mem2 << std::endl;
        std::cout << "Initialize test end" << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    
    initializeTest();
    
    return 0;
}
