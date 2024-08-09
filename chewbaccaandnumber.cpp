#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
string helper(string s)
{
	string res="";
	int n = s.size();
	for(int i=0;i<n;i++)
	{
		if(i==0 && s[i]=='9')
		{
			res+=s[i];
			continue;
		}
		if(s[i]-'0'> 9-s[i]+'0')
		{
			res+= 9 - s[i]+'0'+'0';
		}
		else{
			res+=s[i];
		}
	}
	return res;
}
int main() 
{
    // Basic Input/Output Example
    string s;
    cin>> s;
    string ans = helper(s);
    cout<<ans;
    return 0;
}