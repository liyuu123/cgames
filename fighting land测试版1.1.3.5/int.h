#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<conio.h>
#include<iostream>
#include<Windows.h>
#include <algorithm>
#include<ctime>
using  namespace  std; 
char  mingzi[210000]/*��������*/,xiaobing[3][100]={"С֩��","����","ҰЫ��"}/*С����������*/,bossmz[3][100]={"֩����","����","��Ы"}/*boss��������*/;
char  shengtanmingzi[100][50]={"��������ض���ĳ����ӡ�,�ڽ�������Ѭ��","��С̯�ӵĳ����������������Ľ���","���ϸ��衱����������","�������������ñ�ӡ����о�����������������Ļ�"};//shengtanmingzi��boss����������¼� 
char  jinpingguo[100][40]={"����ƻ����","����������","�����ڵ��ϸ��衱","����ðҩ��","��ΰ�硱","������ҩ��","���ù�����","���ɿ�����","�����ڵĸ�ħ��ƻ����","���ջ��衱"};//jinpingguo�����������������Ʒ 
char  xingbiemingzi[100][10]={"��","Ů","����"};// xingbiemingzi��������Ա� 
char  zhiyemingzi[100][10]={"����","ҽ��ҽ��","�̿�","սʿ","������ʿ","ҩ��ʦ"};// zhiyemingzi�������ְҵ��
char  sxgjmingzi[210][50]={"����","����","��Ѫ����"};/*�����ĸ�������*/
char  sxfymingzi[210][50]={"Ӳ��","��"};/*�����ĸ�������*/
char  zhuanyongmingzi[5]={"��"};/*�����ר�ñ�ʾ����*/
char  fuzhupanduan/*���ʱ�ĸ����ж�*/;

int  renwu[50]/*��������*/,boss[50]/*boss����*/,bossmzi/*boss�����ǵڼ���*/,i[10]/*��ÿ�εĸ���*/,xingbiemingzii/*�Ա��ǵڼ���*/,zhiyemingzii/*ְҵ�������ǵڼ���*/;
/*boss��renwu������0�����ڵ�Ѫ����1��Ѫ�����ޡ�2�Ƿ�������3�ǹ�������4�ǻ�Ѫ����5�ǵȼ�
xiaobinga������0�ǵȼ���1��Ѫ�����ޣ�2�Ƿ�������3�ǹ�������4�ǳ�ΪС��ͷͷ�����ж��ټӳ�*/
int  bosssxhehe[100][10],renwusxhehe[100][10];
/*bosssxhehe��renwusxhehe��xiaobingsxhehe�ֱ��ʾboss�����������
[x]��[0]��ʾ��(x+1)�����⹥���ĳ�ʼ���ʣ�[1]��ʾ��(x+1)��ÿ������ʱ���⹥���ӵĸ��ʣ�[2]��ʾ��(x+1)�����⹥���������ʣ�[3]��ʾ��(x+1)�����⹥���ļӳ�
[4]��ʾ��(x+1)����������ĳ�ʼ���ʣ�[5]��ʾ��(x+1)��ÿ������ʱ��������ӵĸ��ʣ�[6]��ʾ��(x+1)����������������ʣ�[7]��ʾ��(x+1)����������ļӳ�*/
int  zjn[10],zjs[10],zjz[10];
/*
zjn��zjs��zjz��ʾÿ�����������boss��С���ӵĻ�������
zjn,zjz��zjs��0�����ڵ�Ѫ����1��Ѫ�����ޡ�2�ӷ�������3�ӹ�������4�ӻ�Ѫ��
*/
int  zs[20],teshugongji=1/*�������У�teshugongji+1�������⹥����1����ͨ����*/,teshufangyu=0/*�������У�teshufangyu+1�������������1����ͨ����*/;

int  m=43210/*�ڼ���*/,zhuangtai,tanchuang;//tanchuang��ʾ�Ƿ񿪵���    zhuangtai���ϻ�״̬

bool  bk=true,oxx[2];//bk���ж���Ϸ������û��oxx[0]���ж�����ɲ����Լ�Ѫ��û��1��boss

inline  bool  KEY_DOWN(int  x)
{
    return  ((GetAsyncKeyState(x) & 0x8000) ? 1:0);
}//�жϰ����Ķ��� 
inline  bool  notagain(char  ss[])
{
    return  ((MessageBox(NULL,ss,"ս����½",MB_YESNO+32))==6);
}//
inline  void  dengdai(int  x)
{
    Sleep(x);
    while (_kbhit())
    {
        char c = _getch();
    };/*�������Ϸ��ͷʱ��������ڻ������Ķ�������ֹ��BUG*/ 
} 

inline  int  shuri(int  x,int  y)/*�����x��y֮���һ����*/
{
    fuzhupanduan=getch();/*����*/
    printf("%c",fuzhupanduan);/*�����������ַ����*/
    while(fuzhupanduan>y+'0'  ||  fuzhupanduan<x+'0')/*������δ���뷶Χ�ڵ�����������������*/
    {
        if(fuzhupanduan!=' '  &&  fuzhupanduan!=13)printf("\nָ����������%d��%d������\n",x,y);
        fuzhupanduan=getch();
        printf("%c",fuzhupanduan);
        dengdai(0);
    }
    printf("\n");
    return  fuzhupanduan-'0';
}
