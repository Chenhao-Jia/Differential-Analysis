#ifndef VARIABLES_H__
#define VARIABLES_H__
#include<stdio.h>
#include<time.h>

typedef unsigned int ElemType;
typedef unsigned __int32 u32;
typedef unsigned __int64 u64;

u32 X[16], Y[16], Tr[8][16];
u64 Temp[16];

ElemType fr[2][8] = { 0 }, mid[2][8] = { 0 };

//s�������֣�x[i][j]��ʾ��i+1�֣���j+1��s�е������֣�ȡֵΪ0-63������																																		
ElemType x[16][8];		

//s�������֣�y[i][j]��ʾ��i+1�֣���j+1��s�е������֣�ȡֵΪ0-15������
ElemType y[16][8];		 

//��Ѳ��·���ĸ��ʣ�B[i]��ʾi+1����ò��·���ĸ���
double B[16];

//��ִ������ʣ�p[i]��ʾ��i+1�Ĵ�������
double p[16];

//s�еĲ�ָ��ʣ�pro[i][j]��ʾ��i+1�����j+1��s�еĲ�ָ���
double pro[16][8];

//�м������temp[i]=p[0]*p[1]*...*p[i]
double temp[16];					

//����3-r��ʱ���м������������ʱ���浱ǰ�ֵĲ�ִ������ʣ�temp3=pro1*pro2*...*pro8
double temp3;

//������bit��ʽ,ֻ�����Ұ벿�����룬bit[i][j]��ʾ��i+1�ֵ�j+1������Ϣ��ȡֵ0��1
ElemType bit[16][32];	



//����
int r;

//ǰ������������¼��Ծs�е�λ�ã�s[i][j]��ʾ��i+1�ֵ�j+1����Ծs�е�λ�ã�ȡֵΪ-1-7��s[i][0]=-1
int s[2][9];

/*��ָ��ʷֲ���Ϊ�������㣬��ֵ��ȡ����֮��Ľ�������������и������ת��Ϊ��ӣ�P[i][j][k]��ʾ��i+1��s�У�
������Ϊj��������Ϊk�ĸ���*/
double P[8][64][16];

//�ļ�ָ��
FILE *fp;

//��ʱ������������r�����Ų��·����ʱ��
clock_t start[16], end[16];
 
#endif