#include<stdio.h>
#include <string.h>
#include<stdlib.h>

int n=0;

struct telebook//建立链表

  {
      char num[4];//编号
      char name[10];//名字输入
      char phonenum[15];//电话号码输入
      char email[20];//邮件输入
      struct telebook *next;//单向连续链表

  };
  typedef struct telebook Telebook;



  void Create (struct telebook b[100],int B[100])   //创建
  {
        int i=0;
        int H;
        do
            {
                printf("请输入第%d个联系人的信息\n",i+1);

                printf("请输入编号:");
                scanf("%s",b[B[i]].num); printf("\n");

                printf("请输入姓名:");
                scanf("%s",b[B[i]].name); printf("\n");

                printf("请输入移动电话号码:");
                scanf("%s",b[B[i]].phonenum); printf("\n");

                printf("请输入邮箱:");
                scanf("%s",b[B[i]].email); printf("\n");
                i++;n++;

                printf("1继续输入;0退出\n");
                scanf("%d",&H);

            }while(H!=0);

  printf("\n");

  }



  void Display (struct telebook F[100],int h[100])     //显示
  {
    int i=0,t,k,p,m;
    t=n/10;
    printf("所有联系人的信息如下:\n");
    if(t==0)
      {
          for(i=0;i<n;i++)
            printf("编号: %s\n姓名: %s\n电话: %s\n邮箱: %s\n",F[h[i]].num,F[h[i]].name,F[h[i]].phonenum,F[h[i]].email);
      }

  else
    {
      for(k=0;k<t;k++)
        {
            for(i=0;i<10;i++)
            printf("编号: %s\n姓名: %s\n电话: %s\n邮箱: %s\n",F[h[i]].num,F[h[i]].name,F[h[i]].phonenum,F[h[i]].email);
            printf("输入'1'显示下一页\n");
            scanf("%d",&p);
            if(p==1)
            system("cls");
        }
      m=10*t;
      for(i=0;m<n;m++)
      printf("编号: %s\n姓名: %s\n电话: %s\n邮箱: %s\n",F[h[i]].num,F[h[i]].name,F[h[i]].phonenum,F[h[i]].email);

    }

 }



 void Query (struct telebook d[100],int e[100])   //查找
 {
     char x[20],p[2];
     int D,i;
     do
        {
            int m=0;

            printf("请输入要查找的信息:\n");

            scanf("%s",&x);

            for(i=0;i<n;i++)

            if(!strcmp(d[e[i]].name,x)||!strcmp(d[e[i]].phonenum,x)||!strcmp(d[e[i]].email,x))
                {
                    D=e[i];

                    printf("要查询的联系人信息如下:\n");

                    printf("姓名:%s\t移动电话:%s\t邮箱:%s\n",d[D].name,d[D].phonenum,d[D].email);
                }

            printf("输入Y或y继续查询,输入N或n退出\n");

            scanf("%s",&p);
   }while(!strcmp(p,"Y")||!strcmp(p,"y"));

   }


 void Deleate(struct telebook c[100],int k[100])  //删除
 {
     char d[20]; char p[2];

     int t[10],j,i,x;
     do
        {
            printf("请输入要删除的联系人信息:\n");
            scanf("%s",&d);

            for(i=0;i<n;i++)

            if(!strcmp(d,c[k[i]].name)||!strcmp(d,c[k[i]].phonenum)||!strcmp(d,c[k[i]].email))

            j=k[i];

            for(x=j;x<n;x++)

            k[x]=x+1;
            n--;
            printf("输入Y或y继续,输入N或n退出\n");
            scanf("%s",&p);

 }while(!strcmp(p,"Y")||!strcmp(p,"y"));

 }


 void Insert(struct telebook b[100],int B[100])//插入（待修改）
 {
     int H;
     do
        {
            printf("请输入添加联系人的信息\n");

            printf("请输入姓名:");
            scanf("%s",b[B[n]].name); printf("\n");

            printf("请输入移动电话号码:");
            scanf("%s",b[B[n]].phonenum); printf("\n");

            printf("请输入邮箱:");
            scanf("%s",b[B[n]].email); printf("\n");
            n++;

            printf("1继续添加;0退出\n");
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

 /*void fun6(struct telebook T[100],int r[100])//修改联系人信息
 {
     char p[2],d[20];
    int i,t;
 do
    {
        printf("请输入要修改联系人信息:\n");
        scanf("%s",&d);

        for(i=0;i<n;i++)
        if(!strcmp(d,T[r[i]].name)||!strcmp(d,T[r[i]].phonenum)||!strcmp(d,T[r[i]].email))
            {
                t=r[i];
                printf("请输入改后联系人的信息\n");
                printf("请输入姓名:");
                scanf("%s",T[t].name); printf("\n");

                printf("请输入移动电话号码:");
                scanf("%s",T[t].phonenum); printf("\n");

                printf("请输入邮箱:");
                scanf("%s",T[t].email); printf("\n");

            }
        printf("输入Y或y继续,输入N或n退出\n");
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
        printf("                         Menu(菜单)                        \n");


        printf("           1 : Create List         (创建电话簿)\n");

        printf("           2 : Display All Record  (分屏显示电话簿中所有记录)\n");

        printf("           3 : Insert a Record     (插入联系人信息)\n");

        printf("           4 : Deleate a Record    (删除联系人信息)\n");

        printf("           5 : Query               (查找联系人信息)\n");

        //printf("           6 : 修改联系人信息\n");



        printf("           0 :quit                 (退出)\n");

        printf("           Give your choice(0~7)   (请选择要进行的操作0~7)  \n   ");

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
