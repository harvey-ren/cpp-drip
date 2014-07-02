//
//  main.cpp
//  AbstractClassTest
//
//  Created by Harvey on 14-7-2.
//  Copyright (c) 2014年 iwise. All rights reserved.
//

#include <iostream>

//命名空间
using namespace std;

//定义抽象类
class Shape
{
public:
    //纯虚函数
    virtual void show()=0;
};

//继承
class Circle :public Shape
{
public:
    void show()
    {
        cout<<"Circle show"<<endl;
    }
};


int main(int argc, const char * argv[])
{
    //创建对象
    Circle *circle = new Circle;
    //调用show方法
    circle->show();
    return 0;
}

