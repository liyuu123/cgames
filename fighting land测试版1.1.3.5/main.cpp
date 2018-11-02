#include "notgai.h"

void  gongjipd(int  bci/*防御者技能*/,int  bcj/*攻击者技能*/,int  renwuxx[]/*防御者属性*/,
int  renwuyy[]/*攻击者属性*/,int  xxxxx/*防御技能的加成*/,int  yyyyy/*攻击技能的加成*/,
char  mingzixx[]/*防御者的名字*/,char  mingziyy[]/*攻击者的名字*/,int  ox/*防御者的回血序列下标*/)
{
    zs[0]=Random(renwuxx[2]-renwuxx[2]/10,renwuxx[2]+renwuxx[2]/15);//防御者防御力
    zs[1]=Random(renwuyy[3]-renwuyy[3]/15,renwuyy[3]+renwuyy[3]/20);//攻击者攻击力
    zs[2]=0;//吸血攻击
    Sleep(100);
    //防御者 
    if(bci==0)zs[0]*=xxxxx/10;//格挡
    //攻击者 
    if(bcj==0)zs[1]*=yyyyy/10;//暴击
    else  if(bcj==1)zs[2]=(zs[1]-zs[0])*yyyyy/10;//吸血攻击
    printf("%s受到了%s的%s,",mingzixx,mingziyy,sxgjmingzi[bcj+1]);//进行攻击
    printf("%s使用“%s”,",mingzixx,sxfymingzi[bci+1]);//防御者进行防御
    if(zs[1]<=zs[0])printf("并没有扣血");//格挡大于攻击
    else
    {
        printf("%s扣了%d滴血",mingzixx,zs[1]-zs[0]);
        renwuxx[0]=renwuxx[0]-zs[1]+zs[0];
        if(ox<=1  &&  ox>=0)oxx[ox]=false;//标记敌人无法回血
    }
    if(zs[2]>0)
    {
        renwuyy[0]+=zs[2];
        if(renwuyy[0]>renwuyy[1])
        {
            zs[2]-=renwuyy[0]-renwuyy[1];
            renwuyy[0]=renwuyy[1];
        }//最多吸到满血
        if(zs[2]>0)
        {           
            printf(",%s又吸了%d滴血,%s扣了%d滴血",mingziyy,zs[2],mingzixx,zs[2]);
            renwuxx[0]=renwuxx[0]-zs[2];
            if(ox<=1  &&  ox>=0)oxx[ox]=false;//吸血之后让敌人无法回血
        }
    }
    printf("。\n");
    Sleep(200);
}
void  gongjishezhi(int  xxxx[][10]/*被攻击者属性*/,int  yyyy[][10]/*攻击者属性*/,int  renwuxxx[],
int  renwuyyy[],int  oxo/*防御者的回血序列下标*/,char  mingzixxx[]/*被攻击者名字*/,char  mingziyyy[]/*攻击者名字*/)
{
    int  teshui=-1,bci,teshuj=-1;
    for(bci=0;bci<=teshufangyu;bci++)
    {
        int  shuji=Random(1,10000);
        if(shuji<=xxxx[bci][4]){teshui=bci;break;}
    }//选取防御者防御技能
    for(bci=0;bci<=teshugongji;bci++)
    {
        int  shuji=Random(1,10000);
        if(shuji<=yyyy[bci][0]){teshuj=bci;break;}
    }//选取攻击者攻击技能
    gongjipd(teshui,teshuj,renwuxxx,renwuyyy,xxxx[teshui][7]/*传入防御属性*/,yyyy[teshuj][3]/*传入攻击属性*/,mingzixxx/*被攻击者名字*/,mingziyyy/*攻击者名字*/,oxo/*防御者的回血序列下标*/);
}

void  pd()
{
    system("cls");
    if(oxx[0]==true)
    {
        renwu[0]+=Random(renwu[4]-2,renwu[4]+3);
        if(renwu[0]>renwu[1])renwu[0]=renwu[1];
    }
    oxx[0]=true;/*人物加血*/
    if(oxx[1]==true)
    {
        boss[0]+=Random(boss[4]-3,boss[4]+3);
        if(boss[0]>boss[1])boss[0]=boss[1];
    }
    oxx[1]=true;/*boos加血*/
    if(renwu[0]<=renwu[1]/10*2)
    {

        system("color 4F");
        if(zhuangtai!=3)/*消去连续出现提示框的情况*/
        {
            if(tanchuang==1)
            {
                HWND hwnd=::GetForegroundWindow();
                MessageBox(hwnd,"你已经残血，建议回一区补血！","战斗大陆",MB_OK);/*出现提示框*/
            }
            zhuangtai=3;
        }
    }/*当人物血量小于20%时，背景变成红色*/
    else  if(renwu[0]<=renwu[1]/10*5)
    {
        system("color 6F");
        if(zhuangtai!=2)/*消去连续出现提示框的情况*/
        {
            if(tanchuang==1)
            {
                HWND hwnd=::GetForegroundWindow();
                MessageBox(hwnd,"你血量偏低，小心行事！","战斗大陆",MB_OK);/*出现提示框*/
            }
            zhuangtai=2;
        }
    }/*当人物血量小于50%大于20%时，背景变成黄色*/
    else
    {
        system("color 3F");
        if(zhuangtai!=1)/*消去连续出现提示框的情况*/
        {
            if(tanchuang==1)
            {
                HWND hwnd=::GetForegroundWindow();
                MessageBox(hwnd,"你血量偏高，适宜去冒险！","战斗大陆",MB_OK);/*出现提示框*/
            }
            zhuangtai=1;
        }
    }/*当人物血量大于50%时，背景变成绿色*/

    printf("%s的属性：\n等级：%d。\n血量：%d。\n血量上限：%d。\n防御力：%d。\n攻击力：%d。\n回血力：%d。\n性别:%s\n职业:%s\n\n\n\n%s的属性：\n等级：%d。\n血量：%d。\n血量上限：%d。\n防御力：%d。\n攻击力：%d。\n回血力：%d。\n",mingzi,renwu[5],renwu[0],renwu[1],renwu[2],renwu[3],renwu[4],xingbiemingzi[xingbiemingzii],zhiyemingzi[zhiyemingzii],bossmz[bossmzi],boss[5],boss[0],boss[1],boss[2],boss[3],boss[4]);
    printf("如果想结束冒险，请输入'0'。\n");
    printf("你好,你要去哪个地区？\n\n\n1区算是保护区，2区是新手区，3区一堆小兵，升级也高，4区容易怼boss\n\n   -------   -------   -------   -------\n   |     |   |     |   |     |   |     |\n   |  1  |   |  2  |   |  3  |   |  4  |\n   |     |   |     |   |     |   |     |\n   -------   -------   -------   -------\n");

    dengdai(0);
    m=shuri(0,4);
    if(m==0)return  ;
    iii();
    i[0]=Random(1,200);
    if(i[0]<=i[1])
    {
        int  jinpingguoi=Random(0,9),bencii=0;
        printf("获得%s，进行升级！\n",jinpingguo[jinpingguoi]);
        if(renwu[0]+zjn[0]<=renwu[1]+zjn[1])printf("%s升级了！\n等级：%d+1=%d。\n血量上限：%d+%d=%d。\n剩余血量：%d+%d=%d。\n防御力：%d+%d=%d。\n攻击力：%d+%d=%d。\n回血力：%d+%d=%d。\n",mingzi,renwu[5],renwu[5]+1,renwu[1],zjn[1],zjn[1]+renwu[1],renwu[0],zjn[0],zjn[0]+renwu[0],renwu[2],zjn[2],zjn[2]+renwu[2],renwu[3],zjn[3],zjn[3]+renwu[3],renwu[4],zjn[4],zjn[4]+renwu[4]); 
        else  printf("%s升级了！\n等级：%d+1=%d。\n血量上限：%d+%d=%d。\n剩余血量：%d+%d=%d。\n防御力：%d+%d=%d。\n攻击力：%d+%d=%d。\n回血力：%d+%d=%d。\n",mingzi,renwu[5],renwu[5]+1,renwu[1],zjn[1],zjn[1]+renwu[1],renwu[0],renwu[1]-renwu[0]+zjn[1],renwu[1]+zjn[1],renwu[2],zjn[2],zjn[2]+renwu[2],renwu[3],zjn[3],zjn[3]+renwu[3],renwu[4],zjn[4],zjn[4]+renwu[4]); 
        renwu[0]+=zjn[0];
        renwu[1]+=zjn[1];
        renwu[2]+=zjn[2];
        renwu[3]+=zjn[3];
        renwu[4]+=zjn[4];
        renwu[5]++;//将人物升级
        if(renwu[0]>renwu[1])renwu[0]=renwu[1];//防止暴血
        int  bci=0;
        for(bci=1;bci<=teshugongji+1;bci++)
        {
            renwusxhehe[bci-1][0]+=renwusxhehe[bci-1][1];
            if(renwusxhehe[bci-1][0]>renwusxhehe[bci-1][2])renwusxhehe[bci-1][0]=renwusxhehe[bci-1][2];
        }//升级攻击
        for(bci=1;bci<=teshufangyu+1;bci++)
        {
            renwusxhehe[bci-1][4]+=renwusxhehe[bci-1][5];
            if(renwusxhehe[bci-1][4]>renwusxhehe[bci-1][6])renwusxhehe[bci-1][4]=renwusxhehe[bci-1][6];
        }//升级防御
        dengdai(250);
    }
    else  if(i[0]<=i[2]  &&  i[0]>=i[1]+1)//巨人先手攻击
    {
        printf("%s出现了，你们俩互相伤害!\n",bossmz[bossmzi]);
        gongjishezhi(renwusxhehe,bosssxhehe,renwu,boss,0,zhuanyongmingzi,bossmz[bossmzi]);//巨人攻击
        gongjishezhi(bosssxhehe,renwusxhehe,boss,renwu,1,bossmz[bossmzi],zhuanyongmingzi);//人物攻击
        dengdai(250);
    }
    else  if(i[0]>=i[2]+1  &&  i[0]<=i[3])
    {
        printf("你很安全。\n");
        dengdai(250);
    }
    else  if(i[0]>=i[3]+1  &&  i[0]<=i[4])
    {
        int  shengtanmingzii=Random(0,3);
        printf("告诉你一个坏消息，%s找到%s，进行升级！\n",bossmz[bossmzi],shengtanmingzi[shengtanmingzii]);
        if(boss[0]+zjs[0]<=boss[1]+zjs[1])printf("%s升级了！\n等级：%d+1=%d。\n血量上限：%d+%d=%d。\n剩余血量：%d+%d=%d。\n防御力：%d+%d=%d。\n攻击力：%d+%d=%d。\n回血力：%d+%d=%d。\n",bossmz[bossmzi],boss[5],boss[5]+1,boss[1],zjs[1],zjs[1]+boss[1],boss[0],zjs[0],zjs[0]+boss[0],boss[2],zjs[2],zjs[2]+boss[2],boss[3],zjs[3],zjs[3]+boss[3],boss[4],zjs[4],zjs[4]+boss[4]); 
        else  printf("%s升级了！\n等级：%d+1=%d。\n血量上限：%d+%d=%d。\n剩余血量：%d+%d=%d。\n防御力：%d+%d=%d。\n攻击力：%d+%d=%d。\n回血力：%d+%d=%d。\n",bossmz[bossmzi],boss[5],boss[5]+1,boss[1],zjs[1],zjs[1]+boss[1],boss[0],boss[1]-boss[0]+zjs[1],boss[1]+zjs[1],boss[2],zjs[2],zjs[2]+boss[2],boss[3],zjs[3],zjs[3]+boss[3],boss[4],zjs[4],zjs[4]+boss[4]); 
        boss[0]+=zjs[0];
        boss[1]+=zjs[1];
        boss[2]+=zjs[2];
        boss[3]+=zjs[3];
        boss[4]+=zjs[4];
        boss[5]++;//属性增加
        int  bci=0;
        for(bci=1;bci<=teshugongji+1;bci++)
        {
            bosssxhehe[bci-1][0]+=bosssxhehe[bci-1][1];
            if(bosssxhehe[bci-1][0]>bosssxhehe[bci-1][2])bosssxhehe[bci-1][0]=bosssxhehe[bci-1][2];
        }//增加攻击
        for(bci=1;bci<=teshufangyu+1;bci++)
        {
            bosssxhehe[bci-1][4]+=bosssxhehe[bci-1][5];
            if(bosssxhehe[bci-1][4]>bosssxhehe[bci-1][6])bosssxhehe[bci-1][4]=bosssxhehe[bci-1][6];
        }//增加防御
        dengdai(250);
    }
    else  if(i[0]>=i[4]+1)
    {
        int  kx=Random(renwu[1]/100,renwu[1]/30);
        printf("%s的一大群%s向你冲了过来，你扣了%d滴血！\n",bossmz[bossmzi],xiaobing[bossmzi],kx); 
        renwu[0]-=kx;
        oxx[0]=false;
        dengdai(250);
    }
    if(renwu[0]<=0)
    {
        getch();
        system("cls");
        system("color 3F");
        printf("你血量流失过多，晕了。\n");
        printf("醒来时，你发现你躺在医院的床上。\n");
        printf("真是一趟神奇的冒险！\n");
        bk=false;
        dengdai(250);
    }
    if(boss[0]<=0)
    {
        getch();
        system("cls");
        system("color 3F");
        printf("恭喜你，成功击败%s！\n",bossmz[bossmzi]);
        printf("祝贺你，你成为了高级探险员和高级勇士。\n");
        bk=false;
        dengdai(250);
    }
    getch();
    return  ;
}
int  main()
{
    srand(time(0));
    first_game();
    while(m!=0)
    {
        if(bk==true)pd();
        else  break;
    }
    if(bk==true)
    {
        getch();
        system("cls");
        printf("勇敢的你在这次冒险中存活了下来，但你没击败boss。\n");
        dengdai(300);
    }
    getch();
    return  0;
}
