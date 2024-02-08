//
//  Log.hpp
//  Hello
//
//  Created by Zacharyah on 2024/2/7.
//

/*
 # 开头被称为预处理器命令
 pragma 本质是一个被发送到编译器或处理器的预处理指令
 #pragma once 即只包含这个文件一次，它阻止我们单个头文件多次被包含，并转换
 为单个翻译单元
 
 */
//#pragma once

#ifndef Log_hpp
#define Log_hpp


#include <stdio.h>
#include <iostream>


void Log(const char* message);

struct Player {};

#endif /* Log_hpp */
