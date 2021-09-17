// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "person.hpp"
#include <iostream>
using namespace std;




void test01()
{
	Person <string, int>p("12", 88);
	p.ShowPerson();
}
int main()
{
	test01();
}




