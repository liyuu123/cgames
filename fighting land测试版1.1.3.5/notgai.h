#include "int.h"

int  Random(int  q,int  p)//��q-p��q��=p��֮��ȡ�������
{
    if(q>p){int  t=q;q=p;p=t;}
    int  pos=q,dis=p-q+1;
    int  Ranfmax=rand()%10+1,cpu;//���ѭ������
    for(int  i=1;i<=Ranfmax;i++)cpu=rand()%dis+pos;
    return  cpu;
}
void  mingziii()
{
    int  nmcd/*����ʱ���ֵĳ���*/;
    while(1)/*���Զ������*/
    {
        dengdai(0);
        memset(mingzi,'\0',sizeof(mingzi));
        gets(mingzi);
        nmcd=strlen(mingzi);
        if(nmcd>50)printf("�������ֻ����50����ĸ����������������ĸ��������һ����\n"); 
        else  if(nmcd!=0)break;
    }
}

void  cpy()//��ʼ��
{
    if(xingbiemingzii==0){renwu[0]=renwu[1]=160;renwu[2]=8;renwu[3]=11;renwu[4]=3;xingbiemingzii=0;}//�� 
    else  if(xingbiemingzii==1){renwu[0]=renwu[1]=120;renwu[2]=7;renwu[3]=13;renwu[4]=4;xingbiemingzii=1;}//Ů 
    else  if(xingbiemingzii==2){renwu[0]=renwu[1]=140;renwu[2]=5;renwu[3]=11;renwu[4]=7;xingbiemingzii=2;}//����
     //����������������� 

    if(zhiyemingzii==0)
    {renwusxhehe[0][0]=10;  renwusxhehe[0][1]=2;  renwusxhehe[0][2]=200;  renwusxhehe[0][3]=15;
    renwusxhehe[0][4]=90;  renwusxhehe[0][5]=8;  renwusxhehe[0][6]=1200;  renwusxhehe[0][7]=30;
    renwusxhehe[1][0]=10;  renwusxhehe[1][1]=4;  renwusxhehe[1][2]=400;  renwusxhehe[1][3]=3;//�������� 

    zjn[1]=70;zjn[2]=4;zjn[3]=3;zjn[4]=2;zjn[0]=10;}/*��������*//*����*/

    else  if(zhiyemingzii==1)
    {renwusxhehe[0][0]=15;  renwusxhehe[0][1]=4;  renwusxhehe[0][2]=500;  renwusxhehe[0][3]=25;
    renwusxhehe[0][4]=15;  renwusxhehe[0][5]=3;  renwusxhehe[0][6]=500;  renwusxhehe[0][7]=14;
    renwusxhehe[1][0]=70;  renwusxhehe[1][1]=12;  renwusxhehe[1][2]=1200;  renwusxhehe[1][3]=7;//��������

    zjn[1]=40;zjn[2]=2;zjn[3]=5;zjn[4]=2;zjn[0]=90;}/*��������*//*ҽ��ҽ��*/

    else  if(zhiyemingzii==2)
    {renwusxhehe[0][0]=50;  renwusxhehe[0][1]=10;  renwusxhehe[0][2]=1000;  renwusxhehe[0][3]=40;
    renwusxhehe[0][4]=10;  renwusxhehe[0][5]=2;  renwusxhehe[0][6]=850;  renwusxhehe[0][7]=12;
    renwusxhehe[1][0]=30;  renwusxhehe[1][1]=7;  renwusxhehe[1][2]=3000;  renwusxhehe[1][3]=5;//��������

    zjn[1]=30;zjn[2]=1;zjn[3]=7;zjn[4]=1;zjn[0]=15;}/*��������*//*�̿�*/

    else  if(zhiyemingzii==3)
    {renwusxhehe[0][0]=35;  renwusxhehe[0][1]=6;  renwusxhehe[0][2]=600;  renwusxhehe[0][3]=30;
    renwusxhehe[0][4]=80;  renwusxhehe[0][5]=9;  renwusxhehe[0][6]=1500;  renwusxhehe[0][7]=28;
    renwusxhehe[1][0]=25;  renwusxhehe[1][1]=5;  renwusxhehe[1][2]=300;  renwusxhehe[1][3]=4;//��������

    zjn[1]=55;zjn[2]=3;zjn[3]=6;zjn[4]=2;zjn[0]=20;}/*��������*//*սʿ*/

    else  if(zhiyemingzii==4)
    {renwusxhehe[0][0]=20;  renwusxhehe[0][1]=7;  renwusxhehe[0][2]=700;  renwusxhehe[0][3]=25;
    renwusxhehe[0][4]=120;  renwusxhehe[0][5]=12;  renwusxhehe[0][6]=1777;  renwusxhehe[0][7]=35;
    renwusxhehe[1][0]=10;  renwusxhehe[1][1]=3;  renwusxhehe[1][2]=400;  renwusxhehe[1][3]=4;//��������

    zjn[1]=60;zjn[2]=7;zjn[3]=2;zjn[4]=1;zjn[0]=25;}/*��������*//*������ʿ*/

    else  if(zhiyemingzii==5)
    {renwusxhehe[0][0]=25;  renwusxhehe[0][1]=6;  renwusxhehe[0][2]=450;  renwusxhehe[0][3]=25;
    renwusxhehe[0][4]=10;  renwusxhehe[0][5]=1;  renwusxhehe[0][6]=400;  renwusxhehe[0][7]=16;
    renwusxhehe[1][0]=50;  renwusxhehe[1][1]=6;  renwusxhehe[1][2]=1050;  renwusxhehe[1][3]=6;//��������

    zjn[1]=30;zjn[2]=2;zjn[3]=4;zjn[4]=4;zjn[0]=15;}/*��������*//*ҩ��ʦ*/

    if(bossmzi==0)
    {boss[0]=boss[1]=500;boss[2]=15;boss[3]=17;boss[4]=9;bossmzi=0;//����boss�������� 

    bosssxhehe[0][0]=40;   bosssxhehe[0][1]=5;   bosssxhehe[0][2]=800;   bosssxhehe[0][3]=35;
    bosssxhehe[0][4]=60;   bosssxhehe[0][5]=6;   bosssxhehe[0][6]=800;   bosssxhehe[0][7]=20;
    bosssxhehe[1][0]=100; bosssxhehe[1][1]=15;   bosssxhehe[1][2]=1000;   bosssxhehe[1][3]=8;//��������

    zjs[1]=120;zjs[2]=3;zjs[3]=7;zjs[4]=2;zjs[0]=35;/*��������*//*֩����*/

    /*С֩��*/}

    else  if(bossmzi==1)
    {boss[0]=boss[1]=1000;boss[2]=17;boss[3]=15;boss[4]=6;bossmzi=1;//����boss�������� 

    bosssxhehe[0][0]=30;   bosssxhehe[0][1]=7;   bosssxhehe[0][2]=500;   bosssxhehe[0][3]=25;
    bosssxhehe[0][4]=200;   bosssxhehe[0][5]=20;   bosssxhehe[0][6]=2000;   bosssxhehe[0][7]=60;
    bosssxhehe[1][0]=40;  bosssxhehe[1][1]=9;   bosssxhehe[1][2]=666;   bosssxhehe[1][3]=3;//��������

    zjs[1]=150;zjs[2]=5;zjs[3]=4;zjs[4]=4;zjs[0]=70;/*��������*//*����*/

    /*����*/}

    else  if(bossmzi==2)
    {boss[0]=boss[1]=750;boss[2]=12;boss[3]=20;boss[4]=7;bossmzi=2;//����boss�������� 

    bosssxhehe[0][0]=100;   bosssxhehe[0][1]=12;   bosssxhehe[0][2]=1500;   bosssxhehe[0][3]=50;
    bosssxhehe[0][4]=30;   bosssxhehe[0][5]=3;   bosssxhehe[0][6]=400;   bosssxhehe[0][7]=15;
    bosssxhehe[1][0]=60;  bosssxhehe[1][1]=13;   bosssxhehe[1][2]=1500;   bosssxhehe[1][3]=9;//��������

    zjs[1]=100;zjs[2]=2;zjs[3]=10;zjs[4]=2;zjs[0]=25;/*��������*//*��Ы*/

    /*ҰЫ��*/}
    boss[5]=1;renwu[5]=1;//˭һ��ʼ�ȼ���Ϊһ 
}

void  juqing()/*����*/
{
    system("cls");
    printf("bi____�����鱻�ս�\n");
    dengdai(1500);
}

void  iii()
{
    if(m==1){i[1]=0;i[2]=4;i[3]=170;i[4]=172;}
    else  if(m==2){i[1]=6;i[2]=21;i[3]=80;i[4]=81;}
    else  if(m==3){i[1]=10;i[2]=40;i[3]=100;i[4]=105;}
    else  if(m==4){i[1]=7;i[2]=140;i[3]=140;i[4]=143;}
}/*����ȥ��������ÿ������Ŀ�����*/

void  first_game()
{
    HWND hwnd=GetForegroundWindow();
    MoveWindow(hwnd,400,0,0,0,0);//�ڶ����Ǵ��������꣬�������Ǵ��ں����꣬������������Ҫ����������ָ���ǵ������ڳ���λ��
    system("mode con cols=100 lines=70");//cols�ǿ�   lines�ǳ� 
    system("color 3F");
    printf("\n\n\n\n\n\n---------------------------------����Ϸ��ս����½V1.1.3.5�汾��-----------------------------------\n");
    printf("-----------------------------------�����ǰ�������ˣ�---------------------------------------------\n");
    printf("--------------------------------------1.���Ĳ�����----------------------------------------------\n");
    printf("--------------------------------------2.���ӵ�����------------------------------------------------\n");
    printf("--------------------------------------3.���ֵ���Ϸƽ���Ե�����------------------------------------\n");
    printf("--------------------------------------4.ǿ��С����------------------------------------------------\n");
    printf("------------------------------------ϣ����������졣--------------------------------------------\n");//������ʾ 
    getch();
    system("cls");
    printf("���ߣ�ս����½�����ҡ����ߣ�zjj-monkey���ڲ��������С�\n\n\n\nע�⣺����Ϸʱ��ò�Ҫ�泬����Сʱ��������ܻ���Ϊ�ƻ���Ϸ�涨��������Ϸ����ģʽ�������ڶ�BUG��");
    getch();

    system("cls");
    printf("\n\n\n---------------------------------------------��������-------------------------------------------\n");
    printf("ע:�������ֻ����50����ĸ����������������ĸ��������һ���������пո�\n");
    mingziii();//�������� 
    printf("\n\n\n\n��Ŀǰ������Ϊ��%s��\n",mingzi);
    dengdai(800);

    system("cls");
    if(notagain("�Ƿ���ս���п�������ʾ��\n")==true){tanchuang=1;printf("��ѡ���˿�����\n");}
    else  {tanchuang=0;printf("��ѡ���˲�������\n");}
    dengdai(800);  

    system("cls");
    printf("������������Ա�1.��  2.Ů  3.������ֻ��������ţ��确1������2������3������\n�еķ�����ǿ��\nŮ�Ĺ�����ǿ��\n�����Ļ�Ѫ��ǿ��\n");
    printf("ע������������Ѫ�����ƣ��������޻�Ѫ�����ص�Ѫ�����ޣ�ÿ����ɫ�г�ʼ��Ѫ�����Ա������ʼ���ԡ�\n");
    xingbiemingzii=shuri(1,3)-1;
    printf("����ѡ���Ա�:%s\n",xingbiemingzi[xingbiemingzii]);
    dengdai(800);

    system("cls");
    printf("�����������ְҵ��");
    for(i[0]=0;i[0]<=5;i[0]++)printf("%d.%s   ",i[0]+1,zhiyemingzi[i[0]]);
    printf("\n\nע��ְҵֱ��Ӱ������ʱ�ļӳ�\n\n");
    zhiyemingzii=shuri(1,6)-1;
    printf("����ѡ��ְҵ��%s\n",zhiyemingzi[zhiyemingzii]);
    dengdai(800);
    //ѡְҵ 

    dengdai(0);

    system("cls");
    printf("��ѡ��ð�յĵص�:1.֩�붴Ѩ  2.����ɭ�֡�  3.Ы��ɳĮ��\n");
    bossmzi=shuri(1,3)-1;
    printf("��ѡ������Ҫ��ս��boss��%s\n",bossmz[bossmzi]);
    dengdai(800);

    cpy();//��ʼ�� 
    system("cls");

    if(notagain("���Ƿ񿴾��飿\n")==true)juqing();

    zhuangtai=1; //������Ѫ������ 
}
