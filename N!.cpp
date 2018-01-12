#include <iostream>
using namespace std;

int main (){
	int N, Ans = 1, M=1;
	cout<<"Enter N!:";
	cin>>N;
	
	while(M <= N){
		Ans = Ans*M;
		M++;
		
	}
	cout<<Ans;
	return 0;
} 
