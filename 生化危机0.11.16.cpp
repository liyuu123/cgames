//0.11.16 
#include<windows.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int n,round,gold=0;
bool f1,f2,f3,dead=false;
struct node1
{
    int hp;
    int maxhp; 
    int exp;
    int atk;
    int def;
}steve;
struct node2
{
    int hp;
    int atk;
    int def;
    int exp;
    int lev;
    int poisonous_atk;
    int poisonous_round;
    bool nodie;
    bool poisonous;
}zombie;
struct Quickly
{
	int Quick_speed;
	int Quick_round;
	int Quick_zombie;
}Quick;
void Level_1()
{
	steve.atk=10;
	steve.hp=50;
	steve.maxhp=50;
	steve.exp=0;
	steve.def=1;
	system("cls");
	printf("第一章 起源");
    Sleep(2000);
    system("cls");
    printf("8月21日,你出差到H市回来,感觉哪里都是空荡荡的");
    getchar();
    system("cls");
	printf("你坐上去往公司的地铁,却发现地铁里没有人");
    getchar();
    system("cls");
    printf("早上7:00,地铁里空荡荡的,但在平时,地铁上几乎是人挤人");
    getchar();
    system("cls");
    printf("你:真奇怪,为什么今天地铁上没有人?");
    getchar();
    system("cls");
    printf("8:00,你进了公司,发现里面根本就没人,并且公司漆黑一片");
    getchar();
    system("cls");
    printf("你借着手机屏幕的亮光找到了电梯,并找到了你的办公室");
    getchar();
    system("cls");
    printf("你:咋真么黑还没有人开灯啊");
    getchar();
    system("cls");
    printf("你(大喊):有人吗!有人倒是说句话啊!");
    getchar();
    system("cls");
    printf("然而,走廊空空荡荡的,没有一个人");
    getchar();
    system("cls");
    printf("你:哎,还是先把灯打开,在想办法吧");
    getchar();
    system("cls");
    printf("按下开关,走廊的灯眨眼间亮了");
    getchar();
    system("cls");
    printf("忽然,一只手搭在了你的背后!");
    getchar();
    system("cls");
    printf("你:啊!你是什么人!别过来!");
    getchar();
    system("cls");
    printf("呃~~~~~~");
    getchar();
    system("cls");
    printf("按任意键开始战斗");
    getchar();
    zombie.hp=30;
    zombie.atk=6;
    zombie.def=0;
    zombie.exp=8;
    zombie.lev=1;
    zombie.nodie=true;
    system("cls");
    printf("敌人信息:\n");
    printf("敌人:僵尸    等级:%d\n",zombie.lev);
    printf("血量:%d    伤害:%d    防御:%d    击杀可获得%d经验\n",zombie.hp,zombie.atk,zombie.def,zombie.exp);
    Sleep(4000);
    system("cls");
    while(steve.hp>0 && zombie.hp>0)
    {
        printf("敌人:僵尸 等级%d\n",zombie.lev);
        printf("你的血量:%d    僵尸血量:%d\n",steve.hp,zombie.hp);
        printf("武器:\n");
        printf("1| 普通攻击 10伤害 攻速1\n");
        scanf("%d",&n);
        if(n==1)
        {
            printf("你对僵尸造成了%d伤害\n",steve.atk-zombie.def);
            zombie.hp=zombie.hp-(steve.atk-zombie.def);
        }
        else printf("无效输入\n");
        Sleep(1000);
        if(zombie.hp<=0) break;
        printf("僵尸对你造成了%d伤害\n",zombie.atk-steve.def);
        steve.hp=steve.hp-(zombie.atk-steve.def);
        Sleep(1000);
        system("cls");
    }
    system("cls");
    if(steve.hp<=0)
    {
        printf("你死了,请重新来过(5秒后结束)");
        Sleep(5000);
        return;
    }
    if(zombie.hp<=0)
    {
        printf("恭喜击杀[%d级僵尸]\n",zombie.lev);
        printf("获得经验:%d\n",zombie.exp);
        steve.exp+=zombie.exp;
        printf("2秒后继续\n");
        Sleep(2000);
    }
    system("cls");
    printf("你杀死僵尸后,在走廊尽头出现了一群僵尸!");
    getchar();
    getchar();
    system("cls");
    printf("1| 躲进你的办公室\n2| 和它们拼了!\n");
    scanf("%d",&n);
    if(n==2)
    {
    	system("cls");
    	printf("由于你寡不敌众,你的体力渐渐不支,最终倒在了僵尸脚下\n");
    	Sleep(2000);
    	printf("5秒后退出游戏");
    	Sleep(5000);
    	return;
	}
    system("cls");
    printf("外面的喊声渐渐远去,你缓缓地走出了办公室");
    getchar();
    getchar(); 
    system("cls");
    printf("这是你才发现,僵尸的数量远比你想想的要多!");
    getchar();
    system("cls");
    printf("第一章 起源 完\n");
    printf("恭喜完成第一章,奖励金币50");
    gold+=50;
    Sleep(2000);
    system("cls");
    return;
}
void Level_2()
{
	system("cls");
	f1=false;f2=false;f3=false;
	steve.def=1;
	steve.exp=8;
	steve.atk=30;
	steve.maxhp=50;
	steve.hp=40;
	printf("第二章 公司逃生");
	Sleep(2000);
	system("cls");
	printf("地点-公司14层 时间10:00");
    getchar();
    system("cls");
	printf("你站在空荡荡的走廊里,望着楼梯口的方向");
    getchar();
    system("cls");
    printf("你:这样下去也不是办法啊,迟早要被僵尸打死");
    getchar();
    system("cls");
    printf("你:还是找找有什么东西吧");
    getchar();
    system("cls");
    while(1)
    {
    	printf("提示:在周围探索(建议把所有地点找一遍)\n");
		printf("1| 走廊墙角下的箱子\n");
		printf("2| 药盒\n");
		printf("3| 你的办公室\n");
		printf("4| 离开\n");
		scanf("%d",&n);
		if(n==1)
		{
			system("cls");
			if(f1) printf("这里已经没有特别的东西了");
			else
			{
				printf("获得[铁棍],伤害+20");
				steve.atk+=20; 
				f1=true; 
			}
		}
		if(n==2)
		{
			system("cls");
			if(f2) printf("这里已经没有特别的东西了");
			else
			{
				printf("获得[碘伏],血量+10");
				steve.hp+=10;
				f2=true; 
			} 
		}
		if(n==3)
		{
			system("cls");
			if(f3) printf("这里已经没有特别的东西了");
			else
			{
				printf("获得[你的公文包]");
				f3=true; 
			}
		}
		if(n==4) break;
		Sleep(2000);
		system("cls");
	}
	getchar();
	system("cls");
    printf("你:好了,东西都收拾好了,该下去了,下面一定有很多僵尸");
    getchar();
    system("cls");
    printf("可想而知,你在楼梯口遇到一只僵尸");
    getchar();
    system("cls");
    printf("按任意键开始战斗");
    getchar();
    zombie.hp=90;
    zombie.atk=11;
    zombie.def=5;
    zombie.exp=24;
    zombie.lev=3;
    zombie.nodie=true;
    system("cls");
    round=1;
    printf("敌人信息:\n");
    printf("敌人:僵尸    等级:%d\n",zombie.lev);
    printf("血量:%d    伤害:%d    防御:%d    击杀可获得%d经验\n",zombie.hp,zombie.atk,zombie.def,zombie.exp);
    Sleep(4000);
    system("cls");
    while(steve.hp>0 && zombie.hp>0)
    {
        printf("敌人:僵尸 等级%d\n",zombie.lev);
        printf("你的血量:%d 僵尸血量:%d\n",steve.hp,zombie.hp);
        printf("武器:\n");
        printf("1| 普通攻击 %d伤害,攻速1\n",steve.atk);
        printf("2| 铁棍 55伤害,攻速2\n");
        scanf("%d",&n);
        if(n==1)
        {
            printf("你对僵尸造成了%d伤害\n",steve.atk-zombie.def);
            zombie.hp=zombie.hp-(steve.atk-zombie.def);
            if(zombie.hp<=0) break;
        }
        else if(n==2)
        {
        	if(!f1) printf("你未获得此道具"); 
        	else if(round%2==1)
        	{
        		printf("你对僵尸造成了%d伤害\n",55-zombie.def);
        		zombie.hp=zombie.hp-(55-zombie.def);
        		if(zombie.hp<=0) break;
			}
        	else printf("攻击冷却中\n"); 
		}
        else printf("无效输入\n");
        Sleep(1000);
        if(zombie.hp<=0) break;
        printf("僵尸对你造成了%d伤害\n",zombie.atk-steve.def);
        steve.hp=steve.hp-(zombie.atk-steve.def);
        Sleep(1000);
        round++;
        system("cls");
    }
    system("cls");
    if(steve.hp<=0)
    {
        printf("你死了,请重新来过(5秒后结束)");
        Sleep(5000);
        return;
    }
    if(zombie.hp<=0)
    {
        printf("恭喜击杀[%d级僵尸]\n",zombie.lev);
        printf("获得经验:%d\n",zombie.exp);
        steve.exp+=zombie.exp;
        printf("2秒后继续\n");
        Sleep(2000);
    }
    system("cls");
    printf("呵呵不错嘛^_^,能闯到这里,这里有一些小礼物给你");
	getchar();
	getchar();
	system("cls");
    printf("1| 血量上限增加至75\n");
    steve.maxhp=75;
	getchar();
	system("cls");
    printf("2| 血量补满");
    steve.hp=steve.maxhp;
	getchar();
	system("cls");
    printf("好了一路顺风,拜拜^_^");
	getchar();
	system("cls");
    printf("按任意键查看属性");
    getchar();
	system("cls");
    printf("血量:%d/%d\n",steve.hp,steve.maxhp);
    printf("伤害:%d\n",steve.atk);
    printf("防御:%d\n",steve.def);
    printf("经验:%d\n",steve.exp);
    getchar();
    system("cls");
    printf("地点:公司12层,仓库\n时间:12:00");
    getchar();
    system("cls");
    printf("你:还是找找有没有吃的吧");
    getchar();
    system("cls");
    printf("提示:在周围探索");
    getchar();
    system("cls");
    f1=false;f2=false;f3=false;
    while(1)
    {
    	printf("提示:在周围探索(建议把所有地点找一遍)\n");
		printf("1| 休息室\n");
		printf("2| 药剂室\n");
		printf("3| 货架\n");
		printf("4| 离开\n");
		scanf("%d",&n);
		if(n==1)
		{
			system("cls");
			if(f1) printf("这里已经没有特别的东西了");
			else
			{
				printf("获得[雨衣],防御+9");
				steve.def+=9;
				f1=true; 
			} 
		}
		if(n==2)
		{
			system("cls");
			if(f2) printf("这里已经没有特别的东西了");
			else
			{
				printf("获得[硫酸瓶]x3,伤害+40");
				steve.atk+=40;
				f2=true;
			} 
		}
		if(n==3)
		{
			system("cls");
			if(f3) printf("这里已经没有特别的东西了");
			else
			{
				printf("获得[带钉子的木板],伤害+30");
				steve.atk+=30;
				f3=true; 
			}
		}
		if(n==4) break;
		Sleep(2000);
		system("cls");
	}
	system("cls");
    printf("咚!!当!!!");
    getchar();
    getchar();
    system("cls");
    printf("呃~~~~~~");
    getchar();
    system("cls");
    printf("按任意键开始战斗");
    getchar();
    system("cls");
    round=1;
    zombie.atk=20;
    zombie.hp=800;
    zombie.def=20;
    zombie.exp=80;
    zombie.lev=7;
    printf("敌人信息:\n");
    printf("敌人:僵尸    等级:%d\n",zombie.lev);
    printf("血量:%d    伤害:%d    防御:%d    击杀可获得%d经验\n",zombie.hp,zombie.atk,zombie.def,zombie.exp);
    Sleep(4000);
    system("cls");
    int remain=3;
    while(steve.hp>0 && zombie.hp>0)
    {
        printf("敌人:僵尸 等级%d\n",zombie.lev);
        printf("你的血量:%d/%d 僵尸血量:%d\n",steve.hp,steve.maxhp,zombie.hp);
        printf("武器:\n");
		printf("1| 普通攻击 %d伤害,攻速1\n",steve.atk);
		printf("2| 铁棍 80伤害,攻速1\n");
		printf("3| 带钉子的木板 100伤害 攻速2\n");
		printf("4| 硫酸瓶 240伤害 攻速1\n");
		printf("小提示:药剂类武器无视僵尸防御值\n");
		scanf("%d",&n);
        if(n==1)
        {
            printf("你对僵尸造成了%d伤害\n",steve.atk-zombie.def);
            zombie.hp=zombie.hp-(steve.atk-zombie.def);
            if(zombie.hp<=0) break;
        }
        else if(n==2)
        {
			printf("你对僵尸造成了%d伤害\n",60-zombie.def);
        	zombie.hp=zombie.hp-(60-zombie.def);
        	if(zombie.hp<=0) break;
		}
		else if(n==3)
		{
			if(!f3) printf("你尚未获得此道具\n"); 
			else if(round%2==1)
        	{
        		printf("你对僵尸造成了%d点伤害\n",90-zombie.def);
        		zombie.hp=zombie.hp-(90-zombie.def);
        		if(zombie.hp<=0) break;
			}
        	else printf("攻击冷却中\n"); 
		}
		else if(n==4)
		{
			if(!f2) printf("你尚未获得此道具\n");
			else if(remain==0) printf("你已用完此道具\n");
			else
			{
				printf("你对僵尸造成了240点伤害\n");
        		zombie.hp-=240;
        		remain--;
        		if(zombie.hp<=0) break;
			}
		}
        else printf("无效输入\n");
        Sleep(1000);
        if(zombie.hp<=0) break;
        printf("僵尸对你造成了%d点伤害\n",zombie.atk-steve.def);
        steve.hp=steve.hp-(zombie.atk-steve.def);
        Sleep(1000);
        round++;
        system("cls");
    }
    system("cls");
    if(steve.hp<=0)
    {
        printf("你死了,请重新来过(5秒后结束)");
        Sleep(5000);
        return;
    }
    if(zombie.hp<=0)
    {
    	Sleep(1000);
        printf("恭喜击杀[%d级僵尸]\n",zombie.lev);
        printf("获得经验:%d\n",zombie.exp);
        steve.exp+=zombie.exp;
        printf("2秒后继续\n");
        Sleep(2000);
    }
    system("cls");
    printf("第二章 公司逃生 完\n");
    printf("恭喜完成第二章,奖励金币160");
    gold+=160;
	Sleep(2000);
	system("cls");
	return;
}
void steve_vs_zombie()
{
	system("cls");
	steve.def=10;
	steve.maxhp=75;
	steve.hp=45;
	steve.exp=112;
	zombie.atk=20;
	zombie.def=30;
	zombie.hp=300;
	zombie.lev=4;
	zombie.exp=36;
	if(f1) steve.atk=120;
	else steve.atk=100;
	printf("敌人信息:\n");
    printf("敌人:僵尸    等级:%d\n",zombie.lev);
    printf("血量:%d    伤害:%d    防御:%d    击杀可获得%d经验\n",zombie.hp,zombie.atk,zombie.def,zombie.exp);
    Sleep(4000);
    system("cls");
	while(steve.hp>0 && zombie.hp>0)
    {
        printf("敌人:僵尸 等级%d\n",zombie.lev);
        printf("你的血量:%d/%d 僵尸血量:%d\n",steve.hp,steve.maxhp,zombie.hp);
        printf("武器:\n");
		printf("1| 普通攻击 %d伤害,攻速1\n",steve.atk);
		printf("2| 铁棍 100伤害,攻速1\n");
		printf("3| 带钉子的木板 150伤害 攻速2\n");
		printf("4| 锥子 120伤害 攻速1\n");
		scanf("%d",&n);
        if(n==1)
        {
            printf("你对僵尸造成了%d伤害\n",steve.atk-zombie.def);
            zombie.hp=zombie.hp-(steve.atk-zombie.def);
            if(zombie.hp<=0) break;
        }
        else if(n==2)
        {
			printf("你对僵尸造成了%d伤害\n",100-zombie.def);
        	zombie.hp=zombie.hp-(100-zombie.def);
        	if(zombie.hp<=0) break;
		}
		else if(n==3)
		{
			if(round%2==1)
        	{
        		printf("你对僵尸造成了%d点伤害\n",150-zombie.def);
        		zombie.hp=zombie.hp-(150-zombie.def);
        		if(zombie.hp<=0) break;
			}
        	else printf("攻击冷却中\n"); 
		}
		else if(n==4)
		{
			if(!f1) printf("你尚未获得此道具\n");
			else
			{
				printf("你对僵尸造成了%d点伤害\n",120-zombie.def);
        		zombie.hp=zombie.hp-(120-zombie.def);
        		if(zombie.hp<=0) break;
			}
		}
        else printf("无效输入\n");
        Sleep(1000);
        if(zombie.hp<=0) break;
        printf("僵尸对你造成了%d点伤害\n",zombie.atk-steve.def);
        steve.hp=steve.hp-(zombie.atk-steve.def);
        if(steve.hp<=0)
        {
        	dead=true;
        	return;
		}
        Sleep(1000);
        round++;
        system("cls");
    }
    system("cls");
    return;
}
void Level_3_1()
{
	system("cls");
	printf("地点:公司8层\n时间17:30");
	getchar();
	getchar();
	system("cls");
	printf("你:一层一层下也不是办法,或许我可以重启电梯?");
	getchar();
	system("cls");
	f1=false;f2=false;f3=false;
	bool key=false,door=false,light=false;
	while(n!=5)
	{
		printf("提示:在周围探索(建议探索所有地点)\n");
		printf("1| 你的裤子兜\n");
		printf("2| 配电室\n");
		printf("3| 走廊的电灯开关\n");
		printf("4| 装修工人留下的麻袋\n");
		printf("5| 离开\n");
		scanf("%d",&n);
		if(n==1)
		{
			if(!key)
			{
				printf("获得[配电室的钥匙]\n");
				key=true;
			}
			else printf("这里已经没有特别的东西了\n");
		}
		if(n==2)
		{
			if(!key) printf("锁住了,需要[配电室的钥匙]\n");
			else if(!door)
			{
				printf("你:外面的走廊太黑了,开电灯是这个电闸吗?\n");
				Sleep(1000);
				system("cls");
				printf("你拉下了电闸\n");
				door=true;
			}
			else printf("这里的电闸已经打开了\n");
		}
		if(n==3)
		{
			if(!door) printf("你:灯没有反应,是不是电闸没开?\n");
			else if(!light)
			{
				printf("你按下了电灯开关\n");
				light=true;
			}
			else printf("这里的灯已经打开了\n"); 
		}
		if(n==4 || n==5)
		{
			if(!light)
			{
				printf("走廊太黑了,需要打开电灯\n");
				Sleep(1000);
				system("cls");
				continue;
			}
			else if(n==4)
			{
				f1=true;
				printf("获得[锥子],伤害+20");
				steve.atk+=20;
			}
			else if(n==5) break;
		}
		Sleep(1000);
		system("cls");
	}
	getchar();
	system("cls");
	printf("地点:公司8层,电梯备用电源控制室\n时间19:00\n");
	getchar();
	system("cls");
	printf("按任意键打开电梯备用电源\n");
	getchar();
	system("cls");
	printf("呃!!~~~~~~");
	getchar();
	steve_vs_zombie();
	if(zombie.hp<=0)
    {
    	Sleep(1000);
        printf("恭喜击杀[%d级僵尸]\n",zombie.lev);
        printf("获得经验:%d\n",zombie.exp);
        steve.exp+=zombie.exp;
        printf("2秒后继续\n");
        Sleep(2000);
    }
	return;
}
void Level_3()
{
	system("cls");
	printf("第三章 涉险");
	Sleep(2000);
    system("cls");
    printf("地点:公司12层,仓库\n时间17:00");
    getchar();
    getchar();
    system("cls");
    printf("你:太阳要落山了,我得赶紧出去!");
    getchar();
    system("cls");
    n=0;
    while(n!=1)
    {
    	printf("1| 涉险逃离\n2| 在仓库过夜\n");
    	scanf("%d",&n);
    	if(n==1) break;
    	if(n==2) printf("你觉得在满是僵尸的仓库过夜可能吗?\n");
    	if(n!=1 && n!=2) printf("无效输入");
    	Sleep(1000);
    	system("cls");
	}
	if(n==1) Level_3_1();
	if(dead)
	{
		printf("你死了,请重新来过(5秒后结束)");
        Sleep(5000);
        return;
	}
    getchar();
    system("cls");
    printf("按任意键进入电梯");
    getchar();
    system("cls");
    printf("地点:公司2层,电梯间\n时间20:00");
    getchar();
    system("cls");
    printf("按任意键打开电梯间的门");
    getchar();
    system("cls");
    printf("呃!!                            \n");
    printf("        嗷呕~~~~(是僵尸不是狼!) \n");
    printf("                    哇呜......! \n");
    getchar();
    system("cls");
    printf("你(惊吓+小声):就一天,这个公司是怎么了!这么多僵尸!!!");
    getchar();
    system("cls");
    printf("第三章 涉险 完\n");
    printf("恭喜完成第三章,奖励金币100");
    printf("\n[黑体]#::714[/color=write]");
    gold+=100;
    Sleep(3000);
    return;
}
void Shop()
{
	int buy;
	system("cls");
	printf("欢迎来到音乐商店\n");
	printf("这里有很多音乐,欢迎前来选购(很多?)\n");
	printf("按任意键继续\n");
	getchar();
	getchar();
	system("cls");
	while(1)
	{
		printf("0| 抽取金币\n");
		printf("1| 山丘 18金币\n");
		printf("2| 森林 68金币\n");
		printf("3| 霓虹 168金币\n");
		printf("4| 沙漠 68金币\n");
		printf("5| 万圣节逃生 48金币\n");
		printf("6| 亡灵之舞 98金币\n");
		printf("7| 万圣节 138金币\n");
		printf("8| 万圣嘉年华 158金币\n");
		printf("64| 万圣节音乐包 350金币(8折优惠)\n");
		printf("-1| 离开\n");
		printf("金币余额:%d\n注意:请勿重复购买!\n",gold);
		scanf("%d",&n);
		if((n<-1 || n>8) && n!=64) printf("无效输入");
		if(n==1)
		{
			if(gold<18) printf("金币不足!");
			else
			{
				system("cls");
				printf("是否花费18金币购买[背景音乐:山丘]?\n0| 再想想\n1| 确认购买\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("恭喜购买成功,获得[背景音乐:山丘]\n");
					printf("进入网址获取音乐\nhttps://pan.baidu.com/s/1JCXlZkRA3mlOzlOUpVqfrQ\n");
					printf("密码:f2r%c",'7'+'1'-1);
					gold-=18;
					getchar();
					getchar(); 
				}
			}
		}
		if(n==2)
		{
			if(gold<58) printf("金币不足!");
			else
			{
				system("cls");
				printf("是否花费58金币购买[背景音乐:森林]?\n0| 再想想\n1| 确认购买\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("恭喜购买成功,获得[背景音乐:森林]\n");
					printf("进入网址获取音乐\nhttps://pan.baidu.com/s/1eVMc8RLZUVaOQRmZtaRy9A\n");
					printf("密码:%cpv%c",'P'+' ','e'-'1');
					gold-=58;
					getchar();
					getchar();
				}
			}
		}
		if(n==3)
		{
			if(gold<128) printf("金币不足!");
			else
			{
				system("cls");
				printf("是否花费128金币购买[背景音乐:霓虹]?\n0| 再想想\n1| 确认购买\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("恭喜购买成功,获得[背景音乐:霓虹]\n");
					printf("进入网址获取音乐\nhttps://pan.baidu.com/s/1xcBX9ptWJ1wpXuWe4p9idg\n");
					printf("密码:%c%cxg",'1'+'7','C'+' ');
					gold-=128;
					getchar();
					getchar();
				}
			}
		}
		if(n==4)
		{
			if(gold<68) printf("金币不足!");
			else
			{
				system("cls");
				printf("是否花费68金币购买[背景音乐:沙漠]?\n0| 再想想\n1| 确认购买\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("恭喜购买成功,获得[背景音乐:沙漠]\n");
					printf("进入网址获取音乐\nhttps://pan.baidu.com/s/1IJ0g3e-hdp6pPvicNcsQ2A\n");
					printf("密码:vn%ct",'j'-'2'-'B'+' '+' ');
					gold-=68;
					getchar();
					getchar();
				}
			}
		}
		if(n==5)
		{
			if(gold<48) printf("金币不足!");
			else
			{
				system("cls");
				printf("是否花费48金币购买[背景音乐:万圣节逃生]?\n0| 再想想\n1| 确认购买\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("恭喜购买成功,获得[背景音乐:万圣节逃生]\n");
					printf("进入网址获取音乐\nhttps://pan.baidu.com/s/1SehBwxwqDsubDoewmR4a1g\n");
					printf("密码:jfk4");
					gold-=48;
					getchar();
					getchar();
				}
			}
		}
		if(n==6)
		{
			if(gold<98) printf("金币不足!");
			else
			{
				system("cls");
				printf("是否花费98金币购买[背景音乐:亡灵之舞]?\n0| 再想想\n1| 确认购买\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("恭喜购买成功,获得[背景音乐:亡灵之舞]\n");
					printf("进入网址获取音乐\nhttps://pan.baidu.com/s/1sQ1yWX-A6KOTlk-6fiI4NQ\n");
					printf("密码:tgwu");
					gold-=98;
					getchar();
					getchar();
				}
			}
		}
		if(n==7)
		{
			if(gold<138) printf("金币不足!");
			else
			{
				system("cls");
				printf("是否花费138金币购买[背景音乐:万圣节]?\n0| 再想想\n1| 确认购买\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("恭喜购买成功,获得[背景音乐:万圣节]\n");
					printf("进入网址获取音乐\nhttps://pan.baidu.com/s/1XQsDgMDOjJSyUsxV5ypb2w\n");
					printf("密码:f2k8");
					gold-=138;
					getchar();
					getchar();
				}
			}
		}
		if(n==8)
		{
			if(gold<158) printf("金币不足!");
			else
			{
				system("cls");
				printf("是否花费158金币购买[背景音乐:万圣嘉年华]?\n0| 再想想\n1| 确认购买\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("恭喜购买成功,获得[背景音乐:万圣嘉年华]\n");
					printf("进入网址获取音乐\nhttps://pan.baidu.com/s/1U1HeLjpFdVtbluc_NQhZPw\n");
					printf("密码:wqrs");
					gold-=68;
					getchar();
					getchar();
				}
			}
		}
		if(n==9)
		{
			if(gold<350) printf("金币不足!");
			else
			{
				system("cls");
				printf("是否花费350金币购买[背景音乐:万圣节音乐包]?\n0| 再想想\n1| 确认购买\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("恭喜购买成功,获得:\n[背景音乐:万圣节逃生]\n[背景音乐:亡灵之舞]\n[背景音乐:万圣节]\n[背景音乐:万圣嘉年华]\n");
					printf("进入网址获取音乐\n");
					printf("万圣节逃生 https://pan.baidu.com/s/1SehBwxwqDsubDoewmR4a1g 密码:jfk4\n");
					printf("亡灵之舞   https://pan.baidu.com/s/1sQ1yWX-A6KOTlk-6fiI4NQ 密码:tgwu\n");
					printf("万圣节     https://pan.baidu.com/s/1XQsDgMDOjJSyUsxV5ypb2w 密码:f2k8\n");
					printf("万圣嘉年华 https://pan.baidu.com/s/1U1HeLjpFdVtbluc_NQhZPw 密码:wqrs\n");
					gold-=350;
					getchar();
					getchar();
				}
			}
		}
		if(n==0)
		{
			int g=rand()%10;
			printf("恭喜获得[金币]x%d\n",g);
			gold+=g;
		}
		if(n==-1) break;
		Sleep(1000);
		system("cls");
	}
	return;
}
void Level_4()
{
	steve.atk=120;
	steve.def=10;
	steve.hp=25;
	steve.maxhp=75;
	steve.exp=148;
	system("cls");
	printf("第四章 绝境");
	Sleep(2000);
	system("cls");
	printf("你:不行啊一直在这耗着迟早要饿死!\n");
	getchar();
	getchar();
	system("cls");
	printf("3层:呃!~~~哇!~~~~\n");
	getchar();
	system("cls");
	printf("你:完了!3层也有好多僵尸......\n");
	getchar();
	system("cls");
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		printf("加载中...\n");
		for(j=1;j<=i;j++) printf("█");
		printf("%d",i*20);
		Sleep(500);
		if(i==5) break;
		system("cls"); 
	}
	Sleep(1000);
	system("cls");
	int r;
	printf("你:去4层!\n");
	getchar();
	system("cls");
	printf("地点:公司4层,电梯间\n时间:21:00\n");
	getchar();
	system("cls");
	printf("你:从楼上绕下去,躲开他们!\n");
	getchar(); 
	system("cls");
	printf("你:地点:公司4层,紧急通道\n时间:21:10\n");
	getchar();
	system("cls");
	printf("轰!哗啦!!!呃!!!!!!\n");
	getchar();
	system("cls");
	printf("公司实验楼11层发生爆炸\n");
	getchar();
	system("cls");
	printf("你:啊!!\n砰!咚!咣!!    你受到爆炸的冲击波而从紧急通道上摔了下去\n");
	getchar();
	system("cls");
	printf("你摔到了3层的紧急通道上\n");
	getchar();
	system("cls");
	printf("呃!!!!\n");
	getchar();
	system("cls");
	printf("在你起身时,一只僵尸朝你走来\n");
	getchar();
	system("cls");
	printf("你:啊!!走开!!!!\n");
	getchar();
	system("cls");
	printf("呃!!!!!!\n");
	getchar();
	system("cls");
	printf("啪!呃啊。。。\n");
	getchar();
	system("cls");
	printf("???:你是谁\n");
	getchar();
	system("cls");
	printf("[宋体][color=#0112FF]::|你:我,呃,我是公司的员工[/color:white]\n");
	getchar();
	system("cls");
	printf("???:我是公司的保安,老刘\n");
	getchar();
	system("cls");
	printf("砰!咚!呃!!!!\n");
	getchar();
	system("cls");
	printf("老刘:快走,他们又要来了!从紧急通道下去!\n");
	getchar();
	system("cls");
	printf("你:哦好的!老刘你也快走!\n");
	getchar();
	system("cls");
	printf("老刘:下去!从大门出去!\n");
	getchar();
	system("cls");
	printf("你:办公楼的门口有一只僵尸,打死他\n");
	getchar();
	system("cls");
	printf("按任意键开始战斗\n");
	getchar();
	system("cls");
	printf("老刘:我在正面,我分散他的注意力!你从侧面打!\n");
	getchar();
	system("cls");
	zombie.atk=15;
	zombie.def=30;
	zombie.exp=72;
	zombie.hp=600;
	zombie.lev=8;
	int atk_laoliu=60;
	printf("敌人信息:\n");
    printf("敌人:僵尸    等级:%d\n",zombie.lev);
    printf("血量:%d    伤害:%d    防御:%d    击杀可获得%d经验\n",zombie.hp,zombie.atk,zombie.def,zombie.exp);
    Sleep(4000);
    system("cls");
	while(steve.hp>0 && zombie.hp>0)
    {
    	r=64;
        printf("敌人:僵尸 等级%d\n",zombie.lev);
        printf("你的血量:%d/%d 僵尸血量:%d\n",steve.hp,steve.maxhp,zombie.hp);
        printf("武器:\n");
		printf("1| 普通攻击 %d伤害,攻速1\n",steve.atk);
		printf("2| 锥子 90伤害,攻速1/4\n");
		printf("3| 铁棍 160伤害 攻速1\n");
		scanf("%d",&n);
        if(n==1)
        {
            printf("你对僵尸造成了%d伤害\n",steve.atk-zombie.def);
            zombie.hp=zombie.hp-(steve.atk-zombie.def);
        }
        else if(n==2)
        {
			printf("你对僵尸造成了%d伤害\n",90-zombie.def);
			Sleep(500);
			printf("你对僵尸造成了%d伤害\n",90-zombie.def);
			Sleep(500);
			printf("你对僵尸造成了%d伤害\n",90-zombie.def);
			Sleep(500);
			printf("你对僵尸造成了%d伤害\n",90-zombie.def);
			Sleep(500);
        	zombie.hp=zombie.hp-(90-zombie.def)*4;
		}
		else if(n==3)
		{
			printf("你对僵尸造成了%d伤害\n",160-zombie.def);
        	zombie.hp=zombie.hp-(160-zombie.def);
		}
        else printf("无效输入\n");
        Sleep(1000);
        r=rand()%3;
        if(r!=0)
        {
        	printf("老刘对僵尸造成了%d伤害\n",atk_laoliu-zombie.def);
        	zombie.hp=zombie.hp-(atk_laoliu-zombie.def);
		}
        if(zombie.hp<=0) break;
        r=rand()%4;
        if(r==0)
        {
        	printf("僵尸对你造成了%d伤害\n",zombie.atk-steve.def);
        	steve.hp=steve.hp-(zombie.atk-steve.def);
		}
        else printf("僵尸去追赶老刘,没有注意到你\n");
        Sleep(2000);
        system("cls");
    }
    system("cls");
    if(zombie.hp<=0)
	{
		printf("恭喜击杀[%d级僵尸]\n获得经验:%d\n2秒后继续\n",zombie.lev,zombie.exp);
		steve.exp+=zombie.exp;
	}
	if(steve.hp<=0)
	{
		printf("你死了,请重新来过(5秒后结束)");
		Sleep(5000);
		return;
	}
    Sleep(2000);
    system("cls");
	printf("你:老刘快走!其他僵尸追上来了!\n");
	getchar();
	getchar();
	system("cls");
	printf("你们来到公司大门口,却被眼前的景象惊呆了!\n");
	getchar();
	system("cls");
	printf("大门口全是僵尸,根本出不去\n");
	getchar();
	system("cls");
	printf("与此同时,其他僵尸也从办公楼追了出来\n");
	getchar();
	system("cls");
	printf("第四章 绝境 完\n恭喜完成第四章,奖励金币100");
	gold+=100;
	Sleep(2000);
	system("cls");
	return;
}
void dead_1()
{
	system("cls");
	printf("在你俩打大门口的僵尸时,身后的僵尸已经围了上来,在前后僵尸的围攻,你们倒下了\n");
	getchar();
	getchar();
	printf("提示:不要将视野局限在几个选项上,如果你尝试一下选项之外的数字,一定会成功的!(10秒后退出)");
	Sleep(10000);
	system("cls");
	return;
}
void dead_2()
{
	system("cls");
	printf("在你俩打身后的僵尸时,大门外的僵尸已经围了上来,在前后僵尸的围攻,你们倒下了\n");
	getchar();
	getchar();
	printf("提示:不要将视野局限在几个选项上,如果你尝试一下选项之外的数字,一定会成功的!(10秒后退出)");
	Sleep(10000);
	system("cls");
	return;
}
void Level_5()
{
	steve.exp=148;
	steve.atk=120;
	steve.hp=25;
	steve.maxhp=75;
	steve.def=10;
	system("cls");
	printf("第五章 离开公司\n");
	Sleep(2000);
	system("cls");
	printf("你:怎么办!后面的僵尸追上来了!我们没退路了!\n");
	getchar();
	getchar();
	system("cls");
	printf("老刘:要么突破前面,逃离公司;要么突破后面,撤回公司,在想办法\n");
	getchar();
	system("cls");
	printf("你:我们必须做出抉择\n");
	getchar();
	system("cls");
	printf("老刘:快!要不我们撤回公司办公楼,在想办法\n");
	getchar();
	system("cls");
	printf("你:说不定办公楼咱们已经上不去了,楼上的僵尸都下来了,倒不如继续前进?\n");
	getchar();
	system("cls");
	printf("老刘:没时间了!他们已经看见我们了!\n");
	getchar();
	system("cls");
	while(1)
	{
		printf("1| 向前突破\n");
		printf("2| 向后突破\n");
		scanf("%d",&n); 
		if(n<=0 || n>3)
		{
			printf("无效输入\n");
			Sleep(1000);
		}
		else if(n==1)
		{
			dead_1();
			return;
		}
		else if(n==2)
		{
			dead_2();
			return;
		}
		else if(n==3) break;
		system("cls");
	}
	getchar();
	system("cls");
	printf("呵呵这个选择是不是很坑?\n");
	getchar();
	system("cls");
	printf("好了现在继续进入主剧情");
	getchar();
	system("cls");
	printf("你:老刘快来!从围墙翻过去!");
	getchar();
	system("cls");
	printf("你:老刘呢?");
	getchar();
	system("cls");
	printf("老刘:我来了!你快过去!");
	getchar();
	system("cls");
	printf("老刘:我刚才给你找了点药,你快擦上把");
	getchar();
	system("cls");
	printf("获得[酒精棉球],血量+15");
	steve.hp+=15;
	getchar();
	system("cls");
	printf("获得[绷带],血量回复至70");
	steve.hp=70;
	getchar();
	system("cls");
	printf("获得[止痛药],血量上限+25,血量+20");
	steve.maxhp+=25;
	steve.hp+=20;
	getchar();
	system("cls");
	printf("你:谢谢!");
	getchar();
	system("cls");
	printf("老刘:我还带来了这个");
	getchar();
	system("cls");
	printf("获得[硬纸板],防御+15");
	steve.def+=15;
	getchar();
	system("cls");
	printf("老刘:看!那个僵尸....");
	getchar();
	system("cls");
	printf("你:感觉那个僵尸和其他的不太一样......?");
	getchar();
	system("cls");
	printf("僵尸:呃!~~~~~~");
	getchar();
	system("cls");
	printf("你:哦!他发现我们了");
	getchar();
	system("cls");
	printf("老刘:咱还是老战术");
	getchar();
	system("cls");
	printf("你:嗯!");
	getchar();
	system("cls");
	printf("按任意键开始战斗");
	getchar();
	system("cls");
	int poisoned_remain=0;
	int atk_laoliu=80;
	int r;
	zombie.poisonous=true;
	zombie.hp=1200;
	zombie.lev=12;
	zombie.exp=220;
	zombie.atk=40;
	zombie.def=40;
	zombie.poisonous_atk=10;
	printf("怪物信息:\n");
    printf("怪物:剧毒僵尸    等级:%d\n",zombie.lev);
    printf("血量:%d    伤害:%d|剧毒伤害:%d/2    防御:%d    击杀可获得%d经验(8秒后继续)\n",zombie.hp,zombie.atk,zombie.poisonous_atk,zombie.def,zombie.exp);
	printf("注意:剧毒伤害:atk/round的意思是僵尸的持续伤害为atk每回合(包含受到僵尸普通伤害的回合,作为你第一次受到持续伤害的回合),持续round回合(受到僵尸普通伤害的回合算第一个回合)");
    Sleep(8000);
    system("cls");
	while(steve.hp>0 && zombie.hp>0)
    {
    	r=64;
        printf("怪物:剧毒僵尸 等级%d\n",zombie.lev);
        printf("你的血量:%d/%d 僵尸血量:%d\n",steve.hp,steve.maxhp,zombie.hp);
        printf("武器:\n");
		printf("1| 普通攻击 %d伤害,攻速1\n",steve.atk);
		printf("2| 锥子 100伤害,攻速1/4\n");
		printf("3| 铁棍 220伤害 攻速1/2\n");
		scanf("%d",&n);
        if(n==1)
        {
            printf("你对僵尸造成了%d伤害\n",steve.atk-zombie.def);
            zombie.hp=zombie.hp-(steve.atk-zombie.def);
        }
        else if(n==2)
        {
			printf("你对僵尸造成了%d伤害\n",100-zombie.def);
			Sleep(500);
			printf("你对僵尸造成了%d伤害\n",100-zombie.def);
			Sleep(500);
			printf("你对僵尸造成了%d伤害\n",100-zombie.def);
			Sleep(500);
			printf("你对僵尸造成了%d伤害\n",100-zombie.def);
			Sleep(500);
        	zombie.hp=zombie.hp-(100-zombie.def)*4;
		}
		else if(n==3)
		{
			printf("你对僵尸造成了%d伤害\n",220-zombie.def);
			Sleep(750);
			printf("你对僵尸造成了%d伤害\n",220-zombie.def);
			Sleep(750);
        	zombie.hp=zombie.hp-(220-zombie.def)*2;
		}
        else printf("无效输入\n");
        Sleep(1000);
        r=rand()%2;
        if(r!=0)
        {
        	printf("老刘对僵尸造成了%d伤害\n",atk_laoliu-zombie.def);
        	zombie.hp=zombie.hp-(atk_laoliu-zombie.def);
		}
        if(zombie.hp<=0) break;
        r=rand()%4;
        if(r==0)
        {
        	printf("僵尸对你造成了%d伤害\n",zombie.atk-steve.def);
        	steve.hp=steve.hp-(zombie.atk-steve.def);
        	poisoned_remain=2;
		}
        else printf("僵尸去追赶老刘,没有注意到你\n");
        if(poisoned_remain>0)
        {
        	printf("你收到中毒伤害10\n");
        	steve.hp-=10;
        	poisoned_remain--;
		}
        Sleep(2000);
        system("cls");
    }
    system("cls");
    if(zombie.hp<=0)
	{
		printf("恭喜击杀[%d级剧毒僵尸]\n获得经验:%d\n2秒后继续\n",zombie.lev,zombie.exp);
		Sleep(2000);
		steve.exp+=zombie.exp;
	}
	if(steve.hp<=0)
	{
		printf("你死了,请重新来过(5秒后结束)");
		Sleep(5000);
		system("cls");
		return;
	}
	system("cls");
	printf("你(大喊):F*CK!这僵尸有毒啊!!!!!!");
	getchar();
	getchar();
	system("cls");
	printf("老刘:别喊,前面有人");
	getchar();
	system("cls");
	printf("老刘:去看看");
	getchar();
	system("cls");
	printf("你:嘿你好,你是谁?");
	getchar();
	system("cls");
	printf("你:你是住这旁边的居民区吗?");
	getchar();
	system("cls");
	printf("? ? ?:你是?");
	getchar();
	system("cls");
	printf("老刘:哦,我们是L公司的保安和员工");
	getchar();
	system("cls");
	printf("? ? ?:我是军队的人,一个士兵");
	getchar();
	system("cls");
	printf("你:为什么整个大街都是僵尸啊?");
	getchar();
	system("cls");
	printf("士兵:8月13日晚上,S市郊区出现僵尸病毒感染者,我们...");
	getchar();
	system("cls");
	printf("砰!哗啦!!呃!!!");
	getchar();
	system("cls");
	printf("士兵:他们到处都是,先找个安全的地方在和你们说吧");
	getchar();
	system("cls");
	printf("你:去我家吧,那里安全一些");
	getchar();
	system("cls");
	printf("你:就在居民区里");
	getchar();
	system("cls");
	printf("士兵:我们用尽全力阻击僵尸,但S市城区还是于8月16日傍晚到达了城区");
	getchar();
	system("cls");
	printf("士兵:虽然政府用重型武器暂时压制僵尸,撤离民众,但病毒传播太快了,8月18日中午S市彻底失守,很多人都被感染了");
	getchar();
	system("cls");
	printf("士兵:8月19日早上,军队也开始撤离,我们的车在S市城区边缘被僵尸围攻");
	getchar();
	system("cls");
	printf("士兵:我们一车20个人,只有我,我的3个战友和我的班长5个人跑了出来,其他人都牺牲了");
	getchar();
	system("cls");
	printf("士兵:我和我的战友走散了,我的班长说他要去商场找食物,让我在外面等着,然后商场里几声枪响之后就没声了");
	getchar();
	system("cls");
	printf("士兵:就这样,我撤回到这");
	getchar();
	system("cls");
	printf("你:也就是说S市到处都是僵尸,咱们出不去了?");
	getchar();
	system("cls");
	printf("老刘:咱们可以去M市啊,那离这不远");
	getchar();
	system("cls");
	printf("士兵:不光是S市,周围几个城市都沦陷了");
	getchar();
	system("cls");
	printf("你:那我们去哪啊?");
	getchar();
	system("cls");
	printf("士兵:目前大多数幸存者和军队都在H市");
	getchar();
	system("cls");
	printf("士兵:我这有一张转移路线的地图,不太完整");
	getchar();
	system("cls");
	printf("SS...S.............CCC.C#.CC\n");
	printf("S..SS.SSS........CC.C..CC.CC\n");
	printf(".SS..S.S.S..........C..C.C..\n");
	printf("S*.SS..S.S............C.....\n");
	printf("SSS#SS.S----------+........H\n");
	printf("S..SS.SSS.........|......HH.\n");
	printf(".SS..SS...........+-----H.HH\n");
	printf("S.S.SS.S.......D.......HHH#H\n");
	printf(".S..S.S.S--+...DDDDD....H.H.\n");
	printf("...........|....#.D.....HH..\n");
	printf("M...M......|...DDDD.......HH\n");
	printf("M.MM..M....|...D..........|.\n");
	printf("M#M.MMM....|..............|.\n");
	printf("M.MM.......+--------------+.\n");
	printf("MMM.........................\n");
	printf("士兵:我们在*的位置,大部队从两条路线走,一条市区,一条郊外,每个城市的市中心是#");
	getchar();
	printf("士兵:咱们如果去M市,就必须经过S市的郊外森林,那里几乎没有补给,僵尸还多,我们三个人能携带的物资有限,每少一个人对我们所有人都不利");
	getchar();
	printf("士兵:如果咱们有车,还有足够的燃油,可以先到C市,在从C市到H市");
	getchar();
	printf("你:如果穿过S市的郊外森林呢?");
	getchar();
	printf("士兵:森林里都是树,不好走,很容易被僵尸拦截");
	getchar();
	printf("士兵:除非我们用枪在车上打,不然近身搏斗会被包围");
	getchar();
	printf("你:C市太分散了,搜索物资太慢,但M市搜完直接朝H市走了");
	getchar();
	printf("老刘:D市为什么不能去?");
	getchar();
	printf("士兵:D市太小了,物资不充足,可能应付不了僵尸");
	getchar();
	printf("你:要不咱们找辆车改装一下,直接去M市?");
	getchar();
	system("cls");
	printf("第五章 离开公司 完\n恭喜完成第五章,奖励金币120");
	gold+=120;
	Sleep(2000);
    system("cls");
    return;
}
/*
void Endless_mode()
{
	printf("无尽模式\n");
	Sleep(2000);
	system("cls");
	steve.hp=100;
	steve.maxhp=100;
	steve.def=10;
	steve.atk=50;
	steve.exp=0;
	zombie.lev=1;
	int r1=256,r2=256,r3=256,speed=0;
	int g=0;
	int Second_kill;
	int zombie_gold=0;
	while(1)
	{
		r1=rand()%6;
		zombie.atk=15*zombie.lev;
		zombie.def=5*zombie.lev;
		zombie.hp=100*zombie.lev+10*rand()%5;
		zombie.poisonous_round=256;
		zombie.poisonous_atk=0;
		zombie.poisonous=false;
		zombie_gold=12*zombie.lev;
		while(steve.hp>0 && zombie.hp>0)
		{
			r1=256;r2=256;r3=256;
			r1=rand()%100;
			if(r1<5) speed=6;
			else if(r1>=5 && r1<15) speed=4;
			else if(r1>=15 && r1<30) speed=3;
			else if(r1>=30 && r1<50) speed=2;
			else speed=1;
        	printf("怪物:僵尸 等级%d\n",zombie.lev);
        	printf("你的血量:%d/%d 僵尸血量:%d\n",steve.hp,steve.maxhp,zombie.hp);
        	printf("你的信息:伤害:%d,防御:%d,游戏结束获得%d金币\n",steve.atk,steve.def,g);
        	printf("僵尸信息:伤害:%d,防御:%d,击杀获得%d金币\n",zombie.atk,zombie.def,zombie_gold);
			printf("1| 攻击 %d伤害 攻速",steve.atk);
			if(speed==1) printf("1\n");
			else printf("1/%d\n",speed);
			r2=rand()%100;
			printf("2| 闪避 ");
			char ch='%';
			printf("你有%d%c的概率躲掉僵尸攻击\n",r2,ch);
			printf("-1| 离开\n");
			scanf("%d",&n);
			if(n==1)
			{
				int i=1;
				while(i<=speed)
				{
					printf("你对僵尸造成了%d伤害\n",steve.atk-zombie.def);
					Sleep(1200/speed);
					i++;
				}
				Sleep(800);
				zombie.hp-=(steve.atk-zombie.def)*speed;
			}
			else if(n==2)
			{
				r3=rand()%100;
				if(r3<=r2)
				{
					printf("恭喜,成功的躲开僵尸的攻击\n");
					Sleep(1000);
				}
				else
				{
					printf("很遗憾,你未能躲开僵尸的攻击\n");
					Sleep(1000);
					printf("僵尸对你造成了%d伤害\n",zombie.atk-steve.def);
					steve.hp=steve.hp-(zombie.atk-steve.def);
					Sleep(1000);
				}
			}
			else if(n==-1)
			{
				printf("你离开了无尽模式,4秒后返回主菜单\n");
				Sleep(4000);
				return; 
			}
			else printf("无效输入");
			if(n!=2)
			{
				printf("僵尸对你造成了%d伤害",zombie.atk-steve.def);
				steve.hp=steve.hp-(zombie.atk-steve.def);
			}
			if(steve.hp<=0)
			{
				system("cls");
				printf("你死了,请重新来过\n获得金币:%d\n5秒后结束",g);
				gold+=g;
				Sleep(5000);
				return;
			}
			if(zombie.hp<=0) break;
			system("cls");
		}
		printf("恭喜击杀[%d级僵尸],获得金币%d\n2秒后继续",zombie.lev,zombie_gold);
		g+=zombie_gold;
		Sleep(2000);
		zombie.lev++;
		system("cls");
		printf("请选择强化方案\n");
		printf("1| 血量\n");
		printf("2| 伤害\n");
		printf("3| 防御\n");
		printf("4| 随机(未开发)\n");
		scanf("%d",&n);
		if(n==1)
		{
			r1=rand()%5;
			if(r1==0 || r1==1)
			{
				int maxn=rand()%3*10+10;
				printf("血量上限提升%d",maxn);
				steve.maxhp+=maxn;
				steve.hp+=maxn;
				Sleep(2000);
			}
			else
			{
				r1=rand()%50;
				if(r1>=0 && r1<5)
				{
					printf("血量回满\n");
					steve.hp=steve.maxhp;
					Sleep(2000);
				}
				if(r1>=5 && r1<12)
				{
					char ch='%';
					printf("血量回复至90%c",ch);
					steve.hp=steve.maxhp/10*9;
					Sleep(2000);
				}
				if(r1>=12 && r1<20)
				{
					char ch='%';
					printf("血量回复至75%c",ch);
					steve.hp=steve.maxhp/100*75;
					Sleep(2000);
				}
				if(r1>=20 && r1<30)
				{
					printf("血量+50\n");
					steve.hp+=50;
					if(steve.hp>steve.maxhp)
					{
						printf("血量超过上线!最多只能回复至%d!",steve.maxhp);
						steve.hp=steve.maxhp;
					}
					Sleep(2000);
				}
				if(r1>=30)
				{
					printf("血量+30\n");
					steve.hp+=30;
					if(steve.hp>steve.maxhp)
					{
						printf("血量超过上线!最多只能回复至%d!",steve.maxhp);
						steve.hp=steve.maxhp;
					}
					Sleep(2000);
				}
			}
		}
		if(n==2)
		{
			r1=rand()%200;
			if(r1<1)
			{
				printf("后面5个僵尸1次攻击必死");
				Second_kill=5;
			}
			if(r1>=1 && r1<5)
			{
				printf("后面3个僵尸1次攻击必死");
				Second_kill=3;
			}
			if(r1>=5 && r1<10)
			{
				printf("后面2个僵尸1次攻击必死");
				Second_kill=2;
			}
			if(r1>=10 && r1<18)
			{
				printf("下1个僵尸1次攻击必死");
				Second_kill=1;
			}
			if(r1>=18 && r1<30)
			{
				printf("后面2个僵尸前2回合的攻速为10\n");
				Quick.Quick_speed=10;
				Quick.Quick_round=2;
				Quick.Quick_zombie=2;
				
			}
			if(r1>=30 && r1<50)
			{
				printf("下一个僵尸第一回合的攻速为15\n");
				Quick.Quick_speed=15;
				Quick.Quick_round=1;
				Quick.Quick_zombie=1;
			}
			if(r1>=50 && r1<75)
			{
				printf("伤害x4");
				steve.atk*=4;
			}
			if(r1>=75 && r1<100)
			{
				printf("伤害x3");
				steve.atk*=3;
			}
			if(r1>=100 && r1<130)
			{
				printf("伤害x2");
				steve.atk*=2;
			}
			if(r1>=130 && r1<160)
			{
				printf("伤害+50");
				steve.atk+=50; 
			}
			if(r1>=160)
			{
				printf("伤害+30");
				steve.atk+=30;
			}
			Sleep(2000);
		}
	}
}
*/
void no_enter()
{
	system("cls");
	while(1)
	{
		printf("我已经说了禁止进入,现在你出不去了,不过你可以按下Ctrl+c然后自己把无尽模式(我已经写了部分代码,在line1379--1613)做完整,祝好运^_^");
		system("color A6");
		Sleep(200);
		system("color 61");
		Sleep(200);
		system("color 54");
		Sleep(200);
		system("color 18");
		Sleep(200);
		system("color 3D");
		Sleep(200);
		system("cls");
	}
	return;
}
void Level_6()
{
	getchar();
	steve.atk=120;
	steve.maxhp=100;
	char ch='%';
	system("cls");
	printf("第六章 出发\n");
	Sleep(2000);
	system("cls");
	printf("士兵:这里,我从药店找到的药,还有一些武器\n");
	getchar();
	system("cls");
	printf("获得[绷带],血量回复至90%c\n",ch);
	steve.hp=steve.maxhp/10*9;
	getchar();
	system("cls");
	printf("获得[小刀],伤害增加至150\n");
	steve.atk=150;
	steve.def=20;
	getchar();
	system("cls");
	printf("士兵:我记得我们郊区的营地里好像还有一辆车\n");
	getchar();
	system("cls");
	printf("士兵:在去营地的路上,正好会路过我和班长失联的商场\n");
	getchar();
	system("cls");
	printf("老刘:咱们可能需要绕过北大街,要不咱们从西侧的小路走?\n");
	getchar();
	system("cls");
	printf("士兵:我想可以\n");
	getchar();
	system("cls");
	printf("士兵:我们的营地里还有一些枪,弹药和补给\n");
	getchar();
	system("cls");
	printf("你:OK!那我们赶紧出发吧\n");
	getchar();
	system("cls");
	printf("士兵:停!外面有人!\n");
	getchar();
	system("cls");
	printf("楼道:咯噔!咯噔!......\n");
	getchar();
	system("cls");
	printf("你(要开门):谁!\n");
	getchar();
	system("cls");
	printf("士兵:不,从猫眼看!\n");
	getchar();
	system("cls");
	printf("你:看不见?\n");
	getchar();
	system("cls");
	printf("你打开了你家的门\n");
	getchar();
	system("cls");
	printf("? ? ?:不许动!举起手来!!打劫!!!\n");
	getchar();
	system("cls");
	printf("你:啊!!!!\n");
	getchar();
	system("cls");
	printf("按任意键开始战斗");
	getchar();
	system("cls");
	printf("士兵:闪开!");
	getchar();
	system("cls");
	printf("啪!!砰!!");
	getchar();
	system("cls");
	printf("? ? ?:啊!......");
	getchar();
	system("cls");
	printf("? ? ?:别打了!我投降!!");
	getchar();
	system("cls");
	printf("士兵:老王?");
	getchar();
	system("cls");
	printf("? ? ?:哈?锤子?");
	getchar();
	system("cls");
	printf("老王:你咋会在这里?");
	getchar();
	system("cls");
	printf("锤子:大部队都转移到H市了,我们打算明天早上就出发");
	getchar();
	system("cls");
	printf("老刘(笑):哈,锤子,这个外号还不错吗,哈哈哈...");
	getchar();
	system("cls");
	printf("锤子:呃?(⊙﹏⊙)");
	getchar();
	system("cls");
	printf("老王:我身上有一些燃油,这旁边有个停车场,可能会找到一辆能开的车");
	getchar();
	system("cls");
	printf("你:那快去吧!");
	getchar();
	system("cls");
	printf("地点:停车场\n时间8月22日 04:30");
	getchar();
	system("cls");
	printf("你:这辆车可不可以?");
	getchar();
	system("cls");
	printf("老刘:试试吧");
	getchar();
	system("cls");
	printf("咔咔咔咔......");
	getchar();
	system("cls");
	printf("老王:他们过来了!快呀!");
	getchar();
	system("cls");
	printf("老刘:这边的车也发动不了");
	getchar();
	system("cls");
	printf("锤子:该死的僵尸!\n砰!啪!光!呃~~~~~~");
	getchar();
	system("cls");
	printf("锤子,老王(大喊):我们快顶不住了!行不行啊");
	getchar();
	system("cls");
	printf("咔咔咔咔~~~呼~~~");
	getchar();
	system("cls");
	printf("你:打着火了!谁会开车?");
	getchar();
	system("cls");
	printf("老王:我来开车!锤子,我的手枪给你!你们俩,上车!");
	getchar();
	system("cls");
	printf("呼啦~~~呃~~~~~~啪~~啊!!");
	getchar();
	system("cls");
	printf("你被僵尸从车上拽下来了!");
	getchar();
	system("cls");
	printf("你:啊!!!");
	getchar();
	system("cls");
	printf("老刘:打死他!");
	getchar();
	system("cls");
	printf("锤子:我有枪,我帮你!");
	getchar();
	system("cls");
	printf("按任意键开始战斗");
	getchar();
	system("cls");
	int poisoned_remain=0;
	int atk_laoliu=105;
	int atk_chuizi=230;
	int r;
	steve.exp=368;
	zombie.poisonous=true;
	zombie.hp=2400;
	zombie.lev=15;
	zombie.exp=320;
	zombie.atk=40;
	zombie.def=30;
	zombie.poisonous_atk=10;
	printf("怪物信息:\n");
    printf("怪物:剧毒僵尸    等级:%d\n",zombie.lev);
    printf("血量:%d    伤害:%d|剧毒伤害:%d/2    防御:%d    击杀可获得%d经验(8秒后继续)\n",zombie.hp,zombie.atk,zombie.poisonous_atk,zombie.def,zombie.exp);
	printf("注意:剧毒伤害:atk/round的意思是僵尸的持续伤害为atk每回合(包含受到僵尸普通伤害的回合,作为你第一次受到持续伤害的回合),持续round回合(受到僵尸普通伤害的回合算第一个回合)");
    Sleep(8000);
    system("cls");
	while(steve.hp>0 && zombie.hp>0)
    {
    	r=64;
        printf("怪物:剧毒僵尸 等级%d\n",zombie.lev);
        printf("你的血量:%d/%d 僵尸血量:%d\n",steve.hp,steve.maxhp,zombie.hp);
        printf("武器:\n");
		printf("1| 普通攻击 %d伤害,攻速1\n",steve.atk);
		printf("2| 小刀 330伤害,攻速1/3\n");
		printf("3| 铁棍 270伤害 攻速1/4\n");
		scanf("%d",&n);
        if(n==1)
        {
            printf("你对僵尸造成了%d伤害\n",steve.atk-zombie.def);
            zombie.hp=zombie.hp-(steve.atk-zombie.def);
        }
        else if(n==2)
        {
			printf("你对僵尸造成了%d伤害\n",330-zombie.def);
			Sleep(666);
			printf("你对僵尸造成了%d伤害\n",330-zombie.def);
			Sleep(667);
			printf("你对僵尸造成了%d伤害\n",330-zombie.def);
			Sleep(667);
        	zombie.hp=zombie.hp-(330-zombie.def)*3;
		}
		else if(n==3)
		{
			printf("你对僵尸造成了%d伤害\n",270-zombie.def);
			Sleep(500);
			printf("你对僵尸造成了%d伤害\n",270-zombie.def);
			Sleep(500);
			printf("你对僵尸造成了%d伤害\n",270-zombie.def);
			Sleep(500);
			printf("你对僵尸造成了%d伤害\n",270-zombie.def);
			Sleep(500);
        	zombie.hp=zombie.hp-(270-zombie.def)*4;
		}
        else printf("无效输入\n");
        Sleep(1000);
        r=rand()%8;
        if(r<=2)
        {
        	printf("老刘对僵尸造成了%d伤害\n",atk_laoliu-zombie.def);
        	zombie.hp=zombie.hp-(atk_laoliu-zombie.def);
		}
		else if(r==3 || r==4)
        {
        	printf("锤子对僵尸造成了%d伤害\n",atk_chuizi-zombie.def);
        	zombie.hp=zombie.hp-(atk_chuizi-zombie.def);
		}
        if(zombie.hp<=0) break;
        r=rand()%3;
        if(r==0)
        {
        	printf("僵尸对你造成了%d伤害\n",zombie.atk-steve.def);
        	steve.hp=steve.hp-(zombie.atk-steve.def);
        	poisoned_remain=2;
		}
        else printf("你躲开了僵尸的攻击\n");
        if(poisoned_remain>0)
        {
        	printf("你收到中毒伤害10\n");
        	steve.hp-=10;
        	poisoned_remain--;
		}
        Sleep(2000);
        system("cls");
    }
    system("cls");
    if(zombie.hp<=0)
	{
		printf("恭喜击杀[%d级剧毒僵尸]\n获得经验:%d\n2秒后继续\n",zombie.lev,zombie.exp);
		Sleep(2000);
		steve.exp+=zombie.exp;
	}
	if(steve.hp<=0)
	{
		printf("你死了,请重新来过(5秒后结束)");
		Sleep(5000);
		system("cls");
		return;
	}
	system("cls");
	printf("你(冲上车):我们成功了!");
	getchar();
	system("cls");
	printf("锤子:那还用说!要是失败了我们都要死在这");
	getchar();
	system("cls");
	printf("你(大笑):主人公要是死了,这剧情没法进行了,啊哈哈哈哈...");
	getchar();
	system("cls");
	printf("老刘:这......(⊙﹏⊙)");
	getchar();
	system("cls");
	printf("锤子:这......(⊙﹏⊙)");
	getchar();
	system("cls");
	printf("老王:这......(⊙﹏⊙)");
	getchar();
	system("cls");
	printf("第六章 出发 完\n恭喜完成第六章,奖励金币100");
	gold+=100;
    Sleep(2000);
    system("cls");
    return;
}
void Level_7()
{
	system("cls");
	printf("第七章 逃离小队(11月4日更新)");
	Sleep(2000);
	system("cls");
	printf("本游戏暂时完结,预计更新时间:11月4日\n");
    printf("如有bug欢迎私信或评论反馈给作者minecraft_herobrine,或在评测记录中搜索R10000000\n");
    printf("谢谢参与游戏\n");
    printf("10秒后自动返回主页面");
    Sleep(10000);
    return;
}
int main()
{
	steve.atk=10;
    steve.def=1;
    steve.exp=0;
    steve.hp=50;
    steve.maxhp=50;
    zombie.nodie=true;
    srand((unsigned)time(NULL));
    system("color 0F");
    printf("文字游戏:生化危机\n");
    Sleep(1000);
    printf("出品人:Herobrine\n");
    Sleep(1000);
    printf("版本:0.11.16\n");
    Sleep(1000);
    printf("按任意键开始");
    getchar();
    system("cls");
    printf("正在检查网络...\n0");
    Sleep(500);
    system("cls");
    printf("正在连接服务器...\n▊15");
    Sleep(700);
    system("cls");
    printf("加载资源中...\n█▎25");
    Sleep(600);
    system("cls");
    printf("加载资源中...\n██▊55");
    Sleep(400);
    system("cls");
    printf("加载资源中...\n███▌70");
    Sleep(300);
    system("cls");
    printf("加载资源中...\n███▊75");
    Sleep(1500);
    system("cls");
    printf("正在加载章节...\n████▌90");
    Sleep(400);
    system("cls");
    printf("正在加载章节...\n█████100");
    Sleep(1000);
    system("cls");
    printf("正在进入游戏...\n█████100");
    Sleep(3000);
    system("cls");
    while(1)
    {
    	steve.hp=1e6;
    	steve.atk=1e6;
    	steve.exp=1e6;
    	steve.maxhp=1e6;
    	steve.def=1e6;
    	printf("<更新>\n");
    	printf("报销了无尽模式\n");
    	printf("加入了第六章\n");
    	printf("11月2日加入第七章\n");
    	printf("输入章节:\n--------------------------\n");
    	printf("64| 无尽模式(未更新,严禁进入,后果自负!)\n");
    	printf("0| 商店\n");
    	printf("1| 起源\n");
    	printf("2| 公司逃生\n");
    	printf("3| 涉险\n");
    	printf("4| 绝境\n");
    	printf("5| 离开公司\n");
    	printf("6| 出发\n");
    	printf("7| 逃离小队(11月4日更新)\n");
    	printf("-1| 退出\n");
    	scanf("%d",&n);
    	if(n==64) no_enter();
    	else if(n==1) Level_1();
    	else if(n==2) Level_2();
    	else if(n==3) Level_3();
    	else if(n==4) Level_4();
    	else if(n==5) Level_5();
    	else if(n==6) Level_6();
    	else if(n==7) Level_7(); 
    	else if(n==0)
		{
			Shop();
			n=1e9;
		}
    	else if(n==-1) break;
    	system("cls");
	}
    return 0;
}

