#include<iostream>
using namespace std;
int main()
{
	string str="helloHello";
	int pos;
	int x='A';
	int y='Z';
	for(int i=0;i<str.size();i++){
		if((int)str[i]>=x && (int)str[i]<=y){
			pos=i;
			break;
		}
	}
	cout<<"Position is "<<pos<<" and value : "<<str[pos];
}
