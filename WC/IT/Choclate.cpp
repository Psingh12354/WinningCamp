/*Ques 2: Program for Chocolate and Wrapper Puzzle
Given following three values, the task is to find the total number of maximum chocolates

you can eat.

money : Money you have to buy chocolates
price : Price of a chocolate
wrap : Number of wrappers to be returned for getting one extra chocolate.
It may be assumed that all given values are positive integers and greater than*/
#include<iostream>
using namespace std;
int main(){
	int mon=16,pric=2,wrap=2;
	int flag=1;
	if(mon<pric){
		flag=0;
	}
	if(flag==1){
		int count=mon/pric;
		count+=(count-1)/(wrap-1);
		cout<<count;
	}
}

