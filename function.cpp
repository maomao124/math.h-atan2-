#include"head and macro.h"

 unsigned __int64 t1, t2, t3, t4;
 double run_time;                                                   //΢�뼶�㷨ʱ���ʱ��
 LARGE_INTEGER time_start;	                                //��ʼʱ��
 LARGE_INTEGER time_over;	                                //����ʱ��
 double dqFreq;		                                               //��ʱ��Ƶ��
 LARGE_INTEGER f;	                                               //��ʱ��Ƶ��
 double tt;
 long double totaltime;

inline void runstart()
{
	QueryPerformanceFrequency(&f);
	dqFreq = (double)f.QuadPart;
	t1 = __rdtsc();
	QueryPerformanceCounter(&time_start);	       //��ʱ��ʼ
}
inline void runend()
{
	QueryPerformanceCounter(&time_over);	        //��ʱ����
	run_time = 1000 * (time_over.QuadPart - time_start.QuadPart) / dqFreq;
	t2 = __rdtsc();
	t3 = t2 - t1;
}
void rundisplay()
{
	cout << endl;
	cout << "-------------------------------------------------------" << endl;
	if (t3 < 10000)
	{
		cout << "CPU��������" << (t3) << endl;
	}
	else if (t3 < 100000000 && t3 >= 10000)
	{
		tt = t3;
		cout << "CPU��������" << (tt) / 10000 << "��" << endl;
	}
	else if (t3 > 100000000000)
	{
		t4 = t3;
		t4 = t3 / 10000000;
		tt = t4;
		cout << "CPU��������" << (tt) / 10 << "��" << endl;
	}
	else
	{
		t4 = t3;
		t4 = t3 / 10000;
		tt = t4;
		cout << "CPU��������" << (tt) / 10000 << "��" << endl;
	}
	if (run_time > 10000)
	{
		cout << "�㷨����ʱ�䣺" << run_time / 1000 << "��" << endl;
	}
	else if (run_time < 1)
	{
		cout << "�㷨����ʱ�䣺" << run_time * 1000 << "΢��" << endl;
	}
	else
	{
		cout << "�㷨����ʱ�䣺" << run_time << "����" << endl;
	}
	totaltime = clock();
	cout << "��������ʱ�䣺" << totaltime / 1000 << "��" << endl;
	if (run_time > 0.4)
	{
		double frequency = t3 / run_time / 1000;
		cout << "CPUƵ�ʣ�" << frequency << "MHZ" << endl;
	}
	cout << "CPU����";
	system("wmic cpu get Name");
	cout << "CPUʹ����";
	system("wmic cpu get loadpercentage");
	cout << "-------------------------------------------------------" << endl;
}


//********************�����￪ʼд����************************
//**************************************************************//************************��������



//**************************************************************//************************
//***************************����*******************************


/*   ****************************************
void FpsTime(const time_t* t0, time_t* t1, const time_t* t2)// ͼ�ν��������ʾFPS������ʱ��
{
	if (!t0 || !t1 || !t2)
		return;
	static int FPS = 0;
	static int fps = 0;
	static wstring fpsTime;
	if (*t2 - *t1 == 1)
	{
		FPS = ++fps;
	}
	fpsTime = L"FPS: ";
	fpsTime += to_wstring(FPS);
	fpsTime += L" ����ʱ��: ";
	fpsTime += to_wstring(*t2 - *t0);
	fpsTime += L"s";
	settextcolor(LIGHTMAGENTA);
	outtextxy(0, 0, fpsTime.c_str());

	if (*t2 - *t1 == 1)
	{
		fps = 0;
		*t1 = time(nullptr);
	}
	else
	{
		fps++;
	}
}
*/    //*************************************
/*bool cmp(const int a, const int b)
{
	return a > b;
}*/
/*    ***************************************
bool ChangeDisSize(int cx, int cy)	                                  // �ֱ�������Ϊ cx �� cy���˳�����ʱ�Զ���ԭ
{
	LPDIRECTDRAW DXW;
	HRESULT ddrval;
	ddrval = DirectDrawCreate(NULL, &DXW, NULL);
	if (DD_OK != DD_OK) return FALSE;	                         // ����DirectDraw����ʧ�ܷ���
	ddrval = DXW->SetCooperativeLevel(NULL, DDSCL_NORMAL);
	if (DD_OK != DD_OK) return FALSE;	                         // ȡ�ô���ģʽʧ�ܷ���
	ddrval = DXW->SetDisplayMode(cx, cy, 16);
	if (DD_OK != DD_OK) return FALSE;	                          // ������ʾģʽʧ�ܷ���
}
*/