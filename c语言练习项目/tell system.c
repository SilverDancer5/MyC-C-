#include<stdio.h>
#include <string.h>
#include<stdlib.h>

int n=0;

struct telebook//��������

  {
      char num[4];//���
      char name[10];//��������
      char phonenum[15];//�绰��������
      char email[20];//�ʼ�����
      struct telebook *next;//������������

  };
  typedef struct telebook Telebook;



  void Create (struct telebook b[100],int B[100])   //����
  {
        int i=0;
        int H;
        do
            {
                printf("�������%d����ϵ�˵���Ϣ\n",i+1);

                printf("��������:");
                scanf("%s",b[B[i]].num); printf("\n");

                printf("����������:");
                scanf("%s",b[B[i]].name); printf("\n");

                printf("�������ƶ��绰����:");
                scanf("%s",b[B[i]].phonenum); printf("\n");

                printf("����������:");
                scanf("%s",b[B[i]].email); printf("\n");
                i++;n++;

                printf("1��������;0�˳�\n");
                scanf("%d",&H);

            }while(H!=0);

  printf("\n");

  }



  void Display (struct telebook F[100],int h[100])     //��ʾ
  {
    int i=0,t,k,p,m;
    t=n/10;
    printf("������ϵ�˵���Ϣ����:\n");
    if(t==0)
      {
          for(i=0;i<n;i++)
            printf("���: %s\n����: %s\n�绰: %s\n����: %s\n",F[h[i]].num,F[h[i]].name,F[h[i]].phonenum,F[h[i]].email);
      }

  else
    {
      for(k=0;k<t;k++)
        {
            for(i=0;i<10;i++)
            printf("���: %s\n����: %s\n�绰: %s\n����: %s\n",F[h[i]].num,F[h[i]].name,F[h[i]].phonenum,F[h[i]].email);
            printf("����'1'��ʾ��һҳ\n");
            scanf("%d",&p);
            if(p==1)
            system("cls");
        }
      m=10*t;
      for(i=0;m<n;m++)
      printf("���: %s\n����: %s\n�绰: %s\n����: %s\n",F[h[i]].num,F[h[i]].name,F[h[i]].phonenum,F[h[i]].email);

    }

 }



 void Query (struct telebook d[100],int e[100])   //����
 {
     char x[20],p[2];
     int D,i;
     do
        {
            int m=0;

            printf("������Ҫ���ҵ���Ϣ:\n");

            scanf("%s",&x);

            for(i=0;i<n;i++)

            if(!strcmp(d[e[i]].name,x)||!strcmp(d[e[i]].phonenum,x)||!strcmp(d[e[i]].email,x))
                {
                    D=e[i];

                    printf("Ҫ��ѯ����ϵ����Ϣ����:\n");

                    printf("����:%s\t�ƶ��绰:%s\t����:%s\n",d[D].name,d[D].phonenum,d[D].email);
                }

            printf("����Y��y������ѯ,����N��n�˳�\n");

            scanf("%s",&p);
   }while(!strcmp(p,"Y")||!strcmp(p,"y"));

   }


 void Deleate(struct telebook c[100],int k[100])  //ɾ��
 {
     char d[20]; char p[2];

     int t[10],j,i,x;
     do
        {
            printf("������Ҫɾ������ϵ����Ϣ:\n");
            scanf("%s",&d);

            for(i=0;i<n;i++)

            if(!strcmp(d,c[k[i]].name)||!strcmp(d,c[k[i]].phonenum)||!strcmp(d,c[k[i]].email))

            j=k[i];

            for(x=j;x<n;x++)

            k[x]=x+1;
            n--;
            printf("����Y��y����,����N��n�˳�\n");
            scanf("%s",&p);

 }while(!strcmp(p,"Y")||!strcmp(p,"y"));

 }


 void Insert(struct telebook b[100],int B[100])//���루���޸ģ�
 {
     int H;
     do
        {
            printf("�����������ϵ�˵���Ϣ\n");

            printf("����������:");
            scanf("%s",b[B[n]].name); printf("\n");

            printf("�������ƶ��绰����:");
            scanf("%s",b[B[n]].phonenum); printf("\n");

            printf("����������:");
            scanf("%s",b[B[n]].email); printf("\n");
            n++;

            printf("1�������;0�˳�\n");
            scanf("%d",&H);

 }while(H!=0);

 printf("\n");

 }


/*
telebook* insert(telebook* head,telebook* s){
  if(head==null) return s;
  telebook *t=head;
  if(t.num>s.num){
  s.next=t;
  refresh(t);
  return s;
  }
  while(t.next!=null){
  if(t.next.num>s.num){
    s.next=t.next;
    t.next=s;
    refresh(s.next);
  return head;
  }
  t=t.next;
  }
  t.next=s;
  return head;
}
void refresh(telebook* t){
 while(t!=null){
 t.num++;
 t=t.next;
 */

 /*void fun6(struct telebook T[100],int r[100])//�޸���ϵ����Ϣ
 {
     char p[2],d[20];
    int i,t;
 do
    {
        printf("������Ҫ�޸���ϵ����Ϣ:\n");
        scanf("%s",&d);

        for(i=0;i<n;i++)
        if(!strcmp(d,T[r[i]].name)||!strcmp(d,T[r[i]].phonenum)||!strcmp(d,T[r[i]].email))
            {
                t=r[i];
                printf("������ĺ���ϵ�˵���Ϣ\n");
                printf("����������:");
                scanf("%s",T[t].name); printf("\n");

                printf("�������ƶ��绰����:");
                scanf("%s",T[t].phonenum); printf("\n");

                printf("����������:");
                scanf("%s",T[t].email); printf("\n");

            }
        printf("����Y��y����,����N��n�˳�\n");
        scanf("%s",&p);

 }while(!strcmp(p,"Y")||!strcmp(p,"y"));

 }
 */


 void main()
 {

     struct telebook a[100];

     int A[100],i,X;

     for(i=0;i<100;i++)

     A[i]=i;

 do
    {
        printf("                         Menu(�˵�)                        \n");


        printf("           1 : Create List         (�����绰��)\n");

        printf("           2 : Display All Record  (������ʾ�绰�������м�¼)\n");

        printf("           3 : Insert a Record     (������ϵ����Ϣ)\n");

        printf("           4 : Deleate a Record    (ɾ����ϵ����Ϣ)\n");

        printf("           5 : Query               (������ϵ����Ϣ)\n");

        //printf("           6 : �޸���ϵ����Ϣ\n");



        printf("           0 :quit                 (�˳�)\n");

        printf("           Give your choice(0~7)   (��ѡ��Ҫ���еĲ���0~7)  \n   ");

        scanf("%d",&X);

 switch(X)
 {
     case 1: Create(a,A);break;

     case 2: Display(a,A);break;

     case 3: Insert(a,A);break;

     case 4: Deleate(a,A);break;

     case 5: Query(a,A);break;

     //case 6: fun6(a,A);break;



  }

 }while(X!=0);

 int n=7;
 int i;

    for(i=0;i<7;i++)
    {

    }
 }
