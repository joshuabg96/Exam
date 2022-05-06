#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Palindrome( string pal)
{
if (equal( palabra.begin(), palabra.begin() + palabra.size()/2, palabra.rbegin()))
{
    cout <<"es un palindromo"<< endl;
    }
else
cout <<"no es palindromo"<< endl;
}
int main()
{
    string palabra;
	cout<< "Dame una palabra" << endl;
    cin >> pal;
    Palindrome(pal);
    return 0;
}
