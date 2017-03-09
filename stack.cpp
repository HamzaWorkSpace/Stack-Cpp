#include <iostream>
#include<conio.h>
using namespace std;

void push(int arr[],int size,int val);
void pop(int arr[],int size);
int top(int arr[]);
bool isempty();
bool isfull();
int size();
void print(int arr[]);
int topi=-1;
int const sizeofarr=10;

void main()
{

	int arr[10]={0,0,0,0,0,0,0,0,0,0};
	
	int ch=0;
main:
	system("cls");

	cout<<"press 1 to push an element\n";
	cout<<"press 2 to pop an element\n";
	cout<<"press 3 to check size of element \n";
	cout<<"press 4 to print top \n";
	cout<<"press 5 to print the full stack\n";

	cin>>ch;

	if(ch==1)
	{
		int a=0;
		cout<<"enter value you want to push\n";
		cin>>a;

		push(arr,sizeofarr,a);
		
		goto main;
	}
	if(ch==2)
	{
		pop(arr,sizeofarr);
		
		goto main;
	}
	if(ch==3)
	{
		
		int s;
		s= size();
		cout<<"\nsize of stack is "<<s;
		cin>>ch;
		
		goto main;

	}
	if(ch==4)
	{
		int t;
		t=top(arr);
		cout<<"\nelement on top is  "<<t;
		
//		cin>>ch;
		//getchar();
		goto main;
	}
	if(ch==5)
	{
		print(arr);
		cin>>ch;
	}
}

void push(int arr[],int size,int val)
{
	topi++;
	if(isfull())
	{
		arr[topi]=val;
	}
	else
	{
	cout<<"\n\nstack is full can not push element";
	}

}
void pop(int arr[],int size)
{
	if(isempty())
	{
	arr[topi]=0;
	topi--;
	}
	else
	{
	cout<<"stack is empty can not pop element";
	}

}
int top(int arr[])
{
	return arr[topi];
	getchar();
}    
bool isempty()
{
	
	if(topi < 0)
	{
		return false;
	}
	else
	{
		return true;
	}

}
bool isfull()
{
	if(topi >= sizeofarr)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int size()
{
	return topi;
}
 
void print(int arr[])
{
	for(int i=0; i<topi+1; i++)
	{
		
		cout<<"     "<<arr[i];
	}
	
}
