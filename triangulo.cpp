#include <iostream>
using namespace std;

void triangulo(int a)
{
for(int i=1; i<=a; i++)
{
  for (int j=1; j<=i; j++)
  {
    cout<<"T";
  }
  cout<<endl;
}

 for(int i=a-1; i>=1; i--)
 {
   for (int j=1; j<=i; j++)
   {
     cout<<"T";
   }
   cout<<endl;
 }
}
int main () 
{
  int num;
  cout<<"Dame un número "; 
  cin >> num;
  cout<<endl;
  triangulo(num);
  return 0;
}
