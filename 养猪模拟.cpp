#include<bits/stdc++.h>
using namespace std;
#define random(x) rand()%(x) //����rand���� [0,x)֮���������� 
struct zhu{
	int zhong,day;
	double weight,increase;
}; 							//���嵥�������Ϣ
struct juan{
	zhu data;
	juan *next;
	juan *last;
	bool f;					//f=0,ֻ�к���;f=1��û�к��� 
}a[100];					//������ʽ�洢100����Ȧ 
int num[100],nu=0;			//������� 
void newi(zhu x,int p){
	x.zhong=p;x.day=0;
	x.weight=random(31)+20;
	x.increase=double(random(13))/10.0;
}
quan *create(int n)     /*����ÿһ���ڵ㶼��ָ��  listpoint�ṹ��ָ�룬���Է���ֵ��listpoint *,n��ָ����������Ľڵ���Ŀ*/
{
    quan *head,*normal,*end;/*����ͷ�ڵ㣬�����ڵ㣬��β�ڵ�*/
    head=(quan*)malloc(sizeof(listpoint));
    head->information=(data*)malloc(sizeof(data));
    /*�����ڴ�*/
    end=head;/*�ʼ���һ���ڵ����ͷ�ڵ㣬ע����Ϊͨ��ָ�����ֱ�ӶԵ�ַ�ϵĶ������в�������ʱend��headָ��ͬһ����ַ����end��ָ���ַ���в�������ͬ�ڶ�head��ַ�����Ĳ���*/
    for(int i=0;i<n;i++)
    {
        normal=(juan*)malloc(sizeof(listpoint));
        normal->data=(data*)malloc(sizeof(data));
        /*���½ڵ�����ڴ�*/
        cout<<"input the number :";
        cin>>normal->information->number;
        cout<<"input the name   :";
        cin>>normal->information->name;
        cout<<"input the sex    :";
        cin>>normal->information->sex;
        cout<<"----------------------------------"<<endl;
       /* ���½ڵ�������ݣ�ע������ֻ������Ľڵ�������ݣ�head��������*/
        end->next=normal;/*��end�������½ڵ�*/
        normal->last=end;/*�½ڵ����һ���ڵ����end*/
        end=normal;/*���һ���ڵ����½ڵ�*/
    }
    end->next=NULL;/*��������ָ��һ���µ�ַ*/
    head->last=NULL;/*�����ʼ�Ľڵ�û����һ���ڵ�*/
    return head;
}

int main(){
	srand((int)time(0));  // �����������
}
