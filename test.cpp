// format_short_test.cpp
#include <iostream>
#include "format.h"  // 包含你的头文件

int main() {
  // 测试短字符串格式化
  std::string short_result = fmt::format_short("Hello, {}!", "World");
  std::cout << "短字符串测试: " << short_result << std::endl;

  // 测试长字符串（触发动态分配）
  std::string long_str(300, 'a');
  std::string long_result = fmt::format_short("{}", long_str);
  std::cout << "长字符串测试: " << (long_result == long_str ? "成功" : "失败") << std::endl;

  return 0;
}
