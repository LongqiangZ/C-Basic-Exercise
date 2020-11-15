#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,delta,x1,x2;
	cout<<"Enter a,b,c:";
	cin>>a>>b>>c;
	delta = b*b-4*a*c;
    if(a==0)
	{
		if(b==0)
		{
			if(c==0)
				cout<<"ERROR"; 
			else
			    cout<<"³ö´í";			
		}
		else
		     cout<<"x="<<-c/b;
	 } 
	 else if(delta>0)
	 {
	   x1 = (-b+sqrt(delta))/2.0/a;
	   x2 = (-b-sqrt(delta))/2.0/a;
	   cout<<"x1="<<x1<<","<<"x2="<<x2<<endl;	
	 }
	 else if(delta==0)
	 {
	   x1=x2=-b/2.0/a;
	   cout<<"x1=x2="<<x1<<endl;
     }
     else
     {
       cout<<"x1="<<-2.0*a/b<<"+"<<sqrt(delta)/2.0/a<<"i"<<",";
       cout<<"x2="<<-2.0*a/b<<"-"<<sqrt(delta)/2.0/a<<"i"<<endl;
	 }
	return 0;
}
