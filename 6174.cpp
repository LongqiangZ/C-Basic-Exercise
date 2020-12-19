#include<iostream>
using namespace std;
int main()
{
	int maxNum(int num[],int N);
	int minNum(int num[],int N);
	int n;
	cin>>n;
	int N=4;
    int num[N];
	while(n!=6174)
	{    
        num[0]=n/1000;
        num[1]=(n-num[0]*1000)/100;
        num[2]=(n-(num[0]*10+num[1])*100)/10;
        num[3]=n%10;
		n=maxNum(num,N)-minNum(num,N);
		cout<<maxNum(num,N)<<"-"<<minNum(num,N)<<"="<<n<<endl;	
	}
	return 0;
}
int maxNum(int num[],int N)
{
	for(int i=0;i<N-1;i++)
	{
	for(int j=0;j<N-1-i;j++)
	{
	 if(num[j]<num[j+1])
	 {
	 int temp;
 	 temp=num[j];
	 num[j]=num[j+1];
 	 num[j+1]=temp;	
	 }	
	}
	}
	int max=num[0]*1000+num[1]*100+num[2]*10+num[3];
	return max;
}
int minNum(int num[],int N)
{
	for(int i=0;i<N-1;i++)
	{
	for(int j=0;j<N-1-i;j++)
	{
	 if(num[j]>num[j+1])
	 {
	 int temp;
 	 temp=num[j];
	 num[j]=num[j+1];
 	 num[j+1]=temp;	
	 }	
	}
	}
	int min=num[0]*1000+num[1]*100+num[2]*10+num[3];
	return min;
}

