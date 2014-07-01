//
//  main.cpp
//  BoolDemo
//
//  Created by Harvey on 14-6-17.
//  Copyright (c) 2014年 iwise. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    //定义变量，设置为假
    bool isShowWindow = false;

    //赋值为真
    isShowWindow  = true;
    
    if(isShowWindow)
    {
        cout<<"show window"<<endl;
    }
    
    return 0;
}

