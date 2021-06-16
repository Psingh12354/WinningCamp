#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int sum=0;
	if(b>0 && a>0){
		for(int i=0;i<b;i++){
			sum++;
		}
	}
	else 
	{
		if(a>0 && b<0){
			sum=a;
			int x=(-1)*b;
			for(int i=0;i<x;i++){
				sum--;
			}
		}
		if(a<0 && b>0){
			sum=b;
			int x=(-1)*a;
			for(int i=0;i<x;i++){
				sum--;
			}
		}
	}
	cout<<sum;
}
