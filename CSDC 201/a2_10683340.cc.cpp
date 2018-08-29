#include<iostream>
using namespace std;
int main()
{
	int a;
	bool DA ;
	cout<<"Input your Desired Number"<<endl;
	cin>> a;
	for(int x = 1; x < a; x++){
		if(a%x == 0){
			DA = true;
			break;
		}
		else DA = false;
	}
	if(DA==false ){
		cout<<"Your Number is a Prime Number"<<endl;
	}
	else{
		cout<<"Your Number is not a Prime Number"<<endl;
	}
	system("pause");
	return 0;
}

