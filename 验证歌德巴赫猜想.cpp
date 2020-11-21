#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	bool myfun(int num);
    int count=0;
	for(int i=6;i<=100;i+=2)
	{int j=3,k=i-j;
	while(j<=i/2)
    {
    	if(myfun(j)&&myfun(k))
    	break;
    	j++;
    	k--;
	}	
	cout<<setw(4)<<i<<"="<<setw(2)<<j<<"+"<<setw(2)<<k;
	count++;
    if(count%5==0)
    cout<<endl; 
	}
	return 0;
} 
bool myfun(int num)
{
	int k,j;
	k = sqrt(double(num));
	for(j=2;j<=k;j++)
	{
	if(num%j==0)
	break;		
	}
	if(j>k) 
	return(true);
	else 
	return(false);
}

