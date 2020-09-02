#include<bits/stdc++.h>
using namespace std;
#define random(x) rand()%(x) //代替rand函数 [0,x)之间的随机整数 
struct zhu{
	int zhong,day;
	double weight,increase;
}; 							//定义单个猪的信息
struct juan{
	zhu data;
	juan *next;
	juan *last;
	bool f;					//f=0,只有黑猪;f=1，没有黑猪 
}a[100];					//链表形式存储100个猪圈 
int num[100],nu=0;			//猪的总数 
void newi(zhu x,int p){
	x.zhong=p;x.day=0;
	x.weight=random(31)+20;
	x.increase=double(random(13))/10.0;
}
quan *create(int n)     /*链表每一个节点都是指向  listpoint结构的指针，所以返回值是listpoint *,n是指创建的链表的节点数目*/
{
    quan *head,*normal,*end;/*创建头节点，其他节点，和尾节点*/
    head=(quan*)malloc(sizeof(listpoint));
    head->information=(data*)malloc(sizeof(data));
    /*分配内存*/
    end=head;/*最开始最后一个节点就是头节点，注意因为通过指针可以直接对地址上的东西进行操作，此时end和head指向同一个地址，对end所指向地址进行操作，等同于对head地址所做的操作*/
    for(int i=0;i<n;i++)
    {
        normal=(juan*)malloc(sizeof(listpoint));
        normal->data=(data*)malloc(sizeof(data));
        /*给新节点分配内存*/
        cout<<"input the number :";
        cin>>normal->information->number;
        cout<<"input the name   :";
        cin>>normal->information->name;
        cout<<"input the sex    :";
        cin>>normal->information->sex;
        cout<<"----------------------------------"<<endl;
       /* 往新节点存入数据，注意我们只给后面的节点存入数据，head不存数据*/
        end->next=normal;/*往end后增添新节点*/
        normal->last=end;/*新节点的上一个节点就是end*/
        end=normal;/*最后一个节点变成新节点*/
    }
    end->next=NULL;/*链表的最后指向一个新地址*/
    head->last=NULL;/*链表最开始的节点没有上一个节点*/
    return head;
}

int main(){
	srand((int)time(0));  // 产生随机种子
}
