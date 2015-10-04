#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

class stack
{
public:
	stack(int num) {top =0; maxele=num; s=new char[maxele];}
	void push(char a)
	{
		if(top==maxele)
			return;
		s[top++]=a;
	}
	char pop()
	{	
		int ret=-1;
		char val;
		if (top == 0)
			return ret;
		val=s[--top];
		return val;
	}
	void display()
	{
		if(top==0){	cout<<"stack empty"; return;}
		for (int i=0;i<top;i++)
		{	
			if (s[i] == '_')
				cout << " "; 
			cout << s[i];
		}
		cout << "\n";		
	}
private:
	char *s;
	int top;
	int maxele;
};


int main()
{
	stack *s = new stack(100);
	char c;
	int i,j;
	std::string r;
	std::string str;
	cout << "Enter string \n";
	//cin >> str;
	getline(cin,str);
 	str += ' ';
	str += '\n';
	cout << "value in str=" << str;

	for(i=0;str[i]!='\n';i++)
	{
		j=i+1;
		if (str[i]==' ')
		{	
			s->push('_');
			for(;j!=0;--j)
				r += s->pop();
			s->display();

		}
		else
			s->push(str[i]);
	}	
	cout << " i = " << i;	
	
		
	//r.push_back(s->pop());
	//r.push_back(s->pop());
	//for(;i!=0;--i)
	//	r += s->pop();
	
	cout <<" reversed = " << r;
		
}
