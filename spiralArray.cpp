#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int N,r,c;
	cin>>N;
	r=c=N;
	int num[r][c];
	int begin=1;
	for(int n=0;n<=N/2;n++)
	{
		for(int j=n;j<=N-n-1;j++) 
        num[n][j]=begin++; 
        for(int i=n+1;i<N-n-1;i++) 
        num[i][N-n-1]=begin++; 
        for(int j=N-n-1;j>n;j--) 
        num[N-n-1][j]=begin++;   
        for(int i=N-n-1;i>n;i--) 
        num[i][n]=begin++; 
	}
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
        cout<<setw(5)<<num[i][j];
	    cout<<endl;
	}
	return 0;
}
