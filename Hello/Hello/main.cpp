//
//  main.cpp
//  Hello
//
//  Created by Zacharyah on 2024/2/7.
//

// 预处理，在编译前执行
#include <iostream>

#import "Log.hpp"
#include "Func.hpp"
#import "Log.hpp"



#if 1
// static 表示 Multiply 只在 main.cpp 文件中使用
// 如果 main.cpp 中没有调用 Multiply，就不会相关链接错误
static int Multiply(int a, int b) {
  int result = a * b;
  Log("Hi!");
  return result;
#include "EndBrace.h"
#endif

int main(int argc, const char * argv[]) {
  // insert code here...
  /*
   << 是重载运算符，将其理解为函数
   类似于 std::cout.print("Hello, World!\n").print(std::endl);
   
   std::endl，它将光标移动到新行
   
   */
  std::cout << "Hello, World!\n" << std::endl;
  
  Log("Hi!");
  
  int n = Multiply(3, 2);
  std::cout << n << std::endl;
  
  std::cout << true << std::endl;

  std::cout << sizeof(bool) << std::endl;

  std::cout << sizeof(char) << std::endl;
  
  
  
  std::cout << Add(1, 9) << std::endl;


  // 只是等待您按 Enter 移动到程序的下一行，
  // 即到这行程序就暂停了，直到我们按下 Enter 键
  std::cin.get();
  
  
  // Note：main 函数是个特例，如果这里不返回任何，默认系统将其视为返回 0
  return 0;
}
