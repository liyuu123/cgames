#include "notgai.h"

void  gongjipd(int  bci/*�����߼���*/,int  bcj/*�����߼���*/,int  renwuxx[]/*����������*/,
int  renwuyy[]/*����������*/,int  xxxxx/*�������ܵļӳ�*/,int  yyyyy/*�������ܵļӳ�*/,
char  mingzixx[]/*�����ߵ�����*/,char  mingziyy[]/*�����ߵ�����*/,int  ox/*�����ߵĻ�Ѫ�����±�*/)
{
    zs[0]=Random(renwuxx[2]-renwuxx[2]/10,renwuxx[2]+renwuxx[2]/15);//�����߷�����
    zs[1]=Random(renwuyy[3]-renwuyy[3]/15,renwuyy[3]+renwuyy[3]/20);//�����߹�����
    zs[2]=0;//��Ѫ����
    Sleep(100);
    //������ 
    if(bci==0)zs[0]*=xxxxx/10;//��
    //������ 
    if(bcj==0)zs[1]*=yyyyy/10;//����
    else  if(bcj==1)zs[2]=(zs[1]-zs[0])*yyyyy/10;//��Ѫ����
    printf("%s�ܵ���%s��%s,",mingzixx,mingziyy,sxgjmingzi[bcj+1]);//���й���
    printf("%sʹ�á�%s��,",mingzixx,sxfymingzi[bci+1]);//�����߽��з���
    if(zs[1]<=zs[0])printf("��û�п�Ѫ");//�񵲴��ڹ���
    else
    {
        printf("%s����%d��Ѫ",mingzixx,zs[1]-zs[0]);
        renwuxx[0]=renwuxx[0]-zs[1]+zs[0];
        if(ox<=1  &&  ox>=0)oxx[ox]=false;//��ǵ����޷���Ѫ
    }
    if(zs[2]>0)
    {
        renwuyy[0]+=zs[2];
        if(renwuyy[0]>renwuyy[1])
        {
            zs[2]-=renwuyy[0]-renwuyy[1];
            renwuyy[0]=renwuyy[1];
        }//���������Ѫ
        if(zs[2]>0)
        {           
            printf(",%s������%d��Ѫ,%s����%d��Ѫ",mingziyy,zs[2],mingzixx,zs[2]);
            renwuxx[0]=renwuxx[0]-zs[2];
            if(ox<=1  &&  ox>=0)oxx[ox]=false;//��Ѫ֮���õ����޷���Ѫ
        }
    }
    printf("��\n");
    Sleep(200);
}
void  gongjishezhi(int  xxxx[][10]/*������������*/,int  yyyy[][10]/*����������*/,int  renwuxxx[],
int  renwuyyy[],int  oxo/*�����ߵĻ�Ѫ�����±�*/,char  mingzixxx[]/*������������*/,char  mingziyyy[]/*����������*/)
{
    int  teshui=-1,bci,teshuj=-1;
    for(bci=0;bci<=teshufangyu;bci++)
    {
        int  shuji=Random(1,10000);
        if(shuji<=xxxx[bci][4]){teshui=bci;break;}
    }//ѡȡ�����߷�������
    for(bci=0;bci<=teshugongji;bci++)
    {
        int  shuji=Random(1,10000);
        if(shuji<=yyyy[bci][0]){teshuj=bci;break;}
    }//ѡȡ�����߹�������
    gongjipd(teshui,teshuj,renwuxxx,renwuyyy,xxxx[teshui][7]/*�����������*/,yyyy[teshuj][3]/*���빥������*/,mingzixxx/*������������*/,mingziyyy/*����������*/,oxo/*�����ߵĻ�Ѫ�����±�*/);
}

void  pd()
{
    system("cls");
    if(oxx[0]==true)
    {
        renwu[0]+=Random(renwu[4]-2,renwu[4]+3);
        if(renwu[0]>renwu[1])renwu[0]=renwu[1];
    }
    oxx[0]=true;/*�����Ѫ*/
    if(oxx[1]==true)
    {
        boss[0]+=Random(boss[4]-3,boss[4]+3);
        if(boss[0]>boss[1])boss[0]=boss[1];
    }
    oxx[1]=true;/*boos��Ѫ*/
    if(renwu[0]<=renwu[1]/10*2)
    {

        system("color 4F");
        if(zhuangtai!=3)/*��ȥ����������ʾ������*/
        {
            if(tanchuang==1)
            {
                HWND hwnd=::GetForegroundWindow();
                MessageBox(hwnd,"���Ѿ���Ѫ�������һ����Ѫ��","ս����½",MB_OK);/*������ʾ��*/
            }
            zhuangtai=3;
        }
    }/*������Ѫ��С��20%ʱ��������ɺ�ɫ*/
    else  if(renwu[0]<=renwu[1]/10*5)
    {
        system("color 6F");
        if(zhuangtai!=2)/*��ȥ����������ʾ������*/
        {
            if(tanchuang==1)
            {
                HWND hwnd=::GetForegroundWindow();
                MessageBox(hwnd,"��Ѫ��ƫ�ͣ�С�����£�","ս����½",MB_OK);/*������ʾ��*/
            }
            zhuangtai=2;
        }
    }/*������Ѫ��С��50%����20%ʱ��������ɻ�ɫ*/
    else
    {
        system("color 3F");
        if(zhuangtai!=1)/*��ȥ����������ʾ������*/
        {
            if(tanchuang==1)
            {
                HWND hwnd=::GetForegroundWindow();
                MessageBox(hwnd,"��Ѫ��ƫ�ߣ�����ȥð�գ�","ս����½",MB_OK);/*������ʾ��*/
            }
            zhuangtai=1;
        }
    }/*������Ѫ������50%ʱ�����������ɫ*/

    printf("%s�����ԣ�\n�ȼ���%d��\nѪ����%d��\nѪ�����ޣ�%d��\n��������%d��\n��������%d��\n��Ѫ����%d��\n�Ա�:%s\nְҵ:%s\n\n\n\n%s�����ԣ�\n�ȼ���%d��\nѪ����%d��\nѪ�����ޣ�%d��\n��������%d��\n��������%d��\n��Ѫ����%d��\n",mingzi,renwu[5],renwu[0],renwu[1],renwu[2],renwu[3],renwu[4],xingbiemingzi[xingbiemingzii],zhiyemingzi[zhiyemingzii],bossmz[bossmzi],boss[5],boss[0],boss[1],boss[2],boss[3],boss[4]);
    printf("��������ð�գ�������'0'��\n");
    printf("���,��Ҫȥ�ĸ�������\n\n\n1�����Ǳ�������2������������3��һ��С��������Ҳ�ߣ�4�������boss\n\n   -------   -------   -------   -------\n   |     |   |     |   |     |   |     |\n   |  1  |   |  2  |   |  3  |   |  4  |\n   |     |   |     |   |     |   |     |\n   -------   -------   -------   -------\n");

    dengdai(0);
    m=shuri(0,4);
    if(m==0)return  ;
    iii();
    i[0]=Random(1,200);
    if(i[0]<=i[1])
    {
        int  jinpingguoi=Random(0,9),bencii=0;
        printf("���%s������������\n",jinpingguo[jinpingguoi]);
        if(renwu[0]+zjn[0]<=renwu[1]+zjn[1])printf("%s�����ˣ�\n�ȼ���%d+1=%d��\nѪ�����ޣ�%d+%d=%d��\nʣ��Ѫ����%d+%d=%d��\n��������%d+%d=%d��\n��������%d+%d=%d��\n��Ѫ����%d+%d=%d��\n",mingzi,renwu[5],renwu[5]+1,renwu[1],zjn[1],zjn[1]+renwu[1],renwu[0],zjn[0],zjn[0]+renwu[0],renwu[2],zjn[2],zjn[2]+renwu[2],renwu[3],zjn[3],zjn[3]+renwu[3],renwu[4],zjn[4],zjn[4]+renwu[4]); 
        else  printf("%s�����ˣ�\n�ȼ���%d+1=%d��\nѪ�����ޣ�%d+%d=%d��\nʣ��Ѫ����%d+%d=%d��\n��������%d+%d=%d��\n��������%d+%d=%d��\n��Ѫ����%d+%d=%d��\n",mingzi,renwu[5],renwu[5]+1,renwu[1],zjn[1],zjn[1]+renwu[1],renwu[0],renwu[1]-renwu[0]+zjn[1],renwu[1]+zjn[1],renwu[2],zjn[2],zjn[2]+renwu[2],renwu[3],zjn[3],zjn[3]+renwu[3],renwu[4],zjn[4],zjn[4]+renwu[4]); 
        renwu[0]+=zjn[0];
        renwu[1]+=zjn[1];
        renwu[2]+=zjn[2];
        renwu[3]+=zjn[3];
        renwu[4]+=zjn[4];
        renwu[5]++;//����������
        if(renwu[0]>renwu[1])renwu[0]=renwu[1];//��ֹ��Ѫ
        int  bci=0;
        for(bci=1;bci<=teshugongji+1;bci++)
        {
            renwusxhehe[bci-1][0]+=renwusxhehe[bci-1][1];
            if(renwusxhehe[bci-1][0]>renwusxhehe[bci-1][2])renwusxhehe[bci-1][0]=renwusxhehe[bci-1][2];
        }//��������
        for(bci=1;bci<=teshufangyu+1;bci++)
        {
            renwusxhehe[bci-1][4]+=renwusxhehe[bci-1][5];
            if(renwusxhehe[bci-1][4]>renwusxhehe[bci-1][6])renwusxhehe[bci-1][4]=renwusxhehe[bci-1][6];
        }//��������
        dengdai(250);
    }
    else  if(i[0]<=i[2]  &&  i[0]>=i[1]+1)//�������ֹ���
    {
        printf("%s�����ˣ������������˺�!\n",bossmz[bossmzi]);
        gongjishezhi(renwusxhehe,bosssxhehe,renwu,boss,0,zhuanyongmingzi,bossmz[bossmzi]);//���˹���
        gongjishezhi(bosssxhehe,renwusxhehe,boss,renwu,1,bossmz[bossmzi],zhuanyongmingzi);//���﹥��
        dengdai(250);
    }
    else  if(i[0]>=i[2]+1  &&  i[0]<=i[3])
    {
        printf("��ܰ�ȫ��\n");
        dengdai(250);
    }
    else  if(i[0]>=i[3]+1  &&  i[0]<=i[4])
    {
        int  shengtanmingzii=Random(0,3);
        printf("������һ������Ϣ��%s�ҵ�%s������������\n",bossmz[bossmzi],shengtanmingzi[shengtanmingzii]);
        if(boss[0]+zjs[0]<=boss[1]+zjs[1])printf("%s�����ˣ�\n�ȼ���%d+1=%d��\nѪ�����ޣ�%d+%d=%d��\nʣ��Ѫ����%d+%d=%d��\n��������%d+%d=%d��\n��������%d+%d=%d��\n��Ѫ����%d+%d=%d��\n",bossmz[bossmzi],boss[5],boss[5]+1,boss[1],zjs[1],zjs[1]+boss[1],boss[0],zjs[0],zjs[0]+boss[0],boss[2],zjs[2],zjs[2]+boss[2],boss[3],zjs[3],zjs[3]+boss[3],boss[4],zjs[4],zjs[4]+boss[4]); 
        else  printf("%s�����ˣ�\n�ȼ���%d+1=%d��\nѪ�����ޣ�%d+%d=%d��\nʣ��Ѫ����%d+%d=%d��\n��������%d+%d=%d��\n��������%d+%d=%d��\n��Ѫ����%d+%d=%d��\n",bossmz[bossmzi],boss[5],boss[5]+1,boss[1],zjs[1],zjs[1]+boss[1],boss[0],boss[1]-boss[0]+zjs[1],boss[1]+zjs[1],boss[2],zjs[2],zjs[2]+boss[2],boss[3],zjs[3],zjs[3]+boss[3],boss[4],zjs[4],zjs[4]+boss[4]); 
        boss[0]+=zjs[0];
        boss[1]+=zjs[1];
        boss[2]+=zjs[2];
        boss[3]+=zjs[3];
        boss[4]+=zjs[4];
        boss[5]++;//��������
        int  bci=0;
        for(bci=1;bci<=teshugongji+1;bci++)
        {
            bosssxhehe[bci-1][0]+=bosssxhehe[bci-1][1];
            if(bosssxhehe[bci-1][0]>bosssxhehe[bci-1][2])bosssxhehe[bci-1][0]=bosssxhehe[bci-1][2];
        }//���ӹ���
        for(bci=1;bci<=teshufangyu+1;bci++)
        {
            bosssxhehe[bci-1][4]+=bosssxhehe[bci-1][5];
            if(bosssxhehe[bci-1][4]>bosssxhehe[bci-1][6])bosssxhehe[bci-1][4]=bosssxhehe[bci-1][6];
        }//���ӷ���
        dengdai(250);
    }
    else  if(i[0]>=i[4]+1)
    {
        int  kx=Random(renwu[1]/100,renwu[1]/30);
        printf("%s��һ��Ⱥ%s������˹����������%d��Ѫ��\n",bossmz[bossmzi],xiaobing[bossmzi],kx); 
        renwu[0]-=kx;
        oxx[0]=false;
        dengdai(250);
    }
    if(renwu[0]<=0)
    {
        getch();
        system("cls");
        system("color 3F");
        printf("��Ѫ����ʧ���࣬���ˡ�\n");
        printf("����ʱ���㷢��������ҽԺ�Ĵ��ϡ�\n");
        printf("����һ�������ð�գ�\n");
        bk=false;
        dengdai(250);
    }
    if(boss[0]<=0)
    {
        getch();
        system("cls");
        system("color 3F");
        printf("��ϲ�㣬�ɹ�����%s��\n",bossmz[bossmzi]);
        printf("ף���㣬���Ϊ�˸߼�̽��Ա�͸߼���ʿ��\n");
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
        printf("�¸ҵ��������ð���д��������������û����boss��\n");
        dengdai(300);
    }
    getch();
    return  0;
}
