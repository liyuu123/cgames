#include "int.h"

int  Random(int  q,int  p)//在q-p（q《=p）之间取个随机数
{
    if(q>p){int  t=q;q=p;p=t;}
    int  pos=q,dis=p-q+1;
    int  Ranfmax=rand()%10+1,cpu;//随机循环次数
    for(int  i=1;i<=Ranfmax;i++)cpu=rand()%dis+pos;
    return  cpu;
}
void  mingziii()
{
    int  nmcd/*输入时名字的长度*/;
    while(1)/*可以多次输入*/
    {
        dengdai(0);
        memset(mingzi,'\0',sizeof(mingzi));
        gets(mingzi);
        nmcd=strlen(mingzi);
        if(nmcd>50)printf("名字最多只能有50个字母（中文字算两个字母，符号算一个）\n"); 
        else  if(nmcd!=0)break;
    }
}

void  cpy()//初始化
{
    if(xingbiemingzii==0){renwu[0]=renwu[1]=160;renwu[2]=8;renwu[3]=11;renwu[4]=3;xingbiemingzii=0;}//男 
    else  if(xingbiemingzii==1){renwu[0]=renwu[1]=120;renwu[2]=7;renwu[3]=13;renwu[4]=4;xingbiemingzii=1;}//女 
    else  if(xingbiemingzii==2){renwu[0]=renwu[1]=140;renwu[2]=5;renwu[3]=11;renwu[4]=7;xingbiemingzii=2;}//人妖
     //给予人物基本的属性 

    if(zhiyemingzii==0)
    {renwusxhehe[0][0]=10;  renwusxhehe[0][1]=2;  renwusxhehe[0][2]=200;  renwusxhehe[0][3]=15;
    renwusxhehe[0][4]=90;  renwusxhehe[0][5]=8;  renwusxhehe[0][6]=1200;  renwusxhehe[0][7]=30;
    renwusxhehe[1][0]=10;  renwusxhehe[1][1]=4;  renwusxhehe[1][2]=400;  renwusxhehe[1][3]=3;//特殊属性 

    zjn[1]=70;zjn[2]=4;zjn[3]=3;zjn[4]=2;zjn[0]=10;}/*升级属性*//*胖子*/

    else  if(zhiyemingzii==1)
    {renwusxhehe[0][0]=15;  renwusxhehe[0][1]=4;  renwusxhehe[0][2]=500;  renwusxhehe[0][3]=25;
    renwusxhehe[0][4]=15;  renwusxhehe[0][5]=3;  renwusxhehe[0][6]=500;  renwusxhehe[0][7]=14;
    renwusxhehe[1][0]=70;  renwusxhehe[1][1]=12;  renwusxhehe[1][2]=1200;  renwusxhehe[1][3]=7;//特殊属性

    zjn[1]=40;zjn[2]=2;zjn[3]=5;zjn[4]=2;zjn[0]=90;}/*升级属性*//*医疗医生*/

    else  if(zhiyemingzii==2)
    {renwusxhehe[0][0]=50;  renwusxhehe[0][1]=10;  renwusxhehe[0][2]=1000;  renwusxhehe[0][3]=40;
    renwusxhehe[0][4]=10;  renwusxhehe[0][5]=2;  renwusxhehe[0][6]=850;  renwusxhehe[0][7]=12;
    renwusxhehe[1][0]=30;  renwusxhehe[1][1]=7;  renwusxhehe[1][2]=3000;  renwusxhehe[1][3]=5;//特殊属性

    zjn[1]=30;zjn[2]=1;zjn[3]=7;zjn[4]=1;zjn[0]=15;}/*升级属性*//*刺客*/

    else  if(zhiyemingzii==3)
    {renwusxhehe[0][0]=35;  renwusxhehe[0][1]=6;  renwusxhehe[0][2]=600;  renwusxhehe[0][3]=30;
    renwusxhehe[0][4]=80;  renwusxhehe[0][5]=9;  renwusxhehe[0][6]=1500;  renwusxhehe[0][7]=28;
    renwusxhehe[1][0]=25;  renwusxhehe[1][1]=5;  renwusxhehe[1][2]=300;  renwusxhehe[1][3]=4;//特殊属性

    zjn[1]=55;zjn[2]=3;zjn[3]=6;zjn[4]=2;zjn[0]=20;}/*升级属性*//*战士*/

    else  if(zhiyemingzii==4)
    {renwusxhehe[0][0]=20;  renwusxhehe[0][1]=7;  renwusxhehe[0][2]=700;  renwusxhehe[0][3]=25;
    renwusxhehe[0][4]=120;  renwusxhehe[0][5]=12;  renwusxhehe[0][6]=1777;  renwusxhehe[0][7]=35;
    renwusxhehe[1][0]=10;  renwusxhehe[1][1]=3;  renwusxhehe[1][2]=400;  renwusxhehe[1][3]=4;//特殊属性

    zjn[1]=60;zjn[2]=7;zjn[3]=2;zjn[4]=1;zjn[0]=25;}/*升级属性*//*铠甲勇士*/

    else  if(zhiyemingzii==5)
    {renwusxhehe[0][0]=25;  renwusxhehe[0][1]=6;  renwusxhehe[0][2]=450;  renwusxhehe[0][3]=25;
    renwusxhehe[0][4]=10;  renwusxhehe[0][5]=1;  renwusxhehe[0][6]=400;  renwusxhehe[0][7]=16;
    renwusxhehe[1][0]=50;  renwusxhehe[1][1]=6;  renwusxhehe[1][2]=1050;  renwusxhehe[1][3]=6;//特殊属性

    zjn[1]=30;zjn[2]=2;zjn[3]=4;zjn[4]=4;zjn[0]=15;}/*升级属性*//*药剂师*/

    if(bossmzi==0)
    {boss[0]=boss[1]=500;boss[2]=15;boss[3]=17;boss[4]=9;bossmzi=0;//给予boss基础属性 

    bosssxhehe[0][0]=40;   bosssxhehe[0][1]=5;   bosssxhehe[0][2]=800;   bosssxhehe[0][3]=35;
    bosssxhehe[0][4]=60;   bosssxhehe[0][5]=6;   bosssxhehe[0][6]=800;   bosssxhehe[0][7]=20;
    bosssxhehe[1][0]=100; bosssxhehe[1][1]=15;   bosssxhehe[1][2]=1000;   bosssxhehe[1][3]=8;//特殊属性

    zjs[1]=120;zjs[2]=3;zjs[3]=7;zjs[4]=2;zjs[0]=35;/*升级属性*//*蜘蛛王*/

    /*小蜘蛛*/}

    else  if(bossmzi==1)
    {boss[0]=boss[1]=1000;boss[2]=17;boss[3]=15;boss[4]=6;bossmzi=1;//给予boss基础属性 

    bosssxhehe[0][0]=30;   bosssxhehe[0][1]=7;   bosssxhehe[0][2]=500;   bosssxhehe[0][3]=25;
    bosssxhehe[0][4]=200;   bosssxhehe[0][5]=20;   bosssxhehe[0][6]=2000;   bosssxhehe[0][7]=60;
    bosssxhehe[1][0]=40;  bosssxhehe[1][1]=9;   bosssxhehe[1][2]=666;   bosssxhehe[1][3]=3;//特殊属性

    zjs[1]=150;zjs[2]=5;zjs[3]=4;zjs[4]=4;zjs[0]=70;/*升级属性*//*巨人*/

    /*树人*/}

    else  if(bossmzi==2)
    {boss[0]=boss[1]=750;boss[2]=12;boss[3]=20;boss[4]=7;bossmzi=2;//给予boss基础属性 

    bosssxhehe[0][0]=100;   bosssxhehe[0][1]=12;   bosssxhehe[0][2]=1500;   bosssxhehe[0][3]=50;
    bosssxhehe[0][4]=30;   bosssxhehe[0][5]=3;   bosssxhehe[0][6]=400;   bosssxhehe[0][7]=15;
    bosssxhehe[1][0]=60;  bosssxhehe[1][1]=13;   bosssxhehe[1][2]=1500;   bosssxhehe[1][3]=9;//特殊属性

    zjs[1]=100;zjs[2]=2;zjs[3]=10;zjs[4]=2;zjs[0]=25;/*升级属性*//*大钩蝎*/

    /*野蝎子*/}
    boss[5]=1;renwu[5]=1;//谁一开始等级都为一 
}

void  juqing()/*剧情*/
{
    system("cls");
    printf("bi____，剧情被终结\n");
    dengdai(1500);
}

void  iii()
{
    if(m==1){i[1]=0;i[2]=4;i[3]=170;i[4]=172;}
    else  if(m==2){i[1]=6;i[2]=21;i[3]=80;i[4]=81;}
    else  if(m==3){i[1]=10;i[2]=40;i[3]=100;i[4]=105;}
    else  if(m==4){i[1]=7;i[2]=140;i[3]=140;i[4]=143;}
}/*根据去几区决定每种情况的可能性*/

void  first_game()
{
    HWND hwnd=GetForegroundWindow();
    MoveWindow(hwnd,400,0,0,0,0);//第二个是窗口纵坐标，第三个是窗口横坐标，后面三个数不要动，这两条指令是调整窗口出现位置
    system("mode con cols=100 lines=70");//cols是宽   lines是长 
    system("color 3F");
    printf("\n\n\n\n\n\n---------------------------------此游戏是战斗大陆V1.1.3.5版本。-----------------------------------\n");
    printf("-----------------------------------相对以前，更改了：---------------------------------------------\n");
    printf("--------------------------------------1.简洁的操作。----------------------------------------------\n");
    printf("--------------------------------------2.增加弹窗。------------------------------------------------\n");
    printf("--------------------------------------3.部分的游戏平衡性调整。------------------------------------\n");
    printf("--------------------------------------4.强化小兵。------------------------------------------------\n");
    printf("------------------------------------希望大家玩的愉快。--------------------------------------------\n");//更新提示 
    getch();
    system("cls");
    printf("作者：战斗大陆工作室。作者（zjj-monkey）在不断升级中。\n\n\n\n注意：玩游戏时最好不要玩超过两小时，否则可能会视为破坏游戏规定，开启游戏保护模式并出现众多BUG！");
    getch();

    system("cls");
    printf("\n\n\n---------------------------------------------您的名字-------------------------------------------\n");
    printf("注:名字最多只能有50个字母（中文字算两个字母，符号算一个，不能有空格）\n");
    mingziii();//输入名字 
    printf("\n\n\n\n您目前的名字为：%s。\n",mingzi);
    dengdai(800);

    system("cls");
    if(notagain("是否在战斗中开弹窗提示？\n")==true){tanchuang=1;printf("你选择了开弹窗\n");}
    else  {tanchuang=0;printf("你选择了不开弹窗\n");}
    dengdai(800);  

    system("cls");
    printf("请告诉我您的性别：1.男  2.女  3.人妖（只用输入序号，如‘1’、‘2’、‘3’）。\n男的防御力强。\n女的攻击力强。\n人妖的回血力强。\n");
    printf("注：所有人物有血量限制，不能无限回血，最多回到血量上限，每个角色有初始的血量，性别决定初始属性。\n");
    xingbiemingzii=shuri(1,3)-1;
    printf("您已选择性别:%s\n",xingbiemingzi[xingbiemingzii]);
    dengdai(800);

    system("cls");
    printf("请告诉我您的职业：");
    for(i[0]=0;i[0]<=5;i[0]++)printf("%d.%s   ",i[0]+1,zhiyemingzi[i[0]]);
    printf("\n\n注：职业直接影响升级时的加成\n\n");
    zhiyemingzii=shuri(1,6)-1;
    printf("您已选择职业：%s\n",zhiyemingzi[zhiyemingzii]);
    dengdai(800);
    //选职业 

    dengdai(0);

    system("cls");
    printf("请选择冒险的地点:1.蜘蛛洞穴  2.巨人森林。  3.蝎佳沙漠。\n");
    bossmzi=shuri(1,3)-1;
    printf("你选择了想要挑战的boss：%s\n",bossmz[bossmzi]);
    dengdai(800);

    cpy();//初始化 
    system("cls");

    if(notagain("您是否看剧情？\n")==true)juqing();

    zhuangtai=1; //开局满血，老铁 
}
