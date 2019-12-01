// pch.cpp: 与预编译标头对应的源文件

#include "pch.h"

// 当使用预编译的头时，需要使用此源文件，编译才能成功。

unsigned int ToTrit(unsigned int num)
{
	unsigned int temp = num;
	std::stack<unsigned int> T1;
	while (temp)
	{
		T1.push(temp % 3);
		temp /= 3;
	}

	unsigned int ret = 0;
	while (!T1.empty())
	{
		ret *= 0x10;
		ret += T1.top();
		T1.pop();
	}


	return ret;
}

unsigned int Check(unsigned int c, unsigned int index)
{
	unsigned int ind = index - 1;
	if (c == Flag[ind])
		return 1;
	else
		return 0;
}


