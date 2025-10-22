// format_short_test.cpp
#include <iostream>
#include "format.h"  // �������ͷ�ļ�

int main() {
  // ���Զ��ַ�����ʽ��
  std::string short_result = fmt::format_short("Hello, {}!", "World");
  std::cout << "���ַ�������: " << short_result << std::endl;

  // ���Գ��ַ�����������̬���䣩
  std::string long_str(300, 'a');
  std::string long_result = fmt::format_short("{}", long_str);
  std::cout << "���ַ�������: " << (long_result == long_str ? "�ɹ�" : "ʧ��") << std::endl;

  return 0;
}
