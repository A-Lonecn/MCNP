#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a=125,M=512;
	int x[30]={0};
	x[1]=1;
	cout<<"NO.1  "<<x[1]<<endl;
	for(int i=2;i<=20;i++)
	{
		x[i]=(a*x[i-1])%M;
		cout<<"NO."<<i<<"  "<<x[i]<<"  "<<x[i]/512.0<<endl;
	}
	return 0;
 } 
