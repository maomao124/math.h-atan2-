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
#include <sapi.h>                                             // ����ͷ�ļ�
#include <sphelper.h>                                     // ����ʶ��ͷ�ļ�
#include <thread>                                           //���߳�
                                                                        //vs2019�Զ������̨����ģ�� by mao
                                                                       //����QQ1296193245
using namespace std;
#pragma warning(disable : 4996)
#pragma comment (lib,"ddraw.lib")
#pragma comment(lib,"sapi.lib")
#pragma comment(lib,"ole32.lib")
#pragma intrinsic(__rdtsc)

//����������
extern void runstart();
extern void runend();
void rundisplay();