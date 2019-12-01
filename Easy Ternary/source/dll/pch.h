// pch.h: 这是预编译标头文件。
// 下方列出的文件仅编译一次，提高了将来生成的生成性能。
// 这还将影响 IntelliSense 性能，包括代码完成和许多代码浏览功能。
// 但是，如果此处列出的文件中的任何一个在生成之间有更新，它们全部都将被重新编译。
// 请勿在此处添加要频繁更新的文件，这将使得性能优势无效。

#ifndef PCH_H
#define PCH_H

// 添加要在此处预编译的标头
#include "framework.h"
#include <stack>
//NCTF{U_kn0w_73rn4Ry_TTTTQL}
unsigned int Flag[] = {
	65553,
135200,
135425,
135168,
139793,
8736,
135680,
8449,
139552,
131362,
139808,
8225,
65826,
131330,
139537,
529,
73746,
8720,
139778,
8225,
135425,
8738,
135425,
8738,
135457,
135456,
139792
};
__declspec(dllexport) unsigned int ToTrit(unsigned int);

__declspec(dllexport) unsigned int Check(unsigned int, unsigned int);




#endif //PCH_H
