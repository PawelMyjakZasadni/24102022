#include<iostream>
using namespace std;



int main()
{
	
 int a,b,c;
 cout<<"podaj a i b "<<endl;
 cin>>a;
 cin>>b;
	
if (a !=0)
{
	c=(-b/a);
	cout<<"a="<<c<<endl;
}
else  if (a==0)

{
	cout<<"a nie mo¿ê byæ 0 podaj a >0";
}
	return 0;
}



