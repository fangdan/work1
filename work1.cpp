/**摄氏温度与华氏温度的转换公式*/
#include "stdafx.h"/**stdafx.h中没有函数库，只是定义了一些环境参数，使得编译出来的程序能在32位的操作系统环境下运行*/
#include <iostream>
#include <stdarg.h>
using namespace std;
class Temperature{
private :
	float c,f;
public  :
	float convert();
};
float Temperature::convert()
{ cout<<"华氏温度为"<<endl;
  cin >>f;
  c=(f-32)*5/9;
  cout <<"摄氏温度为"<<c<<endl;
  return c;
};


int main(){
	Temperature test;
	test.convert();
	system("pause");
	return 0;
};