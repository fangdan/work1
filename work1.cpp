/**�����¶��뻪���¶ȵ�ת����ʽ*/
#include "stdafx.h"/**stdafx.h��û�к����⣬ֻ�Ƕ�����һЩ����������ʹ�ñ�������ĳ�������32λ�Ĳ���ϵͳ����������*/
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
{ cout<<"�����¶�Ϊ"<<endl;
  cin >>f;
  c=(f-32)*5/9;
  cout <<"�����¶�Ϊ"<<c<<endl;
  return c;
};


int main(){
	Temperature test;
	test.convert();
	system("pause");
	return 0;
};