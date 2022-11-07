#include<iostream>
using namespace std;



int main()
{
	
 int a,b,c,A,B,C,x,y,w,n;
 cout<<"podaj n do wybrnia co ma sie wykonac  "<<endl;
  cout<<"podaj n = 1 funkcja liniowa  "<<endl;
   cout<<"podaj n = 2 miejsce zerowe funkcji  "<<endl;
 cin>>n;
if (n==1)
	{
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
	}
else if(n==2)
	{
	cout<<"podaj wspó³czynnik a,b,c funkcji liniowej";
		cout<< "\na = ";
		cin>>a;
		cout<<"podaj b"<<endl;
		cin>>b;
		cout<<"podaj c"<<endl;
		cin>>c;
		if(a==0){
			if(b==0){
				if(c==0)
					{
						cout<<"równanie ma nieskonczenie wiele rozwiazan";
					}
					else 
					{
						cout<<"równanie jest sprzeczne";
					}
					
				}
				else {
					if(c==0)
					{
							cout<<"równanie ma nieskonczenie wiele rozwiazan";
					}
					else
					{
							cout<<"równanie nie ma miejsc zerowych";
					}
				}
			}
	else
	{
		int x;
		x= -c/a;
			cout<<"rownanie ma jedno miejsce zerowe "<<x;
	}
}

	return 0;
}




