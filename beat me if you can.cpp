//@ravirocx
/* 
This is a simple c++ game 
Any suggestion for improvement or appreciation is welcomed 
email- itsyourraviraj@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n=21,a;
cout<<"*****Rules of the game*****\n\n\n\n";
cout<<"1. There are 21 sticks in total\n";
cout<<"2. you can pick sticks 1 to 4.\n";
cout<<"3. You are playing against @ravi \n";
cout<<"4. the person who will pick the sticks in last ...will lose\nAll the best\n\n\n";

while(1)
{cout<<"Hey input your sticks to take\t";
	cin>>a;
	while(a>4||a<0)
	{
		cout<<"Don't Be Oversmart....you can input in the range of 1-4.....\n";
		cout<<"No worries input again...";
		
		cin>>a;
	}
	n=n-a;
	if(n>=17)
	{
		cout<<"@ravi took "<<n-16<<"....your turn\n";
		n=16;
		cout<<"Sticks left is  "<<n<<endl;
	}
	else if(n>11)
	{
		cout<<"@ravi took "<<n-11<<"....your turn\n";
			n=11;
			cout<<"Sticks left is  "<<n<<endl;
	}
	else if(n>6)
	{
		cout<<"@ravi took "<<n-6<<"....your turn\n";
			n=6;
			cout<<"Sticks left is  "<<n<<endl;
	}
	
	else if(n==5)
	{
		cout<<"@ravi took 4....you lost you just have 1 left....hahahah";return 0;
	}
	else if(n==4)
	{
		cout<<"@ravi took 3....you lost you just have 1 left....hahahah lolll";return 0;
	}
	else if(n==3)
	{
		cout<<"@ravi took 2....you lost you just have 1 left....hahahah";return 0;
	}
	else if(n==2)
	{
		cout<<"@ravi took 1....you lost you just have 1 left....hahahah";return 0;
	}
	else
	{
	
	cout<<"@ravi took "<<a<<"\nupdated sticks are "<<n-a<<endl;
	n=n-a;
	}
	
	
}

cout<<"\n\n\n\n\n\nAny suggestion for improvement or appreciation is welcomed  ......email- itsyourraviraj@gmail.com";

}

