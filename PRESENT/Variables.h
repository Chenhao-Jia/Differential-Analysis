#ifndef Variables_h
#define Variables_h
#include<stdio.h>
#include<time.h>
#include"const.h"


FILE *fp;

clock_t start[31], end[31];

//����
int r;

//ת����
u64 T[16][16];

//s�в�ָ��ʣ�ÿ�ֲ�ִ������ʣ�ÿ����Ѳ�ִ���������Ѳ��·������
double P[16][16], p[31], bp[31], B[31], temp[31] = {0.0}, pro[31][16];

//����������
u64 X[31], Y[31];

//s�������֣�����Ѳ��·��
ElemType x[31][16], y[31][16], bx[31][16], by[31][16];

//��Ծs��
int s[17];


#endif // !Variables_h
#pragma once
