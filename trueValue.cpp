#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	void trueValue(int num[],int &N);
	void print(int num[],int N);
	int N;
	cout<<"input n of array:";
	cin>>N;
	int num[N];
	cout<<"input numbers of array:" ;
	for(int i=0;i<N;i++)
	cin>>num[i];
	trueValue(num,N);
	print(num,N);
    return 0;
}
void trueValue(int num[],int &N)
{
	for(int i=0;i<N-1;i++)
	{
		for(int j=i+1;j<N;j++)
	    {
		 if(num[i]==num[j])
		  {
		  	for(int k=j;k<N;k++)
			{
			num[k]=num[k+1];
			}
			N--;
			j--;
		  }
	    }	
	}
}
void print(int num[],int N)
{
	for(int i=0;i<N;i++)
	cout<<setw(4)<<num[i];
}

