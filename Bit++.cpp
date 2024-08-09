#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void helper(string s,int &x)
{
	if(s[0]=='+' && s[1]=='+')
	{
		x++;
	}
	else if(s[1]=='+' && s[2]=='+')
		x++;
	else if(s[0]=='-' && s[1]=='-')
		x--;
	else if(s[1]=='-' && s[2]=='-')
		x--;
}
int main() 
{
    // Basic Input/Output Example
    int n;
    cin >> n;
    int x=0;
    for(int i=0;i<n;i++)
    {
    	string s;
    	cin>>s;
    	helper(s,x);
    }
    cout<<x;
    return 0;
}