#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str="abc";
	int n=str.size();
	while(next_permutation(str.begin(),str.end())){
	cout<<str<<endl;
	}
	
}

