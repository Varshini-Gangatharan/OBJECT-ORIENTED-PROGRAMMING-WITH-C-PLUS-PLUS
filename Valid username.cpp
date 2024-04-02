#include<iostream>
#include<string>
using namespace std;
bool valid()
{
	string user_name;
	if(user_name>="A" and user_name<="Z" and user_name>="a" and user_name<="z")
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	string user_name;
	cout<<"Enter the username:"<<endl;
	cin>>user_name;
	if(valid())
	{
		cout<<"username is valid"<<endl;
	}
	else
	{
		cout<<"Username is not valid"<<endl;
	}
	return 0;
}