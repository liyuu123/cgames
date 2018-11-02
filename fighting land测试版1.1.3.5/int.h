#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<conio.h>
#include<iostream>
#include<Windows.h>
#include <algorithm>
#include<ctime>
using  namespace  std; 
char  mingzi[210000]/*人物名字*/,xiaobing[3][100]={"小蜘蛛","树人","野蝎子"}/*小兵名字序列*/,bossmz[3][100]={"蜘蛛王","巨人","大钩蝎"}/*boss名字序列*/;
char  shengtanmingzi[100][50]={"“作者珍藏多年的臭袜子”,在进行自我熏陶","“小摊子的臭豆腐”，吃了身心健康","“老干妈”，辣到心酸","“隔壁王叔的绿帽子”，研究后明白了许多人类文化"};//shengtanmingzi是boss升级的随机事件 
char  jinpingguo[100][40]={"“金苹果”","“臭豆腐”","“过期的老干妈”","“感冒药”","“伟哥”","“避孕药”","“济公丹”","“巧克力”","“过期的附魔金苹果”","“菊花茶”"};//jinpingguo是人物升级的随机物品 
char  xingbiemingzi[100][10]={"男","女","人妖"};// xingbiemingzi是人物的性别 
char  zhiyemingzi[100][10]={"胖子","医疗医生","刺客","战士","铠甲勇士","药剂师"};// zhiyemingzi是人物的职业名
char  sxgjmingzi[210][50]={"攻击","爆击","吸血攻击"};/*攻击的各种名字*/
char  sxfymingzi[210][50]={"硬抗","格挡"};/*防御的各种名字*/
char  zhuanyongmingzi[5]={"你"};/*人物的专用表示数组*/
char  fuzhupanduan/*输出时的辅助判断*/;

int  renwu[50]/*人物属性*/,boss[50]/*boss属性*/,bossmzi/*boss名字是第几个*/,i[10]/*存每次的概率*/,xingbiemingzii/*性别是第几个*/,zhiyemingzii/*职业的名字是第几个*/;
/*boss、renwu数组中0是现在的血量、1是血量上限、2是防御力、3是攻击力、4是回血力、5是等级
xiaobinga数组中0是等级，1是血量上限，2是防御力，3是攻击力，4是成为小兵头头的人有多少加成*/
int  bosssxhehe[100][10],renwusxhehe[100][10];
/*bosssxhehe、renwusxhehe、xiaobingsxhehe分别表示boss、人物的属性
[x]：[0]表示第(x+1)个特殊攻击的初始几率，[1]表示第(x+1)个每次升级时特殊攻击加的概率，[2]表示第(x+1)个特殊攻击的最大概率，[3]表示第(x+1)个特殊攻击的加成
[4]表示第(x+1)个特殊防御的初始几率，[5]表示第(x+1)个每次升级时特殊防御加的概率，[6]表示第(x+1)个特殊防御的最大概率，[7]表示第(x+1)个特殊防御的加成*/
int  zjn[10],zjs[10],zjz[10];
/*
zjn、zjs和zjz表示每次升级给人物、boss和小兵加的基础属性
zjn,zjz和zjs：0加现在的血量、1加血量上限、2加防御力、3加攻击力、4加回血力
*/
int  zs[20],teshugongji=1/*代表了有（teshugongji+1）个特殊攻击和1个普通攻击*/,teshufangyu=0/*代表了有（teshufangyu+1）个特殊防御和1个普通防御*/;

int  m=43210/*第几区*/,zhuangtai,tanchuang;//tanchuang表示是否开弹窗    zhuangtai是上回状态

bool  bk=true,oxx[2];//bk是判断游戏结束了没，oxx[0]是判断人物可不可以加血了没，1是boss

inline  bool  KEY_DOWN(int  x)
{
    return  ((GetAsyncKeyState(x) & 0x8000) ? 1:0);
}//判断按键的定义 
inline  bool  notagain(char  ss[])
{
    return  ((MessageBox(NULL,ss,"战斗大陆",MB_YESNO+32))==6);
}//
inline  void  dengdai(int  x)
{
    Sleep(x);
    while (_kbhit())
    {
        char c = _getch();
    };/*清除在游戏开头时玩家输入在缓存区的东西，防止出BUG*/ 
} 

inline  int  shuri(int  x,int  y)/*输入从x到y之间的一个数*/
{
    fuzhupanduan=getch();/*输入*/
    printf("%c",fuzhupanduan);/*将玩家输入的字符输出*/
    while(fuzhupanduan>y+'0'  ||  fuzhupanduan<x+'0')/*如果玩家未输入范围内的数，叫他重新输入*/
    {
        if(fuzhupanduan!=' '  &&  fuzhupanduan!=13)printf("\n指令错误，请输出%d到%d的数字\n",x,y);
        fuzhupanduan=getch();
        printf("%c",fuzhupanduan);
        dengdai(0);
    }
    printf("\n");
    return  fuzhupanduan-'0';
}
