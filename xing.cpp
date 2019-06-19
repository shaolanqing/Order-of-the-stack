//顺序栈的进栈、出栈算法
#include<stdio.h>
#define m 100
typedef struct 
{ 
	 int stack[m];
     int top;
}qstype;
void initials(int &top)   //初始化一个堆栈
{
	top=-1;
}
int emptys(int top)      //判断是否为空
{

	return top==-1;  //判断top是否等于-1，top==-1 -> return 1 || top!=-1 -> return 0
}
int fulls(int top)    //判断是否为满
{
	return top==m-1;  //判断top是否等于m-1
}
int push(int stack[],int &top,int item)
{
	if(fulls(top))    //栈为满
		return 0;
	else 	
	{
		stack[++top]=item;   //先修改top值，然后这个位置为空，再push值
	    return 1;
	}

}
int pop(int stack[],int &top,int &item)     //item带&是因为要获取它，传回主调函数
{
	if(emptys(top))    //栈为空
		return 0;
	else
	{
		item=stack[top--];
		return 1;
	}
}


void main()
{  
   int top,i,x,n;          //pop表示栈的指针,x为要插入的数，item为pop出栈的数,n为数组大小
   int stac[100];             //定义一个数组 
   initials(top);             //初始化一个堆栈
   printf("请输入n的值：\n");
   scanf("%d",&n);
   printf("请输入x的值：\n");           
   for(i=0;i<n;i++)
   {
	   scanf("%d",&x);
     push(stac,top,x);
   }
    for(i=0;i<n;i++)
   {
     pop(stac,top,x);                         //pop出栈
	 printf("%d \t",x);           // 输出pop出栈的数item
   }
  

}



