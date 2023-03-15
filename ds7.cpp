// C++ program to reverse a string
// s = input () 
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	string s [] = { "i" ,   " am " ,  " solving " , " this " ,  " problem " } ;
	
	string ans = " " ;
	for ( int i = 5; i >= 0; i--) {
		ans += s[i] + " " ;
	}
	
	cout << ( ans . substr ( 0 , ans . length () - 1 )) <<
	
	return 0; 
}



