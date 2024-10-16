#include<bits/stdc++.h>
using namespace std;
int main (){
//declarar las bariables
float a,b,c;
float x1=0, x2=0;
cout<<"DIGITE EL VALOR DE A: "; cin>>a;
cout<<"DIGITE EL VALOR DE B: "; cin>>b;
cout<<"DIGITE EL VALOR DE C: "; cin>>c;

x1=(-1*b)+sqrt((pow(b,2)-4*a*c))/(2*a);
x2=(-1*b)-sqrt((pow(b,2)-4*a*c))/(2*a);
 cout<<"x1"<<x1<<endl;
 cout<<"x2"<<x2<<endl;
return 0;
}
