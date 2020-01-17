#define _CRT_SECURE_NO_WARNINGS 1         \\消除scanf不安全的警告

//alter_people
#define _CONTACT_H_
#define NAME_MAX 20
#define SEX_MAX 3
#define TEL_MAX 20
#define ADDER_MAX 30
#define PEOPLE_MAX 3

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct people                   //定义通讯录保存的内容结构体
{
    char name[NAME_MAX];
    char sex[SEX_MAX];
    int age;
    char tel[TEL_MAX];
    char adder[ADDER_MAX];
}people;

typedef struct contact                    //定义一个嵌套结构体。
{
    int capacity;
    people *human;
    int count_p;
}Con, *Pcon;



void menu()
{
    printf("*******************欢迎使用通讯录4.0   ***************\n");
    printf("                   1.添加联系人信息      \n");
    printf("                   2.删除指定联系人信息  \n");
    printf("                   3.查找指定联系人信息  \n");
    printf("                   4.修改指定联系人信息  \n");
    printf("                   5.显示所有联系人信息  \n");
    printf("                   6.清空所有联系人     \n");
    printf("                   7.以名字排序所有联系人\n");
    printf("                   8.退出\n");
    printf("******************************************************\n");
}

void print(Pcon pcon, int i)        //打印联系人信息
{
    printf("|  姓名  |  性别  |  年龄  |    电话    |      住址     | \n");
    printf("|  %4s  |  %2s  |  %d  |  %6s  |  %6s  |\n", pcon->human[i].name, pcon->human[i].sex, pcon->human[i].age,
        pcon->human[i].tel, pcon->human[i].adder);

}

void judge_full(Pcon pcon)   //判断当前联系人总数是否超过容量，若超过则增容
{
    people *p = { 0 };
    if (pcon->count_p == pcon->capacity)
    {
        p = (people *)realloc(pcon->human, (pcon->capacity + 3)*sizeof(people));
        if (p == NULL)
        {
            printf("out of memery");
            exit(EXIT_FAILURE);
        }
        else
        {
            pcon->human = p;
            pcon->capacity += 3;
        }
    }
}
void add_people(Pcon pcon)
{
    judge_full(pcon);
    printf("请输入添加联系人的姓名，性别，年龄，电话，住址：(可用空格符或回车符隔开)\n");
    scanf("%s", pcon->human[pcon->count_p].name);
    scanf("%s", pcon->human[pcon->count_p].sex);
    scanf("%d", &pcon->human[pcon->count_p].age);
    scanf("%s", pcon->human[pcon->count_p].tel);
    scanf("%s", pcon->human[pcon->count_p].adder);
    print(pcon, pcon->count_p);
    (pcon->count_p)++;

    printf("添加成功！\n");
}

int find_people(Pcon pcon)
{
    char name[NAME_MAX];
    int i = 0;
    printf("请输入姓名：");
    scanf("%s", name);
    for (i = 0; i < pcon->count_p; i++)
    {
        if (strcmp(pcon->human[i].name, name) == 0)
        {
            print(pcon, i);
            return i;                  //若输入的姓名与联系人中的一个姓名相符，则返回该联系人的位置
        }
    }
    printf("不存在该联系人\n");
    return -1;
}

void delete_people(Pcon pcon)
{
    int i = 0;
    int ret = find_people(pcon);
    if (ret != -1)
    {
        for (i = ret; i < pcon->count_p; i++)
        {
            pcon->human[i] = pcon->human[i + 1];     //采用移位删除法删除。
        }
        pcon->count_p--;
        printf("删除成功！\n");

    }
    else
        printf("不存在该联系人！\n");

}
void show_people(Pcon pcon)

{
    int i = 0;
    printf("|  姓名  |  性别  |  年龄  |    电话    |      住址     | \n");

    for (i = 0; i < pcon->count_p; i++)  //循环打印全部联系人
    {
        printf("|  %4s  |  %2s  |  %d  |  %6s  |  %6s  |\n", pcon->human[i].name, pcon->human[i].sex, pcon->human[i].age,
            pcon->human[i].tel, pcon->human[i].adder);
    }
}

void clean_people(Pcon pcon)         //将人数置成0，即清空联系人
{
    pcon->count_p = 0;
    printf("成功清空！");
}

void order_people(Pcon pcon)
{
    int i = 0,j=0;
    for (i = 0; i < (pcon->count_p) - 1; i++)    //这里采用冒泡排序
    {
        for (j = 0; j<(pcon->count_p) - 1 - i; j++)
        {
            int min = 0;
            if (strcmp(pcon->human[j].name, pcon->human[j + 1].name)>0)
            {
                people temp = pcon->human[j];
                pcon->human[j] = pcon->human[j + 1];
                pcon->human[j + 1] = temp;

            }
        }
    }
    printf("排序完成\n");
    show_people(pcon);
}



void init(Pcon pcon)   //对结构体进行初始化。
{
    pcon->capacity = PEOPLE_MAX;

    people *p = (people *)malloc((PEOPLE_MAX)*sizeof(people));

    if (p == NULL)
    {
        printf("out of memery");
        exit(EXIT_FAILURE);
    }
    else
    {
        pcon->human = p;
    }
    memset(pcon->human, 0, (PEOPLE_MAX)* sizeof(people));
    pcon->count_p = 0;

}

void free_mem(Pcon pcon)
{
    free(pcon->human);
    pcon->human = NULL;
}

void read_from_file(Pcon pcon)   //从文件中读取联系人信息
{
    int i = 0;
    people tmp = { 0 };
    FILE *pfread = fopen("cantact.dat", "r");
    if (pfread == NULL)
    {
        perror("open file for read");
        exit(EXIT_FAILURE);
    }
    while (fread(&tmp, sizeof(people), 1, pfread))
    {
        judge_full(pcon);  //防止文件里的人数超过容量
        pcon->human[i] = tmp;
        i++;
        pcon->count_p++;
    }
    fclose(pfread);
}

void save_to_file(Pcon pcon)      //将联系人信息保存至文件
{
    int i = 0;
    FILE *pfwrite = fopen("cantact.dat", "w");
    if (pfwrite == NULL)
    {
        perror("open file for write");
        exit(EXIT_FAILURE);
    }
    for (i = 0; i < pcon->count_p; i++)
    {
        fwrite(&(pcon->human[i]), sizeof(people), 1, pfwrite);
    }
    fclose(pfwrite);
}
int main()
{
    Con con;
    init(&con);
    int num = 0;
    menu();
    read_from_file(&con);
    while (1)
    {
        printf("请输入你想执行的功能序号：");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            add_people(&con);
            break;
        case 2:
            delete_people(&con);
            break;
        case 3:
            find_people(&con);
            break;

            break;
        case 5:
            show_people(&con);
            break;

            break;
        case 7:
            order_people(&con);
            break;
        case 8:
            save_to_file(&con);

            exit(0);
            break;
        default:
            printf("指令输入错误！");
            break;
        }
    }
    free_mem(&con);
    system("pause");
    return 0;
}
