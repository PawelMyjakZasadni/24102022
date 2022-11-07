#include<iostream>
#include<math.h>
using namespace std;
int a,b,c;
int delta(int a, int b,int c)
{return b*b-4*a*c;}
float e(int a,int  b)
{return ((-b)/(2*a));}
float pierwX1(int  a, int  b, int  delta)
{return (-b+sqrt(delta))/(2*a);}
float pierwX2(int  a, int  b, int  delta)
{return (-b-sqrt(delta))/(2*a);}
int xliniowe(int c, int b)
{return -c/b;}

int main()
{
	
 float a,b,c,A,B,C,x,y,w,n,d;
 cout<<"podaj n do wybrnia co ma sie wykonac  "<<endl;
  cout<<"podaj n = 1 funkcja liniowa  "<<endl;
   cout<<"podaj n = 2 miejsce zerowe funkcji  "<<endl;
   cout<<"podaj n = 3 funkcja kwadraatowa  "<<endl;
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
else if(n==3)
{
	cout<<"Rownanie kwadratowe:\n a*x*x+b*x+c=0 \n";
cout<<"Podaj a: ";
cin>>a;
cout<<"Podaj b: ";
cin>>b;
cout<<"Podaj c: ";
cin>>c;

if (delta(a,b,c)<0)
      {cout<<"Rownanie nie ma rozwiazan \n";}
      else if (delta(a,b,c)==0)
        {cout<<"Jest tylko jedno rozwiazanie:\n x="<<e(a,b);
        cout<<"\n";}
        else if (delta(a,b,c)>0)
            {cout<<"Sa dwa rozwiazania rowne: \n"<<"x1="<<pierwX1(a,b,delta(a,b,c));
            cout<<"\n"<<"x2="<<pierwX2(a,b,delta(a,b,c));
            cout<<"\n";}
if (a==0)
   {
          cout<<"X jest rowne:"<<xliniowe(c,b);
          cout<<"\n";}
   else
   {
       d=delta(a,b,c);
       cout<<"Delta rownania wynosi:"<<d;
       cout<<"\n";
       
}
system ("pause");
}
 


	return 0;
}




