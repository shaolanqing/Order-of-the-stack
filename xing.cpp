//˳��ջ�Ľ�ջ����ջ�㷨
#include<stdio.h>
#define m 100
typedef struct 
{ 
	 int stack[m];
     int top;
}qstype;
void initials(int &top)   //��ʼ��һ����ջ
{
	top=-1;
}
int emptys(int top)      //�ж��Ƿ�Ϊ��
{

	return top==-1;  //�ж�top�Ƿ����-1��top==-1 -> return 1 || top!=-1 -> return 0
}
int fulls(int top)    //�ж��Ƿ�Ϊ��
{
	return top==m-1;  //�ж�top�Ƿ����m-1
}
int push(int stack[],int &top,int item)
{
	if(fulls(top))    //ջΪ��
		return 0;
	else 	
	{
		stack[++top]=item;   //���޸�topֵ��Ȼ�����λ��Ϊ�գ���pushֵ
	    return 1;
	}

}
int pop(int stack[],int &top,int &item)     //item��&����ΪҪ��ȡ����������������
{
	if(emptys(top))    //ջΪ��
		return 0;
	else
	{
		item=stack[top--];
		return 1;
	}
}


void main()
{  
   int top,i,x,n;          //pop��ʾջ��ָ��,xΪҪ���������itemΪpop��ջ����,nΪ�����С
   int stac[100];             //����һ������ 
   initials(top);             //��ʼ��һ����ջ
   printf("������n��ֵ��\n");
   scanf("%d",&n);
   printf("������x��ֵ��\n");           
   for(i=0;i<n;i++)
   {
	   scanf("%d",&x);
     push(stac,top,x);
   }
    for(i=0;i<n;i++)
   {
     pop(stac,top,x);                         //pop��ջ
	 printf("%d \t",x);           // ���pop��ջ����item
   }
  

}



