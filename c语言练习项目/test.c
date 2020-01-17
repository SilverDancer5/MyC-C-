
#include<cstdio>
#include<cstring>
#include<map>

map<int,bool> myMap;
int changeId[9][4]={{-1,-1,3,1},{-1,0,4,2},{-1,1,5,-1},
					{0,-1,6,4},{1,3,7,5},{2,4,8,-1},
					{3,-1,-1,7},{4,6,-1,8},{5,7,-1,-1}
					};//0������0->8��λ�ú�ú���Щλ�ý���
const int M=400000;//9��=362800��������鿪40W�㹻��
int des=123804765;//num�洢�������У�len��ʾ���еĸ���Ҳ����9����desΪĿ��״ֱ̬����������ʾ���ڱȽ�
int que[M][3];//0-->����,1-->������0��λ��,2-->����
void swap(char *c,int a,int b){//�����ַ����е�����λ��
	char t=c[a];
	c[a]=c[b];
	c[b]=t;
}
int bfs(int n,int p){
	int head=0,tail=1,temp;//head��ͷ��tail��β
	myMap[n]=1;
	que[head][0]=n,que[head][1]=p,que[head][2]=head;//��ʼ״̬���浽��ͷ�������õ�ǰ����Ϊ0
	while(head!=tail){//���в�Ϊ�����������
		char cur[10];//���ڱ��浱ǰ״̬���ַ���
		int  pos=que[head][1];//��ǰ״̬��0��λ��
		sprintf(cur,"%09d",que[head][0]);//int-->char*�����09d������Ҫ�������㲻����
		for(int i=0;i<4;i++){//��չ��ǰ��״̬�����������ĸ�����
			int swapTo=changeId[pos][i];//��Ҫ���Ǹ�λ�ý���
			if(swapTo!=-1){//-1�򲻽���
				swap(cur,pos,swapTo);//����0��λ�õõ���״̬
				sscanf(cur,"%d",&temp);//��״̬ת��Ϊint���浽temp
				if(temp==des)//�����Ŀ��״̬�򷵻ص�ǰ״̬�Ĳ���+1
					return que[head][2]+1;
				if(myMap.count(temp)==0){//��� û�г��ֹ����������״̬����
					que[tail][0]=temp,que[tail][1]=swapTo,que[tail][2]=que[head][2]+1;
					tail++;
					myMap[temp]=1;
				}
				swap(cur,pos,swapTo);//һ����״̬��������һ��Ҫ�ǵý�������0��������
			}
		}
		head++;
	}
}
int main(){
	char start[10];
	int n,i=-1,count=0;
	scanf("%s",start);//�����ʼ״̬
	while(start[++i]!='0');//���ҳ�ʼ״̬0��λ��
	sscanf(start,"%d",&n);//�ַ���ת��Ϊ����
	if(n!=des)//�ж�����״̬�Ƿ����Ŀ��״̬
		count=bfs(n,i);
	printf("%d",count);
	return 0;
}
