#pragma once
#include<iostream>
#include<stdio.h>
#include<string.h>
#include <Windows.h>
#include<time.h>
#include <graphics.h>
#include <conio.h>
#include<algorithm>
#include<stdlib.h>
#include <random>
#include <string>
#include <fstream>
#include <ddraw.h>
#include<iomanip>
#include <sapi.h>                                             // 语音头文件
#include <sphelper.h>                                     // 语音识别头文件
#include <thread>                                           //多线程
                                                                        //vs2019自定义控制台代码模板 by mao
                                                                       //作者QQ1296193245
using namespace std;
#pragma warning(disable : 4996)
#pragma comment (lib,"ddraw.lib")
#pragma comment(lib,"sapi.lib")
#pragma comment(lib,"ole32.lib")
#pragma intrinsic(__rdtsc)

//函数声明：
extern void runstart();
extern void runend();
void rundisplay();