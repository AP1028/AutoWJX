#include <iostream>
#define start 31
int mcnt=start;
char answ[100];
using namespace std;
void output(char ans,string type)
{
	if(type=="cat")
	{
		cout<<mcnt-start+1<<". Сè"<<mcnt<<"("<<ans<<") [��ѡ��] (1��)\n";
		for(char i='A';i<='K';i++)
		{
			cout<<i<<endl;
		}
	}
	else if(type=="cloze")
	{
		cout<<mcnt-start+1<<". ����"<<mcnt<<"("<<ans<<") [��ѡ��] (1��)\n";
		for(char i='A';i<='D';i++)
		{
			cout<<i<<endl;
		}
	}
	else if(type=="reading")
	{
		cout<<mcnt-start+1<<". �Ķ�"<<mcnt<<"("<<ans<<") [��ѡ��] (2��)\n";
		for(char i='A';i<='D';i++)
		{
			cout<<i<<endl;
		}
	}
	else if(type=="6in4")
	{
		cout<<mcnt-start+1<<". ��ѡ��"<<mcnt<<"("<<ans<<") [��ѡ��] (2��)\n";
		for(char i='A';i<='F';i++)
		{
			cout<<i<<endl;
		}
	}
	else
	{
		cout<<"ERROR\n";
	}
	cout<<endl;
	mcnt++;
}
int main()
{
	freopen("answer.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	cout<<"#��Ҫ��������������\n\n";
	for(int i=1;i<=40;i++)
	{
		if(i<=10)
		{
			char temp='!';
			cin>>temp;
			if(temp>=97)
			{
				temp=temp-32;
			} 
			output(temp,"cat");
		}
		else if(i<=25)
		{
			char temp='!';
			cin>>temp;
			if(temp>=97)
			{
				temp=temp-32;
			} 
			output(temp,"cloze");
		}
		else if(i<=36)
		{
			char temp='!';
			cin>>temp;
			if(temp>=97)
			{
				temp=temp-32;
			} 
			output(temp,"reading");
		}
		else
		{
			char temp='!';
			cin>>temp;
			if(temp>=97)
			{
				temp=temp-32;
			} 
			output(temp,"6in4");
		}
	} 
	return 0;
}
