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
	printf("��һ�� ��Դ");
    Sleep(2000);
    system("cls");
    printf("8��21��,����H�л���,�о����ﶼ�ǿյ�����");
    getchar();
    system("cls");
	printf("������ȥ����˾�ĵ���,ȴ���ֵ�����û����");
    getchar();
    system("cls");
    printf("����7:00,������յ�����,����ƽʱ,�����ϼ������˼���");
    getchar();
    system("cls");
    printf("��:�����,Ϊʲô���������û����?");
    getchar();
    system("cls");
    printf("8:00,����˹�˾,�������������û��,���ҹ�˾���һƬ");
    getchar();
    system("cls");
    printf("������ֻ���Ļ�������ҵ��˵���,���ҵ�����İ칫��");
    getchar();
    system("cls");
    printf("��:զ��ô�ڻ�û���˿��ư�");
    getchar();
    system("cls");
    printf("��(��):������!���˵���˵�仰��!");
    getchar();
    system("cls");
    printf("Ȼ��,���ȿտյ�����,û��һ����");
    getchar();
    system("cls");
    printf("��:��,�����Ȱѵƴ�,����취��");
    getchar();
    system("cls");
    printf("���¿���,���ȵĵ�գ�ۼ�����");
    getchar();
    system("cls");
    printf("��Ȼ,һֻ�ִ�������ı���!");
    getchar();
    system("cls");
    printf("��:��!����ʲô��!�����!");
    getchar();
    system("cls");
    printf("��~~~~~~");
    getchar();
    system("cls");
    printf("���������ʼս��");
    getchar();
    zombie.hp=30;
    zombie.atk=6;
    zombie.def=0;
    zombie.exp=8;
    zombie.lev=1;
    zombie.nodie=true;
    system("cls");
    printf("������Ϣ:\n");
    printf("����:��ʬ    �ȼ�:%d\n",zombie.lev);
    printf("Ѫ��:%d    �˺�:%d    ����:%d    ��ɱ�ɻ��%d����\n",zombie.hp,zombie.atk,zombie.def,zombie.exp);
    Sleep(4000);
    system("cls");
    while(steve.hp>0 && zombie.hp>0)
    {
        printf("����:��ʬ �ȼ�%d\n",zombie.lev);
        printf("���Ѫ��:%d    ��ʬѪ��:%d\n",steve.hp,zombie.hp);
        printf("����:\n");
        printf("1| ��ͨ���� 10�˺� ����1\n");
        scanf("%d",&n);
        if(n==1)
        {
            printf("��Խ�ʬ�����%d�˺�\n",steve.atk-zombie.def);
            zombie.hp=zombie.hp-(steve.atk-zombie.def);
        }
        else printf("��Ч����\n");
        Sleep(1000);
        if(zombie.hp<=0) break;
        printf("��ʬ���������%d�˺�\n",zombie.atk-steve.def);
        steve.hp=steve.hp-(zombie.atk-steve.def);
        Sleep(1000);
        system("cls");
    }
    system("cls");
    if(steve.hp<=0)
    {
        printf("������,����������(5������)");
        Sleep(5000);
        return;
    }
    if(zombie.hp<=0)
    {
        printf("��ϲ��ɱ[%d����ʬ]\n",zombie.lev);
        printf("��þ���:%d\n",zombie.exp);
        steve.exp+=zombie.exp;
        printf("2������\n");
        Sleep(2000);
    }
    system("cls");
    printf("��ɱ����ʬ��,�����Ⱦ�ͷ������һȺ��ʬ!");
    getchar();
    getchar();
    system("cls");
    printf("1| �����İ칫��\n2| ������ƴ��!\n");
    scanf("%d",&n);
    if(n==2)
    {
    	system("cls");
    	printf("������Ѳ�����,�������������֧,���յ����˽�ʬ����\n");
    	Sleep(2000);
    	printf("5����˳���Ϸ");
    	Sleep(5000);
    	return;
	}
    system("cls");
    printf("����ĺ�������Զȥ,�㻺�����߳��˰칫��");
    getchar();
    getchar(); 
    system("cls");
    printf("������ŷ���,��ʬ������Զ���������Ҫ��!");
    getchar();
    system("cls");
    printf("��һ�� ��Դ ��\n");
    printf("��ϲ��ɵ�һ��,�������50");
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
	printf("�ڶ��� ��˾����");
	Sleep(2000);
	system("cls");
	printf("�ص�-��˾14�� ʱ��10:00");
    getchar();
    system("cls");
	printf("��վ�ڿյ�����������,����¥�ݿڵķ���");
    getchar();
    system("cls");
    printf("��:������ȥҲ���ǰ취��,����Ҫ����ʬ����");
    getchar();
    system("cls");
    printf("��:����������ʲô������");
    getchar();
    system("cls");
    while(1)
    {
    	printf("��ʾ:����Χ̽��(��������еص���һ��)\n");
		printf("1| ����ǽ���µ�����\n");
		printf("2| ҩ��\n");
		printf("3| ��İ칫��\n");
		printf("4| �뿪\n");
		scanf("%d",&n);
		if(n==1)
		{
			system("cls");
			if(f1) printf("�����Ѿ�û���ر�Ķ�����");
			else
			{
				printf("���[����],�˺�+20");
				steve.atk+=20; 
				f1=true; 
			}
		}
		if(n==2)
		{
			system("cls");
			if(f2) printf("�����Ѿ�û���ر�Ķ�����");
			else
			{
				printf("���[���],Ѫ��+10");
				steve.hp+=10;
				f2=true; 
			} 
		}
		if(n==3)
		{
			system("cls");
			if(f3) printf("�����Ѿ�û���ر�Ķ�����");
			else
			{
				printf("���[��Ĺ��İ�]");
				f3=true; 
			}
		}
		if(n==4) break;
		Sleep(2000);
		system("cls");
	}
	getchar();
	system("cls");
    printf("��:����,��������ʰ����,����ȥ��,����һ���кܶཀྵʬ");
    getchar();
    system("cls");
    printf("�����֪,����¥�ݿ�����һֻ��ʬ");
    getchar();
    system("cls");
    printf("���������ʼս��");
    getchar();
    zombie.hp=90;
    zombie.atk=11;
    zombie.def=5;
    zombie.exp=24;
    zombie.lev=3;
    zombie.nodie=true;
    system("cls");
    round=1;
    printf("������Ϣ:\n");
    printf("����:��ʬ    �ȼ�:%d\n",zombie.lev);
    printf("Ѫ��:%d    �˺�:%d    ����:%d    ��ɱ�ɻ��%d����\n",zombie.hp,zombie.atk,zombie.def,zombie.exp);
    Sleep(4000);
    system("cls");
    while(steve.hp>0 && zombie.hp>0)
    {
        printf("����:��ʬ �ȼ�%d\n",zombie.lev);
        printf("���Ѫ��:%d ��ʬѪ��:%d\n",steve.hp,zombie.hp);
        printf("����:\n");
        printf("1| ��ͨ���� %d�˺�,����1\n",steve.atk);
        printf("2| ���� 55�˺�,����2\n");
        scanf("%d",&n);
        if(n==1)
        {
            printf("��Խ�ʬ�����%d�˺�\n",steve.atk-zombie.def);
            zombie.hp=zombie.hp-(steve.atk-zombie.def);
            if(zombie.hp<=0) break;
        }
        else if(n==2)
        {
        	if(!f1) printf("��δ��ô˵���"); 
        	else if(round%2==1)
        	{
        		printf("��Խ�ʬ�����%d�˺�\n",55-zombie.def);
        		zombie.hp=zombie.hp-(55-zombie.def);
        		if(zombie.hp<=0) break;
			}
        	else printf("������ȴ��\n"); 
		}
        else printf("��Ч����\n");
        Sleep(1000);
        if(zombie.hp<=0) break;
        printf("��ʬ���������%d�˺�\n",zombie.atk-steve.def);
        steve.hp=steve.hp-(zombie.atk-steve.def);
        Sleep(1000);
        round++;
        system("cls");
    }
    system("cls");
    if(steve.hp<=0)
    {
        printf("������,����������(5������)");
        Sleep(5000);
        return;
    }
    if(zombie.hp<=0)
    {
        printf("��ϲ��ɱ[%d����ʬ]\n",zombie.lev);
        printf("��þ���:%d\n",zombie.exp);
        steve.exp+=zombie.exp;
        printf("2������\n");
        Sleep(2000);
    }
    system("cls");
    printf("�Ǻǲ�����^_^,�ܴ�������,������һЩС�������");
	getchar();
	getchar();
	system("cls");
    printf("1| Ѫ������������75\n");
    steve.maxhp=75;
	getchar();
	system("cls");
    printf("2| Ѫ������");
    steve.hp=steve.maxhp;
	getchar();
	system("cls");
    printf("����һ·˳��,�ݰ�^_^");
	getchar();
	system("cls");
    printf("��������鿴����");
    getchar();
	system("cls");
    printf("Ѫ��:%d/%d\n",steve.hp,steve.maxhp);
    printf("�˺�:%d\n",steve.atk);
    printf("����:%d\n",steve.def);
    printf("����:%d\n",steve.exp);
    getchar();
    system("cls");
    printf("�ص�:��˾12��,�ֿ�\nʱ��:12:00");
    getchar();
    system("cls");
    printf("��:����������û�гԵİ�");
    getchar();
    system("cls");
    printf("��ʾ:����Χ̽��");
    getchar();
    system("cls");
    f1=false;f2=false;f3=false;
    while(1)
    {
    	printf("��ʾ:����Χ̽��(��������еص���һ��)\n");
		printf("1| ��Ϣ��\n");
		printf("2| ҩ����\n");
		printf("3| ����\n");
		printf("4| �뿪\n");
		scanf("%d",&n);
		if(n==1)
		{
			system("cls");
			if(f1) printf("�����Ѿ�û���ر�Ķ�����");
			else
			{
				printf("���[����],����+9");
				steve.def+=9;
				f1=true; 
			} 
		}
		if(n==2)
		{
			system("cls");
			if(f2) printf("�����Ѿ�û���ر�Ķ�����");
			else
			{
				printf("���[����ƿ]x3,�˺�+40");
				steve.atk+=40;
				f2=true;
			} 
		}
		if(n==3)
		{
			system("cls");
			if(f3) printf("�����Ѿ�û���ر�Ķ�����");
			else
			{
				printf("���[�����ӵ�ľ��],�˺�+30");
				steve.atk+=30;
				f3=true; 
			}
		}
		if(n==4) break;
		Sleep(2000);
		system("cls");
	}
	system("cls");
    printf("��!!��!!!");
    getchar();
    getchar();
    system("cls");
    printf("��~~~~~~");
    getchar();
    system("cls");
    printf("���������ʼս��");
    getchar();
    system("cls");
    round=1;
    zombie.atk=20;
    zombie.hp=800;
    zombie.def=20;
    zombie.exp=80;
    zombie.lev=7;
    printf("������Ϣ:\n");
    printf("����:��ʬ    �ȼ�:%d\n",zombie.lev);
    printf("Ѫ��:%d    �˺�:%d    ����:%d    ��ɱ�ɻ��%d����\n",zombie.hp,zombie.atk,zombie.def,zombie.exp);
    Sleep(4000);
    system("cls");
    int remain=3;
    while(steve.hp>0 && zombie.hp>0)
    {
        printf("����:��ʬ �ȼ�%d\n",zombie.lev);
        printf("���Ѫ��:%d/%d ��ʬѪ��:%d\n",steve.hp,steve.maxhp,zombie.hp);
        printf("����:\n");
		printf("1| ��ͨ���� %d�˺�,����1\n",steve.atk);
		printf("2| ���� 80�˺�,����1\n");
		printf("3| �����ӵ�ľ�� 100�˺� ����2\n");
		printf("4| ����ƿ 240�˺� ����1\n");
		printf("С��ʾ:ҩ�����������ӽ�ʬ����ֵ\n");
		scanf("%d",&n);
        if(n==1)
        {
            printf("��Խ�ʬ�����%d�˺�\n",steve.atk-zombie.def);
            zombie.hp=zombie.hp-(steve.atk-zombie.def);
            if(zombie.hp<=0) break;
        }
        else if(n==2)
        {
			printf("��Խ�ʬ�����%d�˺�\n",60-zombie.def);
        	zombie.hp=zombie.hp-(60-zombie.def);
        	if(zombie.hp<=0) break;
		}
		else if(n==3)
		{
			if(!f3) printf("����δ��ô˵���\n"); 
			else if(round%2==1)
        	{
        		printf("��Խ�ʬ�����%d���˺�\n",90-zombie.def);
        		zombie.hp=zombie.hp-(90-zombie.def);
        		if(zombie.hp<=0) break;
			}
        	else printf("������ȴ��\n"); 
		}
		else if(n==4)
		{
			if(!f2) printf("����δ��ô˵���\n");
			else if(remain==0) printf("��������˵���\n");
			else
			{
				printf("��Խ�ʬ�����240���˺�\n");
        		zombie.hp-=240;
        		remain--;
        		if(zombie.hp<=0) break;
			}
		}
        else printf("��Ч����\n");
        Sleep(1000);
        if(zombie.hp<=0) break;
        printf("��ʬ���������%d���˺�\n",zombie.atk-steve.def);
        steve.hp=steve.hp-(zombie.atk-steve.def);
        Sleep(1000);
        round++;
        system("cls");
    }
    system("cls");
    if(steve.hp<=0)
    {
        printf("������,����������(5������)");
        Sleep(5000);
        return;
    }
    if(zombie.hp<=0)
    {
    	Sleep(1000);
        printf("��ϲ��ɱ[%d����ʬ]\n",zombie.lev);
        printf("��þ���:%d\n",zombie.exp);
        steve.exp+=zombie.exp;
        printf("2������\n");
        Sleep(2000);
    }
    system("cls");
    printf("�ڶ��� ��˾���� ��\n");
    printf("��ϲ��ɵڶ���,�������160");
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
	printf("������Ϣ:\n");
    printf("����:��ʬ    �ȼ�:%d\n",zombie.lev);
    printf("Ѫ��:%d    �˺�:%d    ����:%d    ��ɱ�ɻ��%d����\n",zombie.hp,zombie.atk,zombie.def,zombie.exp);
    Sleep(4000);
    system("cls");
	while(steve.hp>0 && zombie.hp>0)
    {
        printf("����:��ʬ �ȼ�%d\n",zombie.lev);
        printf("���Ѫ��:%d/%d ��ʬѪ��:%d\n",steve.hp,steve.maxhp,zombie.hp);
        printf("����:\n");
		printf("1| ��ͨ���� %d�˺�,����1\n",steve.atk);
		printf("2| ���� 100�˺�,����1\n");
		printf("3| �����ӵ�ľ�� 150�˺� ����2\n");
		printf("4| ׶�� 120�˺� ����1\n");
		scanf("%d",&n);
        if(n==1)
        {
            printf("��Խ�ʬ�����%d�˺�\n",steve.atk-zombie.def);
            zombie.hp=zombie.hp-(steve.atk-zombie.def);
            if(zombie.hp<=0) break;
        }
        else if(n==2)
        {
			printf("��Խ�ʬ�����%d�˺�\n",100-zombie.def);
        	zombie.hp=zombie.hp-(100-zombie.def);
        	if(zombie.hp<=0) break;
		}
		else if(n==3)
		{
			if(round%2==1)
        	{
        		printf("��Խ�ʬ�����%d���˺�\n",150-zombie.def);
        		zombie.hp=zombie.hp-(150-zombie.def);
        		if(zombie.hp<=0) break;
			}
        	else printf("������ȴ��\n"); 
		}
		else if(n==4)
		{
			if(!f1) printf("����δ��ô˵���\n");
			else
			{
				printf("��Խ�ʬ�����%d���˺�\n",120-zombie.def);
        		zombie.hp=zombie.hp-(120-zombie.def);
        		if(zombie.hp<=0) break;
			}
		}
        else printf("��Ч����\n");
        Sleep(1000);
        if(zombie.hp<=0) break;
        printf("��ʬ���������%d���˺�\n",zombie.atk-steve.def);
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
	printf("�ص�:��˾8��\nʱ��17:30");
	getchar();
	getchar();
	system("cls");
	printf("��:һ��һ����Ҳ���ǰ취,�����ҿ�����������?");
	getchar();
	system("cls");
	f1=false;f2=false;f3=false;
	bool key=false,door=false,light=false;
	while(n!=5)
	{
		printf("��ʾ:����Χ̽��(����̽�����еص�)\n");
		printf("1| ��Ŀ��Ӷ�\n");
		printf("2| �����\n");
		printf("3| ���ȵĵ�ƿ���\n");
		printf("4| װ�޹������µ����\n");
		printf("5| �뿪\n");
		scanf("%d",&n);
		if(n==1)
		{
			if(!key)
			{
				printf("���[����ҵ�Կ��]\n");
				key=true;
			}
			else printf("�����Ѿ�û���ر�Ķ�����\n");
		}
		if(n==2)
		{
			if(!key) printf("��ס��,��Ҫ[����ҵ�Կ��]\n");
			else if(!door)
			{
				printf("��:���������̫����,������������բ��?\n");
				Sleep(1000);
				system("cls");
				printf("�������˵�բ\n");
				door=true;
			}
			else printf("����ĵ�բ�Ѿ�����\n");
		}
		if(n==3)
		{
			if(!door) printf("��:��û�з�Ӧ,�ǲ��ǵ�բû��?\n");
			else if(!light)
			{
				printf("�㰴���˵�ƿ���\n");
				light=true;
			}
			else printf("����ĵ��Ѿ�����\n"); 
		}
		if(n==4 || n==5)
		{
			if(!light)
			{
				printf("����̫����,��Ҫ�򿪵��\n");
				Sleep(1000);
				system("cls");
				continue;
			}
			else if(n==4)
			{
				f1=true;
				printf("���[׶��],�˺�+20");
				steve.atk+=20;
			}
			else if(n==5) break;
		}
		Sleep(1000);
		system("cls");
	}
	getchar();
	system("cls");
	printf("�ص�:��˾8��,���ݱ��õ�Դ������\nʱ��19:00\n");
	getchar();
	system("cls");
	printf("��������򿪵��ݱ��õ�Դ\n");
	getchar();
	system("cls");
	printf("��!!~~~~~~");
	getchar();
	steve_vs_zombie();
	if(zombie.hp<=0)
    {
    	Sleep(1000);
        printf("��ϲ��ɱ[%d����ʬ]\n",zombie.lev);
        printf("��þ���:%d\n",zombie.exp);
        steve.exp+=zombie.exp;
        printf("2������\n");
        Sleep(2000);
    }
	return;
}
void Level_3()
{
	system("cls");
	printf("������ ����");
	Sleep(2000);
    system("cls");
    printf("�ص�:��˾12��,�ֿ�\nʱ��17:00");
    getchar();
    getchar();
    system("cls");
    printf("��:̫��Ҫ��ɽ��,�ҵøϽ���ȥ!");
    getchar();
    system("cls");
    n=0;
    while(n!=1)
    {
    	printf("1| ��������\n2| �ڲֿ��ҹ\n");
    	scanf("%d",&n);
    	if(n==1) break;
    	if(n==2) printf("����������ǽ�ʬ�Ĳֿ��ҹ������?\n");
    	if(n!=1 && n!=2) printf("��Ч����");
    	Sleep(1000);
    	system("cls");
	}
	if(n==1) Level_3_1();
	if(dead)
	{
		printf("������,����������(5������)");
        Sleep(5000);
        return;
	}
    getchar();
    system("cls");
    printf("��������������");
    getchar();
    system("cls");
    printf("�ص�:��˾2��,���ݼ�\nʱ��20:00");
    getchar();
    system("cls");
    printf("��������򿪵��ݼ����");
    getchar();
    system("cls");
    printf("��!!                            \n");
    printf("        �Ż~~~~(�ǽ�ʬ������!) \n");
    printf("                    ����......! \n");
    getchar();
    system("cls");
    printf("��(����+С��):��һ��,�����˾����ô��!��ô�ཀྵʬ!!!");
    getchar();
    system("cls");
    printf("������ ���� ��\n");
    printf("��ϲ��ɵ�����,�������100");
    printf("\n[����]#::714[/color=write]");
    gold+=100;
    Sleep(3000);
    return;
}
void Shop()
{
	int buy;
	system("cls");
	printf("��ӭ���������̵�\n");
	printf("�����кܶ�����,��ӭǰ��ѡ��(�ܶ�?)\n");
	printf("�����������\n");
	getchar();
	getchar();
	system("cls");
	while(1)
	{
		printf("0| ��ȡ���\n");
		printf("1| ɽ�� 18���\n");
		printf("2| ɭ�� 68���\n");
		printf("3| �޺� 168���\n");
		printf("4| ɳĮ 68���\n");
		printf("5| ��ʥ������ 48���\n");
		printf("6| ����֮�� 98���\n");
		printf("7| ��ʥ�� 138���\n");
		printf("8| ��ʥ���껪 158���\n");
		printf("64| ��ʥ�����ְ� 350���(8���Ż�)\n");
		printf("-1| �뿪\n");
		printf("������:%d\nע��:�����ظ�����!\n",gold);
		scanf("%d",&n);
		if((n<-1 || n>8) && n!=64) printf("��Ч����");
		if(n==1)
		{
			if(gold<18) printf("��Ҳ���!");
			else
			{
				system("cls");
				printf("�Ƿ񻨷�18��ҹ���[��������:ɽ��]?\n0| ������\n1| ȷ�Ϲ���\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("��ϲ����ɹ�,���[��������:ɽ��]\n");
					printf("������ַ��ȡ����\nhttps://pan.baidu.com/s/1JCXlZkRA3mlOzlOUpVqfrQ\n");
					printf("����:f2r%c",'7'+'1'-1);
					gold-=18;
					getchar();
					getchar(); 
				}
			}
		}
		if(n==2)
		{
			if(gold<58) printf("��Ҳ���!");
			else
			{
				system("cls");
				printf("�Ƿ񻨷�58��ҹ���[��������:ɭ��]?\n0| ������\n1| ȷ�Ϲ���\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("��ϲ����ɹ�,���[��������:ɭ��]\n");
					printf("������ַ��ȡ����\nhttps://pan.baidu.com/s/1eVMc8RLZUVaOQRmZtaRy9A\n");
					printf("����:%cpv%c",'P'+' ','e'-'1');
					gold-=58;
					getchar();
					getchar();
				}
			}
		}
		if(n==3)
		{
			if(gold<128) printf("��Ҳ���!");
			else
			{
				system("cls");
				printf("�Ƿ񻨷�128��ҹ���[��������:�޺�]?\n0| ������\n1| ȷ�Ϲ���\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("��ϲ����ɹ�,���[��������:�޺�]\n");
					printf("������ַ��ȡ����\nhttps://pan.baidu.com/s/1xcBX9ptWJ1wpXuWe4p9idg\n");
					printf("����:%c%cxg",'1'+'7','C'+' ');
					gold-=128;
					getchar();
					getchar();
				}
			}
		}
		if(n==4)
		{
			if(gold<68) printf("��Ҳ���!");
			else
			{
				system("cls");
				printf("�Ƿ񻨷�68��ҹ���[��������:ɳĮ]?\n0| ������\n1| ȷ�Ϲ���\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("��ϲ����ɹ�,���[��������:ɳĮ]\n");
					printf("������ַ��ȡ����\nhttps://pan.baidu.com/s/1IJ0g3e-hdp6pPvicNcsQ2A\n");
					printf("����:vn%ct",'j'-'2'-'B'+' '+' ');
					gold-=68;
					getchar();
					getchar();
				}
			}
		}
		if(n==5)
		{
			if(gold<48) printf("��Ҳ���!");
			else
			{
				system("cls");
				printf("�Ƿ񻨷�48��ҹ���[��������:��ʥ������]?\n0| ������\n1| ȷ�Ϲ���\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("��ϲ����ɹ�,���[��������:��ʥ������]\n");
					printf("������ַ��ȡ����\nhttps://pan.baidu.com/s/1SehBwxwqDsubDoewmR4a1g\n");
					printf("����:jfk4");
					gold-=48;
					getchar();
					getchar();
				}
			}
		}
		if(n==6)
		{
			if(gold<98) printf("��Ҳ���!");
			else
			{
				system("cls");
				printf("�Ƿ񻨷�98��ҹ���[��������:����֮��]?\n0| ������\n1| ȷ�Ϲ���\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("��ϲ����ɹ�,���[��������:����֮��]\n");
					printf("������ַ��ȡ����\nhttps://pan.baidu.com/s/1sQ1yWX-A6KOTlk-6fiI4NQ\n");
					printf("����:tgwu");
					gold-=98;
					getchar();
					getchar();
				}
			}
		}
		if(n==7)
		{
			if(gold<138) printf("��Ҳ���!");
			else
			{
				system("cls");
				printf("�Ƿ񻨷�138��ҹ���[��������:��ʥ��]?\n0| ������\n1| ȷ�Ϲ���\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("��ϲ����ɹ�,���[��������:��ʥ��]\n");
					printf("������ַ��ȡ����\nhttps://pan.baidu.com/s/1XQsDgMDOjJSyUsxV5ypb2w\n");
					printf("����:f2k8");
					gold-=138;
					getchar();
					getchar();
				}
			}
		}
		if(n==8)
		{
			if(gold<158) printf("��Ҳ���!");
			else
			{
				system("cls");
				printf("�Ƿ񻨷�158��ҹ���[��������:��ʥ���껪]?\n0| ������\n1| ȷ�Ϲ���\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("��ϲ����ɹ�,���[��������:��ʥ���껪]\n");
					printf("������ַ��ȡ����\nhttps://pan.baidu.com/s/1U1HeLjpFdVtbluc_NQhZPw\n");
					printf("����:wqrs");
					gold-=68;
					getchar();
					getchar();
				}
			}
		}
		if(n==9)
		{
			if(gold<350) printf("��Ҳ���!");
			else
			{
				system("cls");
				printf("�Ƿ񻨷�350��ҹ���[��������:��ʥ�����ְ�]?\n0| ������\n1| ȷ�Ϲ���\n");
				scanf("%d",&buy);
				if(buy==1)
				{
					system("cls");
					printf("��ϲ����ɹ�,���:\n[��������:��ʥ������]\n[��������:����֮��]\n[��������:��ʥ��]\n[��������:��ʥ���껪]\n");
					printf("������ַ��ȡ����\n");
					printf("��ʥ������ https://pan.baidu.com/s/1SehBwxwqDsubDoewmR4a1g ����:jfk4\n");
					printf("����֮��   https://pan.baidu.com/s/1sQ1yWX-A6KOTlk-6fiI4NQ ����:tgwu\n");
					printf("��ʥ��     https://pan.baidu.com/s/1XQsDgMDOjJSyUsxV5ypb2w ����:f2k8\n");
					printf("��ʥ���껪 https://pan.baidu.com/s/1U1HeLjpFdVtbluc_NQhZPw ����:wqrs\n");
					gold-=350;
					getchar();
					getchar();
				}
			}
		}
		if(n==0)
		{
			int g=rand()%10;
			printf("��ϲ���[���]x%d\n",g);
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
	printf("������ ����");
	Sleep(2000);
	system("cls");
	printf("��:���а�һֱ������ų���Ҫ����!\n");
	getchar();
	getchar();
	system("cls");
	printf("3��:��!~~~��!~~~~\n");
	getchar();
	system("cls");
	printf("��:����!3��Ҳ�кöཀྵʬ......\n");
	getchar();
	system("cls");
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		printf("������...\n");
		for(j=1;j<=i;j++) printf("��");
		printf("%d",i*20);
		Sleep(500);
		if(i==5) break;
		system("cls"); 
	}
	Sleep(1000);
	system("cls");
	int r;
	printf("��:ȥ4��!\n");
	getchar();
	system("cls");
	printf("�ص�:��˾4��,���ݼ�\nʱ��:21:00\n");
	getchar();
	system("cls");
	printf("��:��¥������ȥ,�㿪����!\n");
	getchar(); 
	system("cls");
	printf("��:�ص�:��˾4��,����ͨ��\nʱ��:21:10\n");
	getchar();
	system("cls");
	printf("��!����!!!��!!!!!!\n");
	getchar();
	system("cls");
	printf("��˾ʵ��¥11�㷢����ը\n");
	getchar();
	system("cls");
	printf("��:��!!\n��!��!��!!    ���ܵ���ը�ĳ�������ӽ���ͨ����ˤ����ȥ\n");
	getchar();
	system("cls");
	printf("��ˤ����3��Ľ���ͨ����\n");
	getchar();
	system("cls");
	printf("��!!!!\n");
	getchar();
	system("cls");
	printf("��������ʱ,һֻ��ʬ��������\n");
	getchar();
	system("cls");
	printf("��:��!!�߿�!!!!\n");
	getchar();
	system("cls");
	printf("��!!!!!!\n");
	getchar();
	system("cls");
	printf("ž!����������\n");
	getchar();
	system("cls");
	printf("???:����˭\n");
	getchar();
	system("cls");
	printf("[����][color=#0112FF]::|��:��,��,���ǹ�˾��Ա��[/color:white]\n");
	getchar();
	system("cls");
	printf("???:���ǹ�˾�ı���,����\n");
	getchar();
	system("cls");
	printf("��!��!��!!!!\n");
	getchar();
	system("cls");
	printf("����:����,������Ҫ����!�ӽ���ͨ����ȥ!\n");
	getchar();
	system("cls");
	printf("��:Ŷ�õ�!������Ҳ����!\n");
	getchar();
	system("cls");
	printf("����:��ȥ!�Ӵ��ų�ȥ!\n");
	getchar();
	system("cls");
	printf("��:�칫¥���ſ���һֻ��ʬ,������\n");
	getchar();
	system("cls");
	printf("���������ʼս��\n");
	getchar();
	system("cls");
	printf("����:��������,�ҷ�ɢ����ע����!��Ӳ����!\n");
	getchar();
	system("cls");
	zombie.atk=15;
	zombie.def=30;
	zombie.exp=72;
	zombie.hp=600;
	zombie.lev=8;
	int atk_laoliu=60;
	printf("������Ϣ:\n");
    printf("����:��ʬ    �ȼ�:%d\n",zombie.lev);
    printf("Ѫ��:%d    �˺�:%d    ����:%d    ��ɱ�ɻ��%d����\n",zombie.hp,zombie.atk,zombie.def,zombie.exp);
    Sleep(4000);
    system("cls");
	while(steve.hp>0 && zombie.hp>0)
    {
    	r=64;
        printf("����:��ʬ �ȼ�%d\n",zombie.lev);
        printf("���Ѫ��:%d/%d ��ʬѪ��:%d\n",steve.hp,steve.maxhp,zombie.hp);
        printf("����:\n");
		printf("1| ��ͨ���� %d�˺�,����1\n",steve.atk);
		printf("2| ׶�� 90�˺�,����1/4\n");
		printf("3| ���� 160�˺� ����1\n");
		scanf("%d",&n);
        if(n==1)
        {
            printf("��Խ�ʬ�����%d�˺�\n",steve.atk-zombie.def);
            zombie.hp=zombie.hp-(steve.atk-zombie.def);
        }
        else if(n==2)
        {
			printf("��Խ�ʬ�����%d�˺�\n",90-zombie.def);
			Sleep(500);
			printf("��Խ�ʬ�����%d�˺�\n",90-zombie.def);
			Sleep(500);
			printf("��Խ�ʬ�����%d�˺�\n",90-zombie.def);
			Sleep(500);
			printf("��Խ�ʬ�����%d�˺�\n",90-zombie.def);
			Sleep(500);
        	zombie.hp=zombie.hp-(90-zombie.def)*4;
		}
		else if(n==3)
		{
			printf("��Խ�ʬ�����%d�˺�\n",160-zombie.def);
        	zombie.hp=zombie.hp-(160-zombie.def);
		}
        else printf("��Ч����\n");
        Sleep(1000);
        r=rand()%3;
        if(r!=0)
        {
        	printf("�����Խ�ʬ�����%d�˺�\n",atk_laoliu-zombie.def);
        	zombie.hp=zombie.hp-(atk_laoliu-zombie.def);
		}
        if(zombie.hp<=0) break;
        r=rand()%4;
        if(r==0)
        {
        	printf("��ʬ���������%d�˺�\n",zombie.atk-steve.def);
        	steve.hp=steve.hp-(zombie.atk-steve.def);
		}
        else printf("��ʬȥ׷������,û��ע�⵽��\n");
        Sleep(2000);
        system("cls");
    }
    system("cls");
    if(zombie.hp<=0)
	{
		printf("��ϲ��ɱ[%d����ʬ]\n��þ���:%d\n2������\n",zombie.lev,zombie.exp);
		steve.exp+=zombie.exp;
	}
	if(steve.hp<=0)
	{
		printf("������,����������(5������)");
		Sleep(5000);
		return;
	}
    Sleep(2000);
    system("cls");
	printf("��:��������!������ʬ׷������!\n");
	getchar();
	getchar();
	system("cls");
	printf("����������˾���ſ�,ȴ����ǰ�ľ��󾪴���!\n");
	getchar();
	system("cls");
	printf("���ſ�ȫ�ǽ�ʬ,��������ȥ\n");
	getchar();
	system("cls");
	printf("���ͬʱ,������ʬҲ�Ӱ칫¥׷�˳���\n");
	getchar();
	system("cls");
	printf("������ ���� ��\n��ϲ��ɵ�����,�������100");
	gold+=100;
	Sleep(2000);
	system("cls");
	return;
}
void dead_1()
{
	system("cls");
	printf("����������ſڵĽ�ʬʱ,���Ľ�ʬ�Ѿ�Χ������,��ǰ��ʬ��Χ��,���ǵ�����\n");
	getchar();
	getchar();
	printf("��ʾ:��Ҫ����Ұ�����ڼ���ѡ����,����㳢��һ��ѡ��֮�������,һ����ɹ���!(10����˳�)");
	Sleep(10000);
	system("cls");
	return;
}
void dead_2()
{
	system("cls");
	printf("�����������Ľ�ʬʱ,������Ľ�ʬ�Ѿ�Χ������,��ǰ��ʬ��Χ��,���ǵ�����\n");
	getchar();
	getchar();
	printf("��ʾ:��Ҫ����Ұ�����ڼ���ѡ����,����㳢��һ��ѡ��֮�������,һ����ɹ���!(10����˳�)");
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
	printf("������ �뿪��˾\n");
	Sleep(2000);
	system("cls");
	printf("��:��ô��!����Ľ�ʬ׷������!����û��·��!\n");
	getchar();
	getchar();
	system("cls");
	printf("����:Ҫôͻ��ǰ��,���빫˾;Ҫôͻ�ƺ���,���ع�˾,����취\n");
	getchar();
	system("cls");
	printf("��:���Ǳ�����������\n");
	getchar();
	system("cls");
	printf("����:��!Ҫ�����ǳ��ع�˾�칫¥,����취\n");
	getchar();
	system("cls");
	printf("��:˵�����칫¥�����Ѿ��ϲ�ȥ��,¥�ϵĽ�ʬ��������,���������ǰ��?\n");
	getchar();
	system("cls");
	printf("����:ûʱ����!�����Ѿ�����������!\n");
	getchar();
	system("cls");
	while(1)
	{
		printf("1| ��ǰͻ��\n");
		printf("2| ���ͻ��\n");
		scanf("%d",&n); 
		if(n<=0 || n>3)
		{
			printf("��Ч����\n");
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
	printf("�Ǻ����ѡ���ǲ��Ǻܿ�?\n");
	getchar();
	system("cls");
	printf("�������ڼ�������������");
	getchar();
	system("cls");
	printf("��:��������!��Χǽ����ȥ!");
	getchar();
	system("cls");
	printf("��:������?");
	getchar();
	system("cls");
	printf("����:������!����ȥ!");
	getchar();
	system("cls");
	printf("����:�ҸղŸ������˵�ҩ,�����ϰ�");
	getchar();
	system("cls");
	printf("���[�ƾ�����],Ѫ��+15");
	steve.hp+=15;
	getchar();
	system("cls");
	printf("���[����],Ѫ���ظ���70");
	steve.hp=70;
	getchar();
	system("cls");
	printf("���[ֹʹҩ],Ѫ������+25,Ѫ��+20");
	steve.maxhp+=25;
	steve.hp+=20;
	getchar();
	system("cls");
	printf("��:лл!");
	getchar();
	system("cls");
	printf("����:�һ����������");
	getchar();
	system("cls");
	printf("���[Ӳֽ��],����+15");
	steve.def+=15;
	getchar();
	system("cls");
	printf("����:��!�Ǹ���ʬ....");
	getchar();
	system("cls");
	printf("��:�о��Ǹ���ʬ�������Ĳ�̫һ��......?");
	getchar();
	system("cls");
	printf("��ʬ:��!~~~~~~");
	getchar();
	system("cls");
	printf("��:Ŷ!������������");
	getchar();
	system("cls");
	printf("����:�ۻ�����ս��");
	getchar();
	system("cls");
	printf("��:��!");
	getchar();
	system("cls");
	printf("���������ʼս��");
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
	printf("������Ϣ:\n");
    printf("����:�綾��ʬ    �ȼ�:%d\n",zombie.lev);
    printf("Ѫ��:%d    �˺�:%d|�綾�˺�:%d/2    ����:%d    ��ɱ�ɻ��%d����(8������)\n",zombie.hp,zombie.atk,zombie.poisonous_atk,zombie.def,zombie.exp);
	printf("ע��:�綾�˺�:atk/round����˼�ǽ�ʬ�ĳ����˺�Ϊatkÿ�غ�(�����ܵ���ʬ��ͨ�˺��Ļغ�,��Ϊ���һ���ܵ������˺��Ļغ�),����round�غ�(�ܵ���ʬ��ͨ�˺��Ļغ����һ���غ�)");
    Sleep(8000);
    system("cls");
	while(steve.hp>0 && zombie.hp>0)
    {
    	r=64;
        printf("����:�綾��ʬ �ȼ�%d\n",zombie.lev);
        printf("���Ѫ��:%d/%d ��ʬѪ��:%d\n",steve.hp,steve.maxhp,zombie.hp);
        printf("����:\n");
		printf("1| ��ͨ���� %d�˺�,����1\n",steve.atk);
		printf("2| ׶�� 100�˺�,����1/4\n");
		printf("3| ���� 220�˺� ����1/2\n");
		scanf("%d",&n);
        if(n==1)
        {
            printf("��Խ�ʬ�����%d�˺�\n",steve.atk-zombie.def);
            zombie.hp=zombie.hp-(steve.atk-zombie.def);
        }
        else if(n==2)
        {
			printf("��Խ�ʬ�����%d�˺�\n",100-zombie.def);
			Sleep(500);
			printf("��Խ�ʬ�����%d�˺�\n",100-zombie.def);
			Sleep(500);
			printf("��Խ�ʬ�����%d�˺�\n",100-zombie.def);
			Sleep(500);
			printf("��Խ�ʬ�����%d�˺�\n",100-zombie.def);
			Sleep(500);
        	zombie.hp=zombie.hp-(100-zombie.def)*4;
		}
		else if(n==3)
		{
			printf("��Խ�ʬ�����%d�˺�\n",220-zombie.def);
			Sleep(750);
			printf("��Խ�ʬ�����%d�˺�\n",220-zombie.def);
			Sleep(750);
        	zombie.hp=zombie.hp-(220-zombie.def)*2;
		}
        else printf("��Ч����\n");
        Sleep(1000);
        r=rand()%2;
        if(r!=0)
        {
        	printf("�����Խ�ʬ�����%d�˺�\n",atk_laoliu-zombie.def);
        	zombie.hp=zombie.hp-(atk_laoliu-zombie.def);
		}
        if(zombie.hp<=0) break;
        r=rand()%4;
        if(r==0)
        {
        	printf("��ʬ���������%d�˺�\n",zombie.atk-steve.def);
        	steve.hp=steve.hp-(zombie.atk-steve.def);
        	poisoned_remain=2;
		}
        else printf("��ʬȥ׷������,û��ע�⵽��\n");
        if(poisoned_remain>0)
        {
        	printf("���յ��ж��˺�10\n");
        	steve.hp-=10;
        	poisoned_remain--;
		}
        Sleep(2000);
        system("cls");
    }
    system("cls");
    if(zombie.hp<=0)
	{
		printf("��ϲ��ɱ[%d���綾��ʬ]\n��þ���:%d\n2������\n",zombie.lev,zombie.exp);
		Sleep(2000);
		steve.exp+=zombie.exp;
	}
	if(steve.hp<=0)
	{
		printf("������,����������(5������)");
		Sleep(5000);
		system("cls");
		return;
	}
	system("cls");
	printf("��(��):F*CK!�⽩ʬ�ж���!!!!!!");
	getchar();
	getchar();
	system("cls");
	printf("����:��,ǰ������");
	getchar();
	system("cls");
	printf("����:ȥ����");
	getchar();
	system("cls");
	printf("��:�����,����˭?");
	getchar();
	system("cls");
	printf("��:����ס���Աߵľ�������?");
	getchar();
	system("cls");
	printf("? ? ?:����?");
	getchar();
	system("cls");
	printf("����:Ŷ,������L��˾�ı�����Ա��");
	getchar();
	system("cls");
	printf("? ? ?:���Ǿ��ӵ���,һ��ʿ��");
	getchar();
	system("cls");
	printf("��:Ϊʲô������ֶ��ǽ�ʬ��?");
	getchar();
	system("cls");
	printf("ʿ��:8��13������,S�н������ֽ�ʬ������Ⱦ��,����...");
	getchar();
	system("cls");
	printf("��!����!!��!!!");
	getchar();
	system("cls");
	printf("ʿ��:���ǵ�������,���Ҹ���ȫ�ĵط��ں�����˵��");
	getchar();
	system("cls");
	printf("��:ȥ�ҼҰ�,���ﰲȫһЩ");
	getchar();
	system("cls");
	printf("��:���ھ�������");
	getchar();
	system("cls");
	printf("ʿ��:�����þ�ȫ�������ʬ,��S�г���������8��16�հ������˳���");
	getchar();
	system("cls");
	printf("ʿ��:��Ȼ����������������ʱѹ�ƽ�ʬ,��������,����������̫����,8��18������S�г���ʧ��,�ܶ��˶�����Ⱦ��");
	getchar();
	system("cls");
	printf("ʿ��:8��19������,����Ҳ��ʼ����,���ǵĳ���S�г�����Ե����ʬΧ��");
	getchar();
	system("cls");
	printf("ʿ��:����һ��20����,ֻ����,�ҵ�3��ս�Ѻ��ҵİ೤5�������˳���,�����˶�������");
	getchar();
	system("cls");
	printf("ʿ��:�Һ��ҵ�ս����ɢ��,�ҵİ೤˵��Ҫȥ�̳���ʳ��,�������������,Ȼ���̳��Ｘ��ǹ��֮���û����");
	getchar();
	system("cls");
	printf("ʿ��:������,�ҳ��ص���");
	getchar();
	system("cls");
	printf("��:Ҳ����˵S�е������ǽ�ʬ,���ǳ���ȥ��?");
	getchar();
	system("cls");
	printf("����:���ǿ���ȥM�а�,�����ⲻԶ");
	getchar();
	system("cls");
	printf("ʿ��:������S��,��Χ�������ж�������");
	getchar();
	system("cls");
	printf("��:������ȥ�İ�?");
	getchar();
	system("cls");
	printf("ʿ��:Ŀǰ������Ҵ��ߺ;��Ӷ���H��");
	getchar();
	system("cls");
	printf("ʿ��:������һ��ת��·�ߵĵ�ͼ,��̫����");
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
	printf("ʿ��:������*��λ��,�󲿶Ӵ�����·����,һ������,һ������,ÿ�����е���������#");
	getchar();
	printf("ʿ��:�������ȥM��,�ͱ��뾭��S�еĽ���ɭ��,���Ｘ��û�в���,��ʬ����,������������Я������������,ÿ��һ���˶����������˶�����");
	getchar();
	printf("ʿ��:��������г�,�����㹻��ȼ��,�����ȵ�C��,�ڴ�C�е�H��");
	getchar();
	printf("��:�������S�еĽ���ɭ����?");
	getchar();
	printf("ʿ��:ɭ���ﶼ����,������,�����ױ���ʬ����");
	getchar();
	printf("ʿ��:����������ǹ�ڳ��ϴ�,��Ȼ�������ᱻ��Χ");
	getchar();
	printf("��:C��̫��ɢ��,��������̫��,��M������ֱ�ӳ�H������");
	getchar();
	printf("����:D��Ϊʲô����ȥ?");
	getchar();
	printf("ʿ��:D��̫С��,���ʲ�����,����Ӧ�����˽�ʬ");
	getchar();
	printf("��:Ҫ��������������װһ��,ֱ��ȥM��?");
	getchar();
	system("cls");
	printf("������ �뿪��˾ ��\n��ϲ��ɵ�����,�������120");
	gold+=120;
	Sleep(2000);
    system("cls");
    return;
}
/*
void Endless_mode()
{
	printf("�޾�ģʽ\n");
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
        	printf("����:��ʬ �ȼ�%d\n",zombie.lev);
        	printf("���Ѫ��:%d/%d ��ʬѪ��:%d\n",steve.hp,steve.maxhp,zombie.hp);
        	printf("�����Ϣ:�˺�:%d,����:%d,��Ϸ�������%d���\n",steve.atk,steve.def,g);
        	printf("��ʬ��Ϣ:�˺�:%d,����:%d,��ɱ���%d���\n",zombie.atk,zombie.def,zombie_gold);
			printf("1| ���� %d�˺� ����",steve.atk);
			if(speed==1) printf("1\n");
			else printf("1/%d\n",speed);
			r2=rand()%100;
			printf("2| ���� ");
			char ch='%';
			printf("����%d%c�ĸ��ʶ����ʬ����\n",r2,ch);
			printf("-1| �뿪\n");
			scanf("%d",&n);
			if(n==1)
			{
				int i=1;
				while(i<=speed)
				{
					printf("��Խ�ʬ�����%d�˺�\n",steve.atk-zombie.def);
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
					printf("��ϲ,�ɹ��Ķ㿪��ʬ�Ĺ���\n");
					Sleep(1000);
				}
				else
				{
					printf("���ź�,��δ�ܶ㿪��ʬ�Ĺ���\n");
					Sleep(1000);
					printf("��ʬ���������%d�˺�\n",zombie.atk-steve.def);
					steve.hp=steve.hp-(zombie.atk-steve.def);
					Sleep(1000);
				}
			}
			else if(n==-1)
			{
				printf("���뿪���޾�ģʽ,4��󷵻����˵�\n");
				Sleep(4000);
				return; 
			}
			else printf("��Ч����");
			if(n!=2)
			{
				printf("��ʬ���������%d�˺�",zombie.atk-steve.def);
				steve.hp=steve.hp-(zombie.atk-steve.def);
			}
			if(steve.hp<=0)
			{
				system("cls");
				printf("������,����������\n��ý��:%d\n5������",g);
				gold+=g;
				Sleep(5000);
				return;
			}
			if(zombie.hp<=0) break;
			system("cls");
		}
		printf("��ϲ��ɱ[%d����ʬ],��ý��%d\n2������",zombie.lev,zombie_gold);
		g+=zombie_gold;
		Sleep(2000);
		zombie.lev++;
		system("cls");
		printf("��ѡ��ǿ������\n");
		printf("1| Ѫ��\n");
		printf("2| �˺�\n");
		printf("3| ����\n");
		printf("4| ���(δ����)\n");
		scanf("%d",&n);
		if(n==1)
		{
			r1=rand()%5;
			if(r1==0 || r1==1)
			{
				int maxn=rand()%3*10+10;
				printf("Ѫ����������%d",maxn);
				steve.maxhp+=maxn;
				steve.hp+=maxn;
				Sleep(2000);
			}
			else
			{
				r1=rand()%50;
				if(r1>=0 && r1<5)
				{
					printf("Ѫ������\n");
					steve.hp=steve.maxhp;
					Sleep(2000);
				}
				if(r1>=5 && r1<12)
				{
					char ch='%';
					printf("Ѫ���ظ���90%c",ch);
					steve.hp=steve.maxhp/10*9;
					Sleep(2000);
				}
				if(r1>=12 && r1<20)
				{
					char ch='%';
					printf("Ѫ���ظ���75%c",ch);
					steve.hp=steve.maxhp/100*75;
					Sleep(2000);
				}
				if(r1>=20 && r1<30)
				{
					printf("Ѫ��+50\n");
					steve.hp+=50;
					if(steve.hp>steve.maxhp)
					{
						printf("Ѫ����������!���ֻ�ܻظ���%d!",steve.maxhp);
						steve.hp=steve.maxhp;
					}
					Sleep(2000);
				}
				if(r1>=30)
				{
					printf("Ѫ��+30\n");
					steve.hp+=30;
					if(steve.hp>steve.maxhp)
					{
						printf("Ѫ����������!���ֻ�ܻظ���%d!",steve.maxhp);
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
				printf("����5����ʬ1�ι�������");
				Second_kill=5;
			}
			if(r1>=1 && r1<5)
			{
				printf("����3����ʬ1�ι�������");
				Second_kill=3;
			}
			if(r1>=5 && r1<10)
			{
				printf("����2����ʬ1�ι�������");
				Second_kill=2;
			}
			if(r1>=10 && r1<18)
			{
				printf("��1����ʬ1�ι�������");
				Second_kill=1;
			}
			if(r1>=18 && r1<30)
			{
				printf("����2����ʬǰ2�غϵĹ���Ϊ10\n");
				Quick.Quick_speed=10;
				Quick.Quick_round=2;
				Quick.Quick_zombie=2;
				
			}
			if(r1>=30 && r1<50)
			{
				printf("��һ����ʬ��һ�غϵĹ���Ϊ15\n");
				Quick.Quick_speed=15;
				Quick.Quick_round=1;
				Quick.Quick_zombie=1;
			}
			if(r1>=50 && r1<75)
			{
				printf("�˺�x4");
				steve.atk*=4;
			}
			if(r1>=75 && r1<100)
			{
				printf("�˺�x3");
				steve.atk*=3;
			}
			if(r1>=100 && r1<130)
			{
				printf("�˺�x2");
				steve.atk*=2;
			}
			if(r1>=130 && r1<160)
			{
				printf("�˺�+50");
				steve.atk+=50; 
			}
			if(r1>=160)
			{
				printf("�˺�+30");
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
		printf("���Ѿ�˵�˽�ֹ����,���������ȥ��,��������԰���Ctrl+cȻ���Լ����޾�ģʽ(���Ѿ�д�˲��ִ���,��line1379--1613)������,ף����^_^");
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
	printf("������ ����\n");
	Sleep(2000);
	system("cls");
	printf("ʿ��:����,�Ҵ�ҩ���ҵ���ҩ,����һЩ����\n");
	getchar();
	system("cls");
	printf("���[����],Ѫ���ظ���90%c\n",ch);
	steve.hp=steve.maxhp/10*9;
	getchar();
	system("cls");
	printf("���[С��],�˺�������150\n");
	steve.atk=150;
	steve.def=20;
	getchar();
	system("cls");
	printf("ʿ��:�Ҽǵ����ǽ�����Ӫ���������һ����\n");
	getchar();
	system("cls");
	printf("ʿ��:��ȥӪ�ص�·��,���û�·���ҺͰ೤ʧ�����̳�\n");
	getchar();
	system("cls");
	printf("����:���ǿ�����Ҫ�ƹ������,Ҫ�����Ǵ������С·��?\n");
	getchar();
	system("cls");
	printf("ʿ��:�������\n");
	getchar();
	system("cls");
	printf("ʿ��:���ǵ�Ӫ���ﻹ��һЩǹ,��ҩ�Ͳ���\n");
	getchar();
	system("cls");
	printf("��:OK!�����ǸϽ�������\n");
	getchar();
	system("cls");
	printf("ʿ��:ͣ!��������!\n");
	getchar();
	system("cls");
	printf("¥��:����!����!......\n");
	getchar();
	system("cls");
	printf("��(Ҫ����):˭!\n");
	getchar();
	system("cls");
	printf("ʿ��:��,��è�ۿ�!\n");
	getchar();
	system("cls");
	printf("��:������?\n");
	getchar();
	system("cls");
	printf("�������ҵ���\n");
	getchar();
	system("cls");
	printf("? ? ?:����!��������!!���!!!\n");
	getchar();
	system("cls");
	printf("��:��!!!!\n");
	getchar();
	system("cls");
	printf("���������ʼս��");
	getchar();
	system("cls");
	printf("ʿ��:����!");
	getchar();
	system("cls");
	printf("ž!!��!!");
	getchar();
	system("cls");
	printf("? ? ?:��!......");
	getchar();
	system("cls");
	printf("? ? ?:�����!��Ͷ��!!");
	getchar();
	system("cls");
	printf("ʿ��:����?");
	getchar();
	system("cls");
	printf("? ? ?:��?����?");
	getchar();
	system("cls");
	printf("����:��զ��������?");
	getchar();
	system("cls");
	printf("����:�󲿶Ӷ�ת�Ƶ�H����,���Ǵ����������Ͼͳ���");
	getchar();
	system("cls");
	printf("����(Ц):��,����,�����Ż�������,������...");
	getchar();
	system("cls");
	printf("����:��?(�ѩn��)");
	getchar();
	system("cls");
	printf("����:��������һЩȼ��,���Ա��и�ͣ����,���ܻ��ҵ�һ���ܿ��ĳ�");
	getchar();
	system("cls");
	printf("��:�ǿ�ȥ��!");
	getchar();
	system("cls");
	printf("�ص�:ͣ����\nʱ��8��22�� 04:30");
	getchar();
	system("cls");
	printf("��:�������ɲ�����?");
	getchar();
	system("cls");
	printf("����:���԰�");
	getchar();
	system("cls");
	printf("��������......");
	getchar();
	system("cls");
	printf("����:���ǹ�����!��ѽ!");
	getchar();
	system("cls");
	printf("����:��ߵĳ�Ҳ��������");
	getchar();
	system("cls");
	printf("����:�����Ľ�ʬ!\n��!ž!��!��~~~~~~");
	getchar();
	system("cls");
	printf("����,����(��):���ǿ춥��ס��!�в��а�");
	getchar();
	system("cls");
	printf("��������~~~��~~~");
	getchar();
	system("cls");
	printf("��:���Ż���!˭�Ὺ��?");
	getchar();
	system("cls");
	printf("����:��������!����,�ҵ���ǹ����!������,�ϳ�!");
	getchar();
	system("cls");
	printf("����~~~��~~~~~~ž~~��!!");
	getchar();
	system("cls");
	printf("�㱻��ʬ�ӳ���ק������!");
	getchar();
	system("cls");
	printf("��:��!!!");
	getchar();
	system("cls");
	printf("����:������!");
	getchar();
	system("cls");
	printf("����:����ǹ,�Ұ���!");
	getchar();
	system("cls");
	printf("���������ʼս��");
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
	printf("������Ϣ:\n");
    printf("����:�綾��ʬ    �ȼ�:%d\n",zombie.lev);
    printf("Ѫ��:%d    �˺�:%d|�綾�˺�:%d/2    ����:%d    ��ɱ�ɻ��%d����(8������)\n",zombie.hp,zombie.atk,zombie.poisonous_atk,zombie.def,zombie.exp);
	printf("ע��:�綾�˺�:atk/round����˼�ǽ�ʬ�ĳ����˺�Ϊatkÿ�غ�(�����ܵ���ʬ��ͨ�˺��Ļغ�,��Ϊ���һ���ܵ������˺��Ļغ�),����round�غ�(�ܵ���ʬ��ͨ�˺��Ļغ����һ���غ�)");
    Sleep(8000);
    system("cls");
	while(steve.hp>0 && zombie.hp>0)
    {
    	r=64;
        printf("����:�綾��ʬ �ȼ�%d\n",zombie.lev);
        printf("���Ѫ��:%d/%d ��ʬѪ��:%d\n",steve.hp,steve.maxhp,zombie.hp);
        printf("����:\n");
		printf("1| ��ͨ���� %d�˺�,����1\n",steve.atk);
		printf("2| С�� 330�˺�,����1/3\n");
		printf("3| ���� 270�˺� ����1/4\n");
		scanf("%d",&n);
        if(n==1)
        {
            printf("��Խ�ʬ�����%d�˺�\n",steve.atk-zombie.def);
            zombie.hp=zombie.hp-(steve.atk-zombie.def);
        }
        else if(n==2)
        {
			printf("��Խ�ʬ�����%d�˺�\n",330-zombie.def);
			Sleep(666);
			printf("��Խ�ʬ�����%d�˺�\n",330-zombie.def);
			Sleep(667);
			printf("��Խ�ʬ�����%d�˺�\n",330-zombie.def);
			Sleep(667);
        	zombie.hp=zombie.hp-(330-zombie.def)*3;
		}
		else if(n==3)
		{
			printf("��Խ�ʬ�����%d�˺�\n",270-zombie.def);
			Sleep(500);
			printf("��Խ�ʬ�����%d�˺�\n",270-zombie.def);
			Sleep(500);
			printf("��Խ�ʬ�����%d�˺�\n",270-zombie.def);
			Sleep(500);
			printf("��Խ�ʬ�����%d�˺�\n",270-zombie.def);
			Sleep(500);
        	zombie.hp=zombie.hp-(270-zombie.def)*4;
		}
        else printf("��Ч����\n");
        Sleep(1000);
        r=rand()%8;
        if(r<=2)
        {
        	printf("�����Խ�ʬ�����%d�˺�\n",atk_laoliu-zombie.def);
        	zombie.hp=zombie.hp-(atk_laoliu-zombie.def);
		}
		else if(r==3 || r==4)
        {
        	printf("���ӶԽ�ʬ�����%d�˺�\n",atk_chuizi-zombie.def);
        	zombie.hp=zombie.hp-(atk_chuizi-zombie.def);
		}
        if(zombie.hp<=0) break;
        r=rand()%3;
        if(r==0)
        {
        	printf("��ʬ���������%d�˺�\n",zombie.atk-steve.def);
        	steve.hp=steve.hp-(zombie.atk-steve.def);
        	poisoned_remain=2;
		}
        else printf("��㿪�˽�ʬ�Ĺ���\n");
        if(poisoned_remain>0)
        {
        	printf("���յ��ж��˺�10\n");
        	steve.hp-=10;
        	poisoned_remain--;
		}
        Sleep(2000);
        system("cls");
    }
    system("cls");
    if(zombie.hp<=0)
	{
		printf("��ϲ��ɱ[%d���綾��ʬ]\n��þ���:%d\n2������\n",zombie.lev,zombie.exp);
		Sleep(2000);
		steve.exp+=zombie.exp;
	}
	if(steve.hp<=0)
	{
		printf("������,����������(5������)");
		Sleep(5000);
		system("cls");
		return;
	}
	system("cls");
	printf("��(���ϳ�):���ǳɹ���!");
	getchar();
	system("cls");
	printf("����:�ǻ���˵!Ҫ��ʧ�������Ƕ�Ҫ������");
	getchar();
	system("cls");
	printf("��(��Ц):���˹�Ҫ������,�����û��������,����������...");
	getchar();
	system("cls");
	printf("����:��......(�ѩn��)");
	getchar();
	system("cls");
	printf("����:��......(�ѩn��)");
	getchar();
	system("cls");
	printf("����:��......(�ѩn��)");
	getchar();
	system("cls");
	printf("������ ���� ��\n��ϲ��ɵ�����,�������100");
	gold+=100;
    Sleep(2000);
    system("cls");
    return;
}
void Level_7()
{
	system("cls");
	printf("������ ����С��(11��4�ո���)");
	Sleep(2000);
	system("cls");
	printf("����Ϸ��ʱ���,Ԥ�Ƹ���ʱ��:11��4��\n");
    printf("����bug��ӭ˽�Ż����۷���������minecraft_herobrine,���������¼������R10000000\n");
    printf("лл������Ϸ\n");
    printf("10����Զ�������ҳ��");
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
    printf("������Ϸ:����Σ��\n");
    Sleep(1000);
    printf("��Ʒ��:Herobrine\n");
    Sleep(1000);
    printf("�汾:0.11.16\n");
    Sleep(1000);
    printf("���������ʼ");
    getchar();
    system("cls");
    printf("���ڼ������...\n0");
    Sleep(500);
    system("cls");
    printf("�������ӷ�����...\n��15");
    Sleep(700);
    system("cls");
    printf("������Դ��...\n����25");
    Sleep(600);
    system("cls");
    printf("������Դ��...\n������55");
    Sleep(400);
    system("cls");
    printf("������Դ��...\n��������70");
    Sleep(300);
    system("cls");
    printf("������Դ��...\n��������75");
    Sleep(1500);
    system("cls");
    printf("���ڼ����½�...\n����������90");
    Sleep(400);
    system("cls");
    printf("���ڼ����½�...\n����������100");
    Sleep(1000);
    system("cls");
    printf("���ڽ�����Ϸ...\n����������100");
    Sleep(3000);
    system("cls");
    while(1)
    {
    	steve.hp=1e6;
    	steve.atk=1e6;
    	steve.exp=1e6;
    	steve.maxhp=1e6;
    	steve.def=1e6;
    	printf("<����>\n");
    	printf("�������޾�ģʽ\n");
    	printf("�����˵�����\n");
    	printf("11��2�ռ��������\n");
    	printf("�����½�:\n--------------------------\n");
    	printf("64| �޾�ģʽ(δ����,�Ͻ�����,����Ը�!)\n");
    	printf("0| �̵�\n");
    	printf("1| ��Դ\n");
    	printf("2| ��˾����\n");
    	printf("3| ����\n");
    	printf("4| ����\n");
    	printf("5| �뿪��˾\n");
    	printf("6| ����\n");
    	printf("7| ����С��(11��4�ո���)\n");
    	printf("-1| �˳�\n");
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

