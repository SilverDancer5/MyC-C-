#define _CRT_SECURE_NO_WARNINGS 1         \\����scanf����ȫ�ľ���

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

typedef struct people                   //����ͨѶ¼��������ݽṹ��
{
    char name[NAME_MAX];
    char sex[SEX_MAX];
    int age;
    char tel[TEL_MAX];
    char adder[ADDER_MAX];
}people;

typedef struct contact                    //����һ��Ƕ�׽ṹ�塣
{
    int capacity;
    people *human;
    int count_p;
}Con, *Pcon;



void menu()
{
    printf("*******************��ӭʹ��ͨѶ¼4.0   ***************\n");
    printf("                   1.�����ϵ����Ϣ      \n");
    printf("                   2.ɾ��ָ����ϵ����Ϣ  \n");
    printf("                   3.����ָ����ϵ����Ϣ  \n");
    printf("                   4.�޸�ָ����ϵ����Ϣ  \n");
    printf("                   5.��ʾ������ϵ����Ϣ  \n");
    printf("                   6.���������ϵ��     \n");
    printf("                   7.����������������ϵ��\n");
    printf("                   8.�˳�\n");
    printf("******************************************************\n");
}

void print(Pcon pcon, int i)        //��ӡ��ϵ����Ϣ
{
    printf("|  ����  |  �Ա�  |  ����  |    �绰    |      סַ     | \n");
    printf("|  %4s  |  %2s  |  %d  |  %6s  |  %6s  |\n", pcon->human[i].name, pcon->human[i].sex, pcon->human[i].age,
        pcon->human[i].tel, pcon->human[i].adder);

}

void judge_full(Pcon pcon)   //�жϵ�ǰ��ϵ�������Ƿ񳬹�������������������
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
    printf("�����������ϵ�˵��������Ա����䣬�绰��סַ��(���ÿո����س�������)\n");
    scanf("%s", pcon->human[pcon->count_p].name);
    scanf("%s", pcon->human[pcon->count_p].sex);
    scanf("%d", &pcon->human[pcon->count_p].age);
    scanf("%s", pcon->human[pcon->count_p].tel);
    scanf("%s", pcon->human[pcon->count_p].adder);
    print(pcon, pcon->count_p);
    (pcon->count_p)++;

    printf("��ӳɹ���\n");
}

int find_people(Pcon pcon)
{
    char name[NAME_MAX];
    int i = 0;
    printf("������������");
    scanf("%s", name);
    for (i = 0; i < pcon->count_p; i++)
    {
        if (strcmp(pcon->human[i].name, name) == 0)
        {
            print(pcon, i);
            return i;                  //���������������ϵ���е�һ������������򷵻ظ���ϵ�˵�λ��
        }
    }
    printf("�����ڸ���ϵ��\n");
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
            pcon->human[i] = pcon->human[i + 1];     //������λɾ����ɾ����
        }
        pcon->count_p--;
        printf("ɾ���ɹ���\n");

    }
    else
        printf("�����ڸ���ϵ�ˣ�\n");

}
void show_people(Pcon pcon)

{
    int i = 0;
    printf("|  ����  |  �Ա�  |  ����  |    �绰    |      סַ     | \n");

    for (i = 0; i < pcon->count_p; i++)  //ѭ����ӡȫ����ϵ��
    {
        printf("|  %4s  |  %2s  |  %d  |  %6s  |  %6s  |\n", pcon->human[i].name, pcon->human[i].sex, pcon->human[i].age,
            pcon->human[i].tel, pcon->human[i].adder);
    }
}

void clean_people(Pcon pcon)         //�������ó�0���������ϵ��
{
    pcon->count_p = 0;
    printf("�ɹ���գ�");
}

void order_people(Pcon pcon)
{
    int i = 0,j=0;
    for (i = 0; i < (pcon->count_p) - 1; i++)    //�������ð������
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
    printf("�������\n");
    show_people(pcon);
}



void init(Pcon pcon)   //�Խṹ����г�ʼ����
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

void read_from_file(Pcon pcon)   //���ļ��ж�ȡ��ϵ����Ϣ
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
        judge_full(pcon);  //��ֹ�ļ����������������
        pcon->human[i] = tmp;
        i++;
        pcon->count_p++;
    }
    fclose(pfread);
}

void save_to_file(Pcon pcon)      //����ϵ����Ϣ�������ļ�
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
        printf("����������ִ�еĹ�����ţ�");
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
            printf("ָ���������");
            break;
        }
    }
    free_mem(&con);
    system("pause");
    return 0;
}
