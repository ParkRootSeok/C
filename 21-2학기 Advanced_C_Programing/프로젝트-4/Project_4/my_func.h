#ifndef MY_FUNC_H
#define MY_FUNC_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
#include "my_struct.h"
#include "my_define.h"
	void Registration(TEL** info, int cnt);
	void ShowAll(TEL** info, int cnt);
	void delete_tel(TEL** info, int cnt);
	void FindByBirth(TEL** info, int cnt);
	void Sort(TEL** info, int cnt);
	void RegFromFile(FILE* in, TEL** info, int* cnt, int menu_num);
#endif