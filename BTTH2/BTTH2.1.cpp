// BTTH2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "windows.h"

int main()
{
	WIN32_FIND_DATAA DATA;
	HANDLE h = FindFirstFileA("D:\\*.*", &DATA);
	do {
		if (DATA.dwFileAttributes &
			FILE_ATTRIBUTE_DIRECTORY) {
			// Đây là một thư mục
			// In ra tên thư mục
			char tmp[] = "";
			//int offset =  0;
			printf("%s\n", DATA.cFileName);
			//system("PAUSE");
		}
		else {
			char tmp[] = "";
			//int offset =  0;
			unsigned long size = (DATA.nFileSizeHigh*(MAXDWORD + 1)) + DATA.nFileSizeLow;
			printf("%s : %ul\n", DATA.cFileName, size);
			//memcpy(tmp, DATA.cFileName, sizeof(DATA.cFileName));
			//offset += sizeof(DATA.cFileName) + 1;
			//DWORD attrb = DATA.dwFileAttributes;
			//memcpy(tmp + offset, &attrb, sizeof(attrb));
			//offset += sizeof(attrb) + 1;
			//printf((char *)attrb);

			//unsigned long size = (DATA.nFileSizeHigh*(MAXDWORD + 1)) + DATA.nFileSizeLow;
			//printf((char *)size);
			// Đây là một file
			// In ra tên file và kích thước file
		}
	} while (FindNextFileA(h, &DATA));
	//return 1;
	system("PAUSE");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
